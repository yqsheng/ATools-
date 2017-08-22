/********************************************************************************
** Form generated from reading UI file 'ClientExtractor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTEXTRACTOR_H
#define UI_CLIENTEXTRACTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientExtractorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *dir;
    QPushButton *selectDir;
    QCheckBox *replaceFiles;
    QCheckBox *deleteRes;
    QProgressBar *progress;
    QPushButton *ok;

    void setupUi(QDialog *ClientExtractorDialog)
    {
        if (ClientExtractorDialog->objectName().isEmpty())
            ClientExtractorDialog->setObjectName(QStringLiteral("ClientExtractorDialog"));
        ClientExtractorDialog->setWindowModality(Qt::ApplicationModal);
        ClientExtractorDialog->resize(314, 145);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/extract.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClientExtractorDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ClientExtractorDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ClientExtractorDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dir = new QLineEdit(ClientExtractorDialog);
        dir->setObjectName(QStringLiteral("dir"));
        dir->setReadOnly(false);

        horizontalLayout->addWidget(dir);

        selectDir = new QPushButton(ClientExtractorDialog);
        selectDir->setObjectName(QStringLiteral("selectDir"));

        horizontalLayout->addWidget(selectDir);


        verticalLayout->addLayout(horizontalLayout);

        replaceFiles = new QCheckBox(ClientExtractorDialog);
        replaceFiles->setObjectName(QStringLiteral("replaceFiles"));

        verticalLayout->addWidget(replaceFiles);

        deleteRes = new QCheckBox(ClientExtractorDialog);
        deleteRes->setObjectName(QStringLiteral("deleteRes"));

        verticalLayout->addWidget(deleteRes);

        progress = new QProgressBar(ClientExtractorDialog);
        progress->setObjectName(QStringLiteral("progress"));
        progress->setValue(0);

        verticalLayout->addWidget(progress);

        ok = new QPushButton(ClientExtractorDialog);
        ok->setObjectName(QStringLiteral("ok"));

        verticalLayout->addWidget(ok);


        retranslateUi(ClientExtractorDialog);

        QMetaObject::connectSlotsByName(ClientExtractorDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientExtractorDialog)
    {
        ClientExtractorDialog->setWindowTitle(QApplication::translate("ClientExtractorDialog", "Extracteur de client", 0));
        label->setText(QApplication::translate("ClientExtractorDialog", "Dossier racine :", 0));
        selectDir->setText(QApplication::translate("ClientExtractorDialog", "...", 0));
        replaceFiles->setText(QApplication::translate("ClientExtractorDialog", "Remplacer les fichiers existants", 0));
        deleteRes->setText(QApplication::translate("ClientExtractorDialog", "Supprimer les fichiers ressources (.res) apr\303\250s extraction", 0));
        ok->setText(QApplication::translate("ClientExtractorDialog", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientExtractorDialog: public Ui_ClientExtractorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTEXTRACTOR_H
