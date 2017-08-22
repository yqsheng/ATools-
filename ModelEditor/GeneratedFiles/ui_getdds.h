/********************************************************************************
** Form generated from reading UI file 'getdds.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETDDS_H
#define UI_GETDDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *resource_path_line;
    QToolButton *resource_button;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *client_path_line;
    QToolButton *client_button;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListWidget *model_list;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QPushButton *list_button;
    QLabel *label_6;
    QPushButton *save_rely_on_file;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QPushButton *one_key;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *rely_on_list;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(815, 652);
        verticalLayout_5 = new QVBoxLayout(Dialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        resource_path_line = new QLineEdit(Dialog);
        resource_path_line->setObjectName(QStringLiteral("resource_path_line"));

        horizontalLayout_3->addWidget(resource_path_line);

        resource_button = new QToolButton(Dialog);
        resource_button->setObjectName(QStringLiteral("resource_button"));

        horizontalLayout_3->addWidget(resource_button);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        client_path_line = new QLineEdit(Dialog);
        client_path_line->setObjectName(QStringLiteral("client_path_line"));

        horizontalLayout_2->addWidget(client_path_line);

        client_button = new QToolButton(Dialog);
        client_button->setObjectName(QStringLiteral("client_button"));

        horizontalLayout_2->addWidget(client_button);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        model_list = new QListWidget(Dialog);
        model_list->setObjectName(QStringLiteral("model_list"));

        verticalLayout_3->addWidget(model_list);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        list_button = new QPushButton(Dialog);
        list_button->setObjectName(QStringLiteral("list_button"));

        verticalLayout->addWidget(list_button);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        save_rely_on_file = new QPushButton(Dialog);
        save_rely_on_file->setObjectName(QStringLiteral("save_rely_on_file"));

        verticalLayout->addWidget(save_rely_on_file);

        verticalSpacer = new QSpacerItem(0, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        one_key = new QPushButton(Dialog);
        one_key->setObjectName(QStringLiteral("one_key"));

        verticalLayout->addWidget(one_key);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        rely_on_list = new QListWidget(Dialog);
        rely_on_list->setObjectName(QStringLiteral("rely_on_list"));

        verticalLayout_2->addWidget(rely_on_list);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_4->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Resource\350\267\257\345\276\204</span></p></body></html>", 0));
        resource_button->setText(QApplication::translate("Dialog", "...", 0));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\256\242\346\210\267\347\253\257\350\267\257\345\276\204</span></p></body></html>", 0));
        client_button->setText(QApplication::translate("Dialog", "...", 0));
        label_2->setText(QApplication::translate("Dialog", "\346\250\241\345\236\213\345\210\227\350\241\250\357\274\232", 0));
        label_5->setText(QApplication::translate("Dialog", "\347\254\254\344\270\200\346\255\245", 0));
        list_button->setText(QApplication::translate("Dialog", "\345\210\227\345\207\272\346\250\241\345\236\213\346\226\207\344\273\266", 0));
        label_6->setText(QApplication::translate("Dialog", "\347\254\254\344\272\214\346\255\245", 0));
        save_rely_on_file->setText(QApplication::translate("Dialog", "\344\277\235\345\255\230\344\276\235\350\265\226\346\226\207\344\273\266", 0));
        label_7->setText(QApplication::translate("Dialog", "\347\254\254\344\270\211\346\255\245", 0));
        one_key->setText(QApplication::translate("Dialog", "\344\270\200\351\224\256\346\225\264\347\220\206", 0));
        label_3->setText(QApplication::translate("Dialog", "\344\276\235\350\265\226\346\226\207\344\273\266\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETDDS_H
