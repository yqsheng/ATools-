/********************************************************************************
** Form generated from reading UI file 'Random.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOM_H
#define UI_RANDOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RandomDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QDoubleSpinBox *minRot;
    QCheckBox *rotation;
    QDoubleSpinBox *maxRot;
    QDoubleSpinBox *minScale;
    QDoubleSpinBox *maxScale;
    QCheckBox *scale;
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RandomDialog)
    {
        if (RandomDialog->objectName().isEmpty())
            RandomDialog->setObjectName(QStringLiteral("RandomDialog"));
        RandomDialog->setWindowModality(Qt::WindowModal);
        RandomDialog->resize(259, 95);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/random.png"), QSize(), QIcon::Normal, QIcon::Off);
        RandomDialog->setWindowIcon(icon);
        RandomDialog->setModal(true);
        verticalLayout = new QVBoxLayout(RandomDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        minRot = new QDoubleSpinBox(RandomDialog);
        minRot->setObjectName(QStringLiteral("minRot"));
        minRot->setDecimals(3);
        minRot->setMinimum(0);
        minRot->setMaximum(360);

        gridLayout->addWidget(minRot, 1, 1, 1, 1);

        rotation = new QCheckBox(RandomDialog);
        rotation->setObjectName(QStringLiteral("rotation"));
        rotation->setChecked(true);

        gridLayout->addWidget(rotation, 1, 0, 1, 1);

        maxRot = new QDoubleSpinBox(RandomDialog);
        maxRot->setObjectName(QStringLiteral("maxRot"));
        maxRot->setDecimals(3);
        maxRot->setMaximum(360);
        maxRot->setValue(360);

        gridLayout->addWidget(maxRot, 1, 3, 1, 1);

        minScale = new QDoubleSpinBox(RandomDialog);
        minScale->setObjectName(QStringLiteral("minScale"));
        minScale->setDecimals(3);
        minScale->setMinimum(0.001);
        minScale->setMaximum(1000);
        minScale->setValue(0.5);

        gridLayout->addWidget(minScale, 0, 1, 1, 1);

        maxScale = new QDoubleSpinBox(RandomDialog);
        maxScale->setObjectName(QStringLiteral("maxScale"));
        maxScale->setDecimals(3);
        maxScale->setMinimum(0.001);
        maxScale->setMaximum(1000);
        maxScale->setValue(1.5);

        gridLayout->addWidget(maxScale, 0, 3, 1, 1);

        scale = new QCheckBox(RandomDialog);
        scale->setObjectName(QStringLiteral("scale"));
        scale->setChecked(true);

        gridLayout->addWidget(scale, 0, 0, 1, 1);

        label = new QLabel(RandomDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        label_2 = new QLabel(RandomDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(RandomDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RandomDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RandomDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RandomDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RandomDialog);
    } // setupUi

    void retranslateUi(QDialog *RandomDialog)
    {
        RandomDialog->setWindowTitle(QApplication::translate("RandomDialog", "Taille et rotation al\303\251atoires", 0));
        rotation->setText(QApplication::translate("RandomDialog", "Rotation :", 0));
        scale->setText(QApplication::translate("RandomDialog", "Taille :", 0));
        label->setText(QApplication::translate("RandomDialog", "~", 0));
        label_2->setText(QApplication::translate("RandomDialog", "~", 0));
    } // retranslateUi

};

namespace Ui {
    class RandomDialog: public Ui_RandomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOM_H
