/********************************************************************************
** Form generated from reading UI file 'DialogEditEffects.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITEFFECTS_H
#define UI_DIALOGEDITEFFECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEditEffects
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *tree;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkReflect;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkOpacity;
    QSpinBox *spinOpacity;
    QCheckBox *check2Sides;
    QCheckBox *checkSelfIlluminate;
    QCheckBox *checkHighlight;
    QPushButton *changeTexture;
    QPushButton *CWOrCCW;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogEditEffects)
    {
        if (DialogEditEffects->objectName().isEmpty())
            DialogEditEffects->setObjectName(QStringLiteral("DialogEditEffects"));
        DialogEditEffects->resize(400, 300);
        DialogEditEffects->setMinimumSize(QSize(400, 300));
        DialogEditEffects->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogEditEffects->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogEditEffects);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tree = new QTreeWidget(DialogEditEffects);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setHeaderHidden(true);

        horizontalLayout->addWidget(tree);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        checkReflect = new QCheckBox(DialogEditEffects);
        checkReflect->setObjectName(QStringLiteral("checkReflect"));
        checkReflect->setEnabled(false);

        verticalLayout_3->addWidget(checkReflect);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkOpacity = new QCheckBox(DialogEditEffects);
        checkOpacity->setObjectName(QStringLiteral("checkOpacity"));
        checkOpacity->setEnabled(false);

        horizontalLayout_2->addWidget(checkOpacity);

        spinOpacity = new QSpinBox(DialogEditEffects);
        spinOpacity->setObjectName(QStringLiteral("spinOpacity"));
        spinOpacity->setEnabled(false);
        spinOpacity->setMaximum(255);
        spinOpacity->setValue(255);

        horizontalLayout_2->addWidget(spinOpacity);


        verticalLayout_3->addLayout(horizontalLayout_2);

        check2Sides = new QCheckBox(DialogEditEffects);
        check2Sides->setObjectName(QStringLiteral("check2Sides"));
        check2Sides->setEnabled(false);

        verticalLayout_3->addWidget(check2Sides);

        checkSelfIlluminate = new QCheckBox(DialogEditEffects);
        checkSelfIlluminate->setObjectName(QStringLiteral("checkSelfIlluminate"));
        checkSelfIlluminate->setEnabled(false);

        verticalLayout_3->addWidget(checkSelfIlluminate);

        checkHighlight = new QCheckBox(DialogEditEffects);
        checkHighlight->setObjectName(QStringLiteral("checkHighlight"));
        checkHighlight->setEnabled(false);

        verticalLayout_3->addWidget(checkHighlight);

        changeTexture = new QPushButton(DialogEditEffects);
        changeTexture->setObjectName(QStringLiteral("changeTexture"));
        changeTexture->setEnabled(false);

        verticalLayout_3->addWidget(changeTexture);

        CWOrCCW = new QPushButton(DialogEditEffects);
        CWOrCCW->setObjectName(QStringLiteral("CWOrCCW"));
        CWOrCCW->setEnabled(false);

        verticalLayout_3->addWidget(CWOrCCW);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DialogEditEffects);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogEditEffects);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogEditEffects, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogEditEffects, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogEditEffects);
    } // setupUi

    void retranslateUi(QDialog *DialogEditEffects)
    {
        DialogEditEffects->setWindowTitle(QApplication::translate("DialogEditEffects", "\303\211dition des effets", 0));
        checkReflect->setText(QApplication::translate("DialogEditEffects", "Reflet", 0));
        checkOpacity->setText(QApplication::translate("DialogEditEffects", "Opacit\303\251", 0));
        check2Sides->setText(QApplication::translate("DialogEditEffects", "2 c\303\264t\303\251s visibles", 0));
        checkSelfIlluminate->setText(QApplication::translate("DialogEditEffects", "Pas d'\303\251clairage", 0));
        checkHighlight->setText(QApplication::translate("DialogEditEffects", "Lampe", 0));
        changeTexture->setText(QApplication::translate("DialogEditEffects", "Changer la texture", 0));
        CWOrCCW->setText(QApplication::translate("DialogEditEffects", "CW <-> CCW", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogEditEffects: public Ui_DialogEditEffects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITEFFECTS_H
