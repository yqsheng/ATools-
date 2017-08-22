/********************************************************************************
** Form generated from reading UI file 'ContinentEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTINENTEDIT_H
#define UI_CONTINENTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContinentEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *continentList;
    QVBoxLayout *verticalLayout_2;
    QPushButton *newContinent;
    QPushButton *deleteContinent;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupVertices;
    QVBoxLayout *verticalLayout_3;
    QListWidget *vertexList;
    QGroupBox *groupProperties;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QCheckBox *town;
    QLabel *label_2;
    QSpinBox *ID;
    QGroupBox *useEnvir;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QComboBox *weather;
    QLabel *label_4;
    QDoubleSpinBox *startFog;
    QLabel *label_5;
    QDoubleSpinBox *endFog;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QWidget *ambient;
    QPushButton *setAmbient;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QWidget *diffuse;
    QPushButton *setDiffuse;
    QLabel *label_8;
    QLineEdit *skyTexture;
    QLabel *label_9;
    QLineEdit *cloudTexture;
    QLabel *label_10;
    QLineEdit *sunTexture;
    QLabel *label_11;
    QLineEdit *moonTexture;

    void setupUi(QDialog *ContinentEditDialog)
    {
        if (ContinentEditDialog->objectName().isEmpty())
            ContinentEditDialog->setObjectName(QStringLiteral("ContinentEditDialog"));
        ContinentEditDialog->resize(454, 523);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/edit_continents.png"), QSize(), QIcon::Normal, QIcon::Off);
        ContinentEditDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ContinentEditDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(ContinentEditDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        continentList = new QListWidget(groupBox);
        continentList->setObjectName(QStringLiteral("continentList"));
        continentList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(continentList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        newContinent = new QPushButton(groupBox);
        newContinent->setObjectName(QStringLiteral("newContinent"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainFrame/Resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        newContinent->setIcon(icon1);

        verticalLayout_2->addWidget(newContinent);

        deleteContinent = new QPushButton(groupBox);
        deleteContinent->setObjectName(QStringLiteral("deleteContinent"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainFrame/Resources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteContinent->setIcon(icon2);

        verticalLayout_2->addWidget(deleteContinent);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        groupVertices = new QGroupBox(ContinentEditDialog);
        groupVertices->setObjectName(QStringLiteral("groupVertices"));
        groupVertices->setEnabled(false);
        verticalLayout_3 = new QVBoxLayout(groupVertices);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        vertexList = new QListWidget(groupVertices);
        vertexList->setObjectName(QStringLiteral("vertexList"));
        vertexList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_3->addWidget(vertexList);


        horizontalLayout_2->addWidget(groupVertices);

        groupProperties = new QGroupBox(ContinentEditDialog);
        groupProperties->setObjectName(QStringLiteral("groupProperties"));
        groupProperties->setEnabled(false);
        formLayout = new QFormLayout(groupProperties);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupProperties);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(groupProperties);
        name->setObjectName(QStringLiteral("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        town = new QCheckBox(groupProperties);
        town->setObjectName(QStringLiteral("town"));

        formLayout->setWidget(3, QFormLayout::FieldRole, town);

        label_2 = new QLabel(groupProperties);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        ID = new QSpinBox(groupProperties);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setMaximum(99999);

        formLayout->setWidget(1, QFormLayout::FieldRole, ID);


        horizontalLayout_2->addWidget(groupProperties);


        verticalLayout->addLayout(horizontalLayout_2);

        useEnvir = new QGroupBox(ContinentEditDialog);
        useEnvir->setObjectName(QStringLiteral("useEnvir"));
        useEnvir->setEnabled(false);
        useEnvir->setCheckable(true);
        useEnvir->setChecked(false);
        formLayout_2 = new QFormLayout(useEnvir);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(useEnvir);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        weather = new QComboBox(useEnvir);
        weather->setObjectName(QStringLiteral("weather"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, weather);

        label_4 = new QLabel(useEnvir);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        startFog = new QDoubleSpinBox(useEnvir);
        startFog->setObjectName(QStringLiteral("startFog"));
        startFog->setDecimals(3);
        startFog->setMaximum(9999);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, startFog);

        label_5 = new QLabel(useEnvir);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        endFog = new QDoubleSpinBox(useEnvir);
        endFog->setObjectName(QStringLiteral("endFog"));
        endFog->setDecimals(3);
        endFog->setMaximum(9999);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, endFog);

        label_6 = new QLabel(useEnvir);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ambient = new QWidget(useEnvir);
        ambient->setObjectName(QStringLiteral("ambient"));
        ambient->setStyleSheet(QStringLiteral("background-color:#7f7f7f;"));

        horizontalLayout_3->addWidget(ambient);

        setAmbient = new QPushButton(useEnvir);
        setAmbient->setObjectName(QStringLiteral("setAmbient"));

        horizontalLayout_3->addWidget(setAmbient);


        formLayout_2->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        label_7 = new QLabel(useEnvir);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        diffuse = new QWidget(useEnvir);
        diffuse->setObjectName(QStringLiteral("diffuse"));
        diffuse->setStyleSheet(QStringLiteral("background-color:#000000;"));

        horizontalLayout_4->addWidget(diffuse);

        setDiffuse = new QPushButton(useEnvir);
        setDiffuse->setObjectName(QStringLiteral("setDiffuse"));

        horizontalLayout_4->addWidget(setDiffuse);


        formLayout_2->setLayout(4, QFormLayout::FieldRole, horizontalLayout_4);

        label_8 = new QLabel(useEnvir);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_8);

        skyTexture = new QLineEdit(useEnvir);
        skyTexture->setObjectName(QStringLiteral("skyTexture"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, skyTexture);

        label_9 = new QLabel(useEnvir);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_9);

        cloudTexture = new QLineEdit(useEnvir);
        cloudTexture->setObjectName(QStringLiteral("cloudTexture"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, cloudTexture);

        label_10 = new QLabel(useEnvir);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_10);

        sunTexture = new QLineEdit(useEnvir);
        sunTexture->setObjectName(QStringLiteral("sunTexture"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, sunTexture);

        label_11 = new QLabel(useEnvir);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_11);

        moonTexture = new QLineEdit(useEnvir);
        moonTexture->setObjectName(QStringLiteral("moonTexture"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, moonTexture);


        verticalLayout->addWidget(useEnvir);


        retranslateUi(ContinentEditDialog);

        QMetaObject::connectSlotsByName(ContinentEditDialog);
    } // setupUi

    void retranslateUi(QDialog *ContinentEditDialog)
    {
        ContinentEditDialog->setWindowTitle(QApplication::translate("ContinentEditDialog", "\303\211dition des continents", 0));
        groupBox->setTitle(QApplication::translate("ContinentEditDialog", "Liste des continents", 0));
        newContinent->setText(QApplication::translate("ContinentEditDialog", "Nouveau", 0));
        deleteContinent->setText(QApplication::translate("ContinentEditDialog", "Supprimer", 0));
        groupVertices->setTitle(QApplication::translate("ContinentEditDialog", "Vertices", 0));
        groupProperties->setTitle(QApplication::translate("ContinentEditDialog", "Propri\303\251t\303\251s", 0));
        label->setText(QApplication::translate("ContinentEditDialog", "Nom :", 0));
        town->setText(QApplication::translate("ContinentEditDialog", "Ville", 0));
        label_2->setText(QApplication::translate("ContinentEditDialog", "ID :", 0));
        useEnvir->setTitle(QApplication::translate("ContinentEditDialog", "Utiliser l'environnement", 0));
        label_3->setText(QApplication::translate("ContinentEditDialog", "Temps :", 0));
        weather->clear();
        weather->insertItems(0, QStringList()
         << QApplication::translate("ContinentEditDialog", "D\303\251faut", 0)
         << QApplication::translate("ContinentEditDialog", "Temp\303\252te", 0)
         << QApplication::translate("ContinentEditDialog", "Pluie", 0)
         << QApplication::translate("ContinentEditDialog", "Neige", 0)
         << QApplication::translate("ContinentEditDialog", "Soleil", 0)
        );
        label_4->setText(QApplication::translate("ContinentEditDialog", "D\303\251but brouillard :", 0));
        label_5->setText(QApplication::translate("ContinentEditDialog", "Fin brouillard :", 0));
        label_6->setText(QApplication::translate("ContinentEditDialog", "Ambiance :", 0));
        setAmbient->setText(QApplication::translate("ContinentEditDialog", "...", 0));
        label_7->setText(QApplication::translate("ContinentEditDialog", "Diffuse :", 0));
        setDiffuse->setText(QApplication::translate("ContinentEditDialog", "...", 0));
        label_8->setText(QApplication::translate("ContinentEditDialog", "Texture du ciel :", 0));
        label_9->setText(QApplication::translate("ContinentEditDialog", "Texture des nuages :", 0));
        label_10->setText(QApplication::translate("ContinentEditDialog", "Texture du soleil :", 0));
        label_11->setText(QApplication::translate("ContinentEditDialog", "Texture de la lune :", 0));
    } // retranslateUi

};

namespace Ui {
    class ContinentEditDialog: public Ui_ContinentEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTINENTEDIT_H
