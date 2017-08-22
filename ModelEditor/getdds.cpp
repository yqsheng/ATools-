#include "stdafx.h"
#include "getdds.h"
#include <iterator>
getdds::getdds(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect_slot();
}

getdds::~getdds()
{
	delete m_oldBlocks;
	delete m_obj3D;
}
void getdds::connect_slot()
{
	connect(ui.resource_button, SIGNAL(clicked()), this, SLOT(get_resource_path()));
	connect(ui.client_button, SIGNAL(clicked()), this, SLOT(get_client_path()));
	connect(ui.list_button, SIGNAL(clicked()), this, SLOT(list_model_fuc()));
	connect(ui.model_list, SIGNAL(itemSelectionChanged()), this, SLOT(get_rely_on()));
	connect(ui.save_rely_on_file, SIGNAL(clicked()), this, SLOT(save_all_rely_on()));
}
bool getdds::is_exits(QList<QListWidgetItem> items, QListWidgetItem item)
{
	QList<QListWidgetItem>::iterator i;
	for (i = items.begin(); i != items.end();i++)
	{
		if (i->text() == item.text())
		{
			return true;
		}
	}
	return false;
}
void getdds::add_rely_on(QList<QListWidgetItem> &items)
{
	for (int i = 0; i < items.count();i++)
	{
		ui.rely_on_list->addItem(items.at(i).text());
	}
}
void getdds::add_dds(QList<QListWidgetItem> &items, QListWidgetItem *item_l)
{
	for (int i = 0; i < (m_obj3D->m_LOD ? MAX_GROUP : 1); i++)
	{
		for (int j = 0; j < m_obj3D->m_groups[i].objectCount; j++)
		{
			for (int k = 0; k < m_obj3D->m_groups[i].objects[j].materialBlockCount; k++)
			{
				if (m_obj3D->m_groups[i].objects[j].material)
				{
					QStringList *str_list = new QStringList(string(
						string(m_obj3D->m_groups[i].objects[j].materials[m_obj3D->m_groups[i].objects[j].materialBlocks[k].materialID].textureName)));
					for (int l = 0; l < str_list->length(); l++)
					{
						item_l = new QListWidgetItem(str_list->at(l));
						if (!is_exits(items, *item_l))
						{
							items.push_back(*item_l);
						}
					}
				}
				else
				{
					item_l = new QListWidgetItem("-");
					ui.rely_on_list->addItem(item_l);
				}
			}
		}
	}
}
void getdds::add_ani(QList<QListWidgetItem> &items, QListWidgetItem *item_l)
{

}
void getdds::add_skeleton(QList<QListWidgetItem> &items, QListWidgetItem *item_l)
{

}
void getdds::add_vector(QList<QListWidgetItem> &items, QListWidgetItem *item_l)
{
	m_obj3D = new CObject3D();
	bool ret = m_obj3D->Load(*obj_path,1);  //这里的string 是 重定义的 实际是QString

	if (!ret)
	{
		ui.model_list->removeItemWidget(item_r);
		return;
	}
	ui.rely_on_list->clear();
	add_dds(items, item_l);
	add_ani(items, item_l);
	add_skeleton(items, item_l);
	delete m_obj3D;
}
void getdds::save_all_rely_on()
{
	if (!is_valid_path())
	{
		return;
	}
	QList<QListWidgetItem> items;
	for (int i = 0; i < ui.model_list->count();i++)
	{
		QString item_name = ui.model_list->item(i)->text();
		obj_path = new QString(model_dir + "//" + item_name);
		if (!(item_name.toLower().startsWith("part") || item_name.toLower().startsWith("mvr") || item_name.toLower().startsWith("item") || \
			item_name.toLower().startsWith("arrow") || item_name.toLower().startsWith("sfx") || item_name.toLower().startsWith("xi") || \
			item_name.toLower().startsWith("region")))
		{
			continue;
		}
		add_vector(items, NULL);
	}
	write_to_file(items);
	QMessageBox::information(this, "successed", "already finshed,thanks");
}
bool getdds::is_valid_path()
{
	if (ui.client_path_line->text().length() == 0)
	{
		QMessageBox::information(this, "error", " Invalid path");
		return false;
	}

	return true;
}
void getdds::write_to_file(QList<QListWidgetItem> &items)
{
	QFile file("./Texturelist.txt");
	if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
		return;
	QTextStream file_out(&file);
	for (int i = 0; i < items.count();i++)
	{
		file_out<<items.at(i).text()<<"\n";
	}
	file.close();
}
void getdds::get_rely_on()
{
	if (!is_valid_path())
	{
		return;
	}
	QListWidgetItem *item_r = ui.model_list->currentItem();
	QString item_name = item_r->text();
	//先获取贴图
	obj_path = new QString(model_dir + "//" + item_name);
	QListWidgetItem *item_l;
	add_vector(items, NULL);
	add_rely_on(items);
	
}

void getdds::get_resource_path()
{
	resource_path = QFileDialog::getExistingDirectory(this, "resource path", "./");
	ui.resource_path_line->setText(resource_path);

}
void getdds::get_client_path()
{
	clien_path = QFileDialog::getExistingDirectory(this, "client path", "./");
	ui.client_path_line->setText(clien_path);
}
void getdds::list_model_fuc()
{
	ui.model_list->clear();
	model_dir  = clien_path + "//model";
	QDir dir(model_dir);
	if (!dir.exists())
	{
		QMessageBox::information(this,"error","open error");
		return;
	}
	dir.setFilter(QDir::Files | QDir::NoSymLinks);
	QFileInfoList list = dir.entryInfoList();
	int  file_count = list.count();
	if (file_count < 0)
	{
		QMessageBox::information(this, "文件夹打开错误", "模型文件夹未找到");
		return;
	}
	for (int i = 0; i < file_count;i++)
	{
		QFileInfo file_info = list.at(i);
		QString suffix = file_info.suffix();
		if (QString::compare(suffix, QString("o3d"), Qt::CaseInsensitive) == 0)
		{
			QListWidgetItem *new_obj = new QListWidgetItem(file_info.fileName());
			ui.model_list->addItem(new_obj);
		}
	}
}
