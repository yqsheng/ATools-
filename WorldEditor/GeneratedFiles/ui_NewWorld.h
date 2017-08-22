/********************************************************************************
** Form generated from reading UI file 'NewWorld.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWORLD_H
#define UI_NEWWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewWorldDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QLabel *label_6;
    QSpinBox *spinBox_4;
    QLabel *label_7;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewWorldDialog)
    {
        if (NewWorldDialog->objectName().isEmpty())
            NewWorldDialog->setObjectName(QStringLiteral("NewWorldDialog"));
        NewWorldDialog->resize(466, 249);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewWorldDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(NewWorldDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(NewWorldDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(NewWorldDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaxVisibleItems(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(NewWorldDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(NewWorldDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(NewWorldDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(pushButton);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(NewWorldDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinBox = new QSpinBox(NewWorldDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(999);
        spinBox->setValue(100);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox);

        label_4 = new QLabel(NewWorldDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        spinBox_2 = new QSpinBox(NewWorldDialog);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(1);
        spinBox_2->setValue(5);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_2);

        label_5 = new QLabel(NewWorldDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        spinBox_3 = new QSpinBox(NewWorldDialog);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMinimum(1);
        spinBox_3->setValue(5);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox_3);

        label_6 = new QLabel(NewWorldDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        spinBox_4 = new QSpinBox(NewWorldDialog);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setEnabled(true);
        spinBox_4->setMinimum(1);
        spinBox_4->setMaximum(4);
        spinBox_4->setValue(4);

        formLayout->setWidget(5, QFormLayout::FieldRole, spinBox_4);

        label_7 = new QLabel(NewWorldDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        checkBox = new QCheckBox(NewWorldDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, checkBox);


        horizontalLayout->addLayout(formLayout);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(NewWorldDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewWorldDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewWorldDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewWorldDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewWorldDialog);
    } // setupUi

    void retranslateUi(QDialog *NewWorldDialog)
    {
        NewWorldDialog->setWindowTitle(QApplication::translate("NewWorldDialog", "Nouvelle map", 0));
        label->setText(QApplication::translate("NewWorldDialog", "Texture :", 0));
        label_2->setText(QApplication::translate("NewWorldDialog", "Image pour la hauteur :", 0));
        pushButton->setText(QApplication::translate("NewWorldDialog", "...", 0));
        label_3->setText(QApplication::translate("NewWorldDialog", "Hauteur de base :", 0));
        label_4->setText(QApplication::translate("NewWorldDialog", "Largeur :", 0));
        label_5->setText(QApplication::translate("NewWorldDialog", "Longueur :", 0));
        label_6->setText(QApplication::translate("NewWorldDialog", "MPU :", 0));
        label_7->setText(QApplication::translate("NewWorldDialog", "Donjon :", 0));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewWorldDialog: public Ui_NewWorldDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWORLD_H
