/********************************************************************************
** Form generated from reading UI file 'SkinAuto.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINAUTO_H
#define UI_SKINAUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkinAutoDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QPushButton *loadSkel;
    QLabel *skelName;
    QTreeWidget *bonesList;
    QPushButton *okSkel;

    void setupUi(QDialog *SkinAutoDialog)
    {
        if (SkinAutoDialog->objectName().isEmpty())
            SkinAutoDialog->setObjectName(QStringLiteral("SkinAutoDialog"));
        SkinAutoDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/ModelEditor.png"), QSize(), QIcon::Normal, QIcon::Off);
        SkinAutoDialog->setWindowIcon(icon);
        SkinAutoDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(SkinAutoDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(SkinAutoDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        loadSkel = new QPushButton(tab);
        loadSkel->setObjectName(QStringLiteral("loadSkel"));

        verticalLayout->addWidget(loadSkel);

        skelName = new QLabel(tab);
        skelName->setObjectName(QStringLiteral("skelName"));

        verticalLayout->addWidget(skelName);

        bonesList = new QTreeWidget(tab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        bonesList->setHeaderItem(__qtreewidgetitem);
        bonesList->setObjectName(QStringLiteral("bonesList"));
        bonesList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bonesList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        bonesList->setHeaderHidden(true);

        verticalLayout->addWidget(bonesList);

        okSkel = new QPushButton(tab);
        okSkel->setObjectName(QStringLiteral("okSkel"));
        okSkel->setEnabled(false);

        verticalLayout->addWidget(okSkel);

        tabWidget->addTab(tab, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(SkinAutoDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SkinAutoDialog);
    } // setupUi

    void retranslateUi(QDialog *SkinAutoDialog)
    {
        SkinAutoDialog->setWindowTitle(QApplication::translate("SkinAutoDialog", "Skin auto", 0));
        loadSkel->setText(QApplication::translate("SkinAutoDialog", "Charger squelette", 0));
        skelName->setText(QString());
        okSkel->setText(QApplication::translate("SkinAutoDialog", "Ok", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SkinAutoDialog", "Squelette", 0));
    } // retranslateUi

};

namespace Ui {
    class SkinAutoDialog: public Ui_SkinAutoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINAUTO_H
