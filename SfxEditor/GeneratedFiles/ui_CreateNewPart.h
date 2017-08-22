/********************************************************************************
** Form generated from reading UI file 'CreateNewPart.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWPART_H
#define UI_CREATENEWPART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(282, 202);
        Dialog->setMinimumSize(QSize(282, 202));
        Dialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, 0, -1, 0);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_2);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        comboBox_3 = new QComboBox(Dialog);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, 0, -1);
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Nouvelle partie", 0));
        label_2->setText(QApplication::translate("Dialog", "Nom :", 0));
        lineEdit->setText(QApplication::translate("Dialog", "unknown", 0));
        label->setText(QApplication::translate("Dialog", "Type :", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Billboard", 0)
         << QApplication::translate("Dialog", "Particle", 0)
         << QApplication::translate("Dialog", "CustomMesh", 0)
         << QApplication::translate("Dialog", "Mesh", 0)
        );
        comboBox->setCurrentText(QApplication::translate("Dialog", "Billboard", 0));
        label_3->setText(QApplication::translate("Dialog", "Alpha :", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Glow", 0)
         << QApplication::translate("Dialog", "Blend", 0)
        );
        label_4->setText(QApplication::translate("Dialog", "Bill :", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Normal", 0)
         << QApplication::translate("Dialog", "Bill", 0)
         << QApplication::translate("Dialog", "Bottom", 0)
         << QApplication::translate("Dialog", "Pole", 0)
        );
        pushButton->setText(QApplication::translate("Dialog", "...", 0));
        label_5->setText(QApplication::translate("Dialog", "Texture/model :", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWPART_H
