/********************************************************************************
** Form generated from reading UI file 'WorldProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORLDPROPERTIES_H
#define UI_WORLDPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorldPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboWorldRevivalID;
    QLabel *label_2;
    QLineEdit *editRevivalPlace;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QCheckBox *checkCanFly;
    QLabel *label_4;
    QComboBox *comboBGM;
    QLabel *label_5;
    QComboBox *comboModePK;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *skyTexture1;
    QLineEdit *skyTexture2;
    QLineEdit *skyTexture3;
    QLabel *label_15;
    QLineEdit *sunTexture;
    QLabel *label_16;
    QLineEdit *moonTexture;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_4;
    QLabel *label_12;
    QLineEdit *cloudTexture1;
    QLabel *label_13;
    QLineEdit *cloudTexture2;
    QLabel *label_14;
    QLineEdit *cloudTexture3;
    QLabel *label_17;
    QLineEdit *seacloudTexture;
    QGroupBox *isInDoor;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QDoubleSpinBox *lightDirY;
    QDoubleSpinBox *lightDirZ;
    QLabel *label_7;
    QDoubleSpinBox *lightDirX;
    QLabel *label_8;
    QWidget *colorAmbient;
    QWidget *colorDiffuse;
    QPushButton *editColorAmbient;
    QPushButton *editColorDiffuse;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_5;
    QDoubleSpinBox *fogStart;
    QDoubleSpinBox *fogEnd;
    QDoubleSpinBox *fogDensity;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WorldPropertiesDialog)
    {
        if (WorldPropertiesDialog->objectName().isEmpty())
            WorldPropertiesDialog->setObjectName(QStringLiteral("WorldPropertiesDialog"));
        WorldPropertiesDialog->resize(614, 427);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        WorldPropertiesDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(WorldPropertiesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        groupBox = new QGroupBox(WorldPropertiesDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboWorldRevivalID = new QComboBox(groupBox);
        comboWorldRevivalID->setObjectName(QStringLiteral("comboWorldRevivalID"));
        comboWorldRevivalID->setMaxVisibleItems(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboWorldRevivalID);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        editRevivalPlace = new QLineEdit(groupBox);
        editRevivalPlace->setObjectName(QStringLiteral("editRevivalPlace"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editRevivalPlace);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(WorldPropertiesDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        checkCanFly = new QCheckBox(groupBox_2);
        checkCanFly->setObjectName(QStringLiteral("checkCanFly"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, checkCanFly);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        comboBGM = new QComboBox(groupBox_2);
        comboBGM->setObjectName(QStringLiteral("comboBGM"));
        comboBGM->setMaxVisibleItems(20);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBGM);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        comboModePK = new QComboBox(groupBox_2);
        comboModePK->setObjectName(QStringLiteral("comboModePK"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboModePK);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(WorldPropertiesDialog);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        formLayout_3 = new QFormLayout(groupBox_5);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        skyTexture1 = new QLineEdit(groupBox_5);
        skyTexture1->setObjectName(QStringLiteral("skyTexture1"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, skyTexture1);

        skyTexture2 = new QLineEdit(groupBox_5);
        skyTexture2->setObjectName(QStringLiteral("skyTexture2"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, skyTexture2);

        skyTexture3 = new QLineEdit(groupBox_5);
        skyTexture3->setObjectName(QStringLiteral("skyTexture3"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, skyTexture3);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_15);

        sunTexture = new QLineEdit(groupBox_5);
        sunTexture->setObjectName(QStringLiteral("sunTexture"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, sunTexture);

        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_16);

        moonTexture = new QLineEdit(groupBox_5);
        moonTexture->setObjectName(QStringLiteral("moonTexture"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, moonTexture);


        gridLayout_2->addWidget(groupBox_5, 2, 1, 1, 1);

        groupBox_6 = new QGroupBox(WorldPropertiesDialog);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        formLayout_4 = new QFormLayout(groupBox_6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        cloudTexture1 = new QLineEdit(groupBox_6);
        cloudTexture1->setObjectName(QStringLiteral("cloudTexture1"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cloudTexture1);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        cloudTexture2 = new QLineEdit(groupBox_6);
        cloudTexture2->setObjectName(QStringLiteral("cloudTexture2"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, cloudTexture2);

        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_14);

        cloudTexture3 = new QLineEdit(groupBox_6);
        cloudTexture3->setObjectName(QStringLiteral("cloudTexture3"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, cloudTexture3);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_17);

        seacloudTexture = new QLineEdit(groupBox_6);
        seacloudTexture->setObjectName(QStringLiteral("seacloudTexture"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, seacloudTexture);


        gridLayout_2->addWidget(groupBox_6, 2, 0, 1, 1);

        isInDoor = new QGroupBox(WorldPropertiesDialog);
        isInDoor->setObjectName(QStringLiteral("isInDoor"));
        isInDoor->setCheckable(true);
        isInDoor->setChecked(false);
        gridLayout = new QGridLayout(isInDoor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(isInDoor);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        lightDirY = new QDoubleSpinBox(isInDoor);
        lightDirY->setObjectName(QStringLiteral("lightDirY"));
        lightDirY->setDecimals(3);
        lightDirY->setMinimum(-99);
        lightDirY->setMaximum(99);
        lightDirY->setSingleStep(0.1);

        gridLayout->addWidget(lightDirY, 0, 2, 1, 1);

        lightDirZ = new QDoubleSpinBox(isInDoor);
        lightDirZ->setObjectName(QStringLiteral("lightDirZ"));
        lightDirZ->setDecimals(3);
        lightDirZ->setMinimum(-99);
        lightDirZ->setMaximum(99);
        lightDirZ->setSingleStep(0.1);

        gridLayout->addWidget(lightDirZ, 0, 3, 1, 1);

        label_7 = new QLabel(isInDoor);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        lightDirX = new QDoubleSpinBox(isInDoor);
        lightDirX->setObjectName(QStringLiteral("lightDirX"));
        lightDirX->setDecimals(3);
        lightDirX->setMinimum(-99);
        lightDirX->setMaximum(99);
        lightDirX->setSingleStep(0.1);
        lightDirX->setValue(0);

        gridLayout->addWidget(lightDirX, 0, 1, 1, 1);

        label_8 = new QLabel(isInDoor);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        colorAmbient = new QWidget(isInDoor);
        colorAmbient->setObjectName(QStringLiteral("colorAmbient"));
        colorAmbient->setStyleSheet(QStringLiteral("background-color:#7f7f7f;"));

        gridLayout->addWidget(colorAmbient, 1, 1, 1, 1);

        colorDiffuse = new QWidget(isInDoor);
        colorDiffuse->setObjectName(QStringLiteral("colorDiffuse"));
        colorDiffuse->setStyleSheet(QStringLiteral("background-color:#7f7f7f;"));

        gridLayout->addWidget(colorDiffuse, 2, 1, 1, 1);

        editColorAmbient = new QPushButton(isInDoor);
        editColorAmbient->setObjectName(QStringLiteral("editColorAmbient"));

        gridLayout->addWidget(editColorAmbient, 1, 2, 1, 1);

        editColorDiffuse = new QPushButton(isInDoor);
        editColorDiffuse->setObjectName(QStringLiteral("editColorDiffuse"));

        gridLayout->addWidget(editColorDiffuse, 2, 2, 1, 1);


        gridLayout_2->addWidget(isInDoor, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(WorldPropertiesDialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        formLayout_5 = new QFormLayout(groupBox_4);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        fogStart = new QDoubleSpinBox(groupBox_4);
        fogStart->setObjectName(QStringLiteral("fogStart"));
        fogStart->setDecimals(3);
        fogStart->setMaximum(9999);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, fogStart);

        fogEnd = new QDoubleSpinBox(groupBox_4);
        fogEnd->setObjectName(QStringLiteral("fogEnd"));
        fogEnd->setDecimals(3);
        fogEnd->setMaximum(9999);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, fogEnd);

        fogDensity = new QDoubleSpinBox(groupBox_4);
        fogDensity->setObjectName(QStringLiteral("fogDensity"));
        fogDensity->setDecimals(3);
        fogDensity->setMinimum(-9999);
        fogDensity->setMaximum(9999);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, fogDensity);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_18);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_19);

        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_20);


        gridLayout_2->addWidget(groupBox_4, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        buttonBox = new QDialogButtonBox(WorldPropertiesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WorldPropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WorldPropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WorldPropertiesDialog, SLOT(reject()));
        QObject::connect(isInDoor, SIGNAL(clicked(bool)), groupBox_5, SLOT(setDisabled(bool)));
        QObject::connect(isInDoor, SIGNAL(clicked(bool)), cloudTexture1, SLOT(setDisabled(bool)));
        QObject::connect(isInDoor, SIGNAL(clicked(bool)), cloudTexture2, SLOT(setDisabled(bool)));
        QObject::connect(isInDoor, SIGNAL(clicked(bool)), cloudTexture3, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(WorldPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *WorldPropertiesDialog)
    {
        WorldPropertiesDialog->setWindowTitle(QApplication::translate("WorldPropertiesDialog", "Propri\303\251t\303\251s du monde", 0));
        groupBox->setTitle(QApplication::translate("WorldPropertiesDialog", "Lieu de renaissance", 0));
        label->setText(QApplication::translate("WorldPropertiesDialog", "ID du monde :", 0));
        label_2->setText(QApplication::translate("WorldPropertiesDialog", "Nom du lieu :", 0));
        groupBox_2->setTitle(QApplication::translate("WorldPropertiesDialog", "G\303\251n\303\251ral", 0));
        label_3->setText(QApplication::translate("WorldPropertiesDialog", "Vol autoris\303\251 :", 0));
        checkCanFly->setText(QString());
        label_4->setText(QApplication::translate("WorldPropertiesDialog", "BGM :", 0));
        label_5->setText(QApplication::translate("WorldPropertiesDialog", "PK :", 0));
        comboModePK->clear();
        comboModePK->insertItems(0, QStringList()
         << QApplication::translate("WorldPropertiesDialog", "Pas de PK", 0)
         << QApplication::translate("WorldPropertiesDialog", "PK avec p\303\251nalit\303\251", 0)
         << QApplication::translate("WorldPropertiesDialog", "PK sans p\303\251nalit\303\251", 0)
        );
        groupBox_5->setTitle(QApplication::translate("WorldPropertiesDialog", "Textures du ciel", 0));
        label_9->setText(QApplication::translate("WorldPropertiesDialog", "Jour :", 0));
        label_10->setText(QApplication::translate("WorldPropertiesDialog", "Soir :", 0));
        label_11->setText(QApplication::translate("WorldPropertiesDialog", "Nuit :", 0));
        label_15->setText(QApplication::translate("WorldPropertiesDialog", "Soleil :", 0));
        label_16->setText(QApplication::translate("WorldPropertiesDialog", "Lune :", 0));
        groupBox_6->setTitle(QApplication::translate("WorldPropertiesDialog", "Textures des nuages", 0));
        label_12->setText(QApplication::translate("WorldPropertiesDialog", "Jour :", 0));
        label_13->setText(QApplication::translate("WorldPropertiesDialog", "Soir :", 0));
        label_14->setText(QApplication::translate("WorldPropertiesDialog", "Nuit :", 0));
        label_17->setText(QApplication::translate("WorldPropertiesDialog", "Nuages au sol :", 0));
        isInDoor->setTitle(QApplication::translate("WorldPropertiesDialog", "Donjon", 0));
        label_6->setText(QApplication::translate("WorldPropertiesDialog", "Direction :", 0));
        lightDirY->setPrefix(QApplication::translate("WorldPropertiesDialog", "Y: ", 0));
        lightDirZ->setPrefix(QApplication::translate("WorldPropertiesDialog", "Z: ", 0));
        label_7->setText(QApplication::translate("WorldPropertiesDialog", "Ambiance :", 0));
        lightDirX->setPrefix(QApplication::translate("WorldPropertiesDialog", "X: ", 0));
        label_8->setText(QApplication::translate("WorldPropertiesDialog", "Diffuse :", 0));
        editColorAmbient->setText(QApplication::translate("WorldPropertiesDialog", "...", 0));
        editColorDiffuse->setText(QApplication::translate("WorldPropertiesDialog", "...", 0));
        groupBox_4->setTitle(QApplication::translate("WorldPropertiesDialog", "Brouillard", 0));
        fogStart->setPrefix(QString());
        fogEnd->setPrefix(QString());
        fogDensity->setPrefix(QString());
        label_18->setText(QApplication::translate("WorldPropertiesDialog", "D\303\251but :", 0));
        label_19->setText(QApplication::translate("WorldPropertiesDialog", "Fin :", 0));
        label_20->setText(QApplication::translate("WorldPropertiesDialog", "Densit\303\251 :", 0));
    } // retranslateUi

};

namespace Ui {
    class WorldPropertiesDialog: public Ui_WorldPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORLDPROPERTIES_H
