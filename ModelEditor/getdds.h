#ifndef GETDDS_H
#define GETDDS_H

#include "ui_getdds.h"
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QDialog>
#include <Object3D.h>
#include <QString>
#include <QFileDialog>
#include <QDir>
#include <QFileInfoList>
#include <QListWidgetItem>
#include "Object3D.h"
#include <QList>
#include <QFile>

class getdds : public QDialog
{
	Q_OBJECT
public:
	getdds(QWidget *parent = 0);
	~getdds();
	QString resource_path;
	QString clien_path;
	QString model_dir;
	bool is_exits(QList<QListWidgetItem> items, QListWidgetItem item);
	void connect_slot();
	void add_rely_on(QList<QListWidgetItem> &items);
	void add_vector(QList<QListWidgetItem> &items, QListWidgetItem *item_l);
	void add_dds(QList<QListWidgetItem> &items, QListWidgetItem *item_l);
	void add_ani(QList<QListWidgetItem> &items, QListWidgetItem *item_l);
	void add_skeleton(QList<QListWidgetItem> &items, QListWidgetItem *item_l);
	bool is_valid_path();
	void write_to_file(QList<QListWidgetItem> &items);
private:
	Ui::Dialog ui;
	MaterialBlock* m_oldBlocks;
	CObject3D *m_obj3D;
	QString *obj_path;
private slots:
	void get_rely_on();
	void get_resource_path();
	void get_client_path();
	void list_model_fuc();
	void save_all_rely_on();
};

#endif // GETDDS_H
