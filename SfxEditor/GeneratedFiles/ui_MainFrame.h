/********************************************************************************
** Form generated from reading UI file 'MainFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFRAME_H
#define UI_MAINFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFrameClass
{
public:
    QAction *actionOuvrir;
    QAction *actionFusionner;
    QAction *actionFermer;
    QAction *actionEnregistrer_sous;
    QAction *actionQuitter;
    QAction *actionGrille;
    QAction *actionJouer;
    QAction *actionStop;
    QAction *actionPlein_cran;
    QAction *action_propos;
    QAction *actionQt;
    QAction *actionEnregistrer;
    QAction *actionModel_3D;
    QAction *actionAjouter_une_partie;
    QAction *actionSupprimer_la_partie;
    QAction *actionCouleur_du_fond;
    QAction *actionFran_ais;
    QAction *actionEnglish;
    QAction *actionDeutsch;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menu_dition;
    QMenu *menuAffichage;
    QMenu *menuLangage;
    QMenu *menuFen_tres;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockTimeline;
    QWidget *dockWidgetContents;
    QDockWidget *dockParts;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAddPart;
    QPushButton *btnRemovePart;
    QListWidget *listParts;
    QDockWidget *dockEditPart;
    QWidget *dockWidgetContents_4;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *editPartName;
    QLabel *label_10;
    QCheckBox *editPartVisible;
    QLabel *label_7;
    QComboBox *editPartBill;
    QLabel *label_8;
    QComboBox *editPartBlend;
    QLabel *label_9;
    QLabel *label_11;
    QSpinBox *editPartTexFrame;
    QLabel *label_12;
    QSpinBox *editPartTexLoop;
    QLabel *label_13;
    QSpinBox *editCustomMeshPointCount;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editPartTexture;
    QPushButton *btnSetPartTexture;
    QDockWidget *dockEditKey;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QDoubleSpinBox *editKeyPosX;
    QDoubleSpinBox *editKeyPosZ;
    QLabel *label_2;
    QLabel *label_4;
    QDoubleSpinBox *editKeyPosY;
    QDoubleSpinBox *editKeyPosRotX;
    QLabel *label_3;
    QLabel *label_5;
    QDoubleSpinBox *editKeyScaleY;
    QDoubleSpinBox *editKeyScaleZ;
    QDoubleSpinBox *editKeyPosRotY;
    QDoubleSpinBox *editKeyPosRotZ;
    QDoubleSpinBox *editKeyScaleX;
    QDoubleSpinBox *editKeyRotX;
    QDoubleSpinBox *editKeyRotY;
    QDoubleSpinBox *editKeyRotZ;
    QSpinBox *editKeyAlpha;
    QLabel *currentKeyFrame;
    QDockWidget *dockParticles;
    QWidget *dockWidgetContents_6;
    QGridLayout *gridLayout_2;
    QLabel *label_37;
    QSpinBox *editParticleCreate;
    QLabel *label_39;
    QLabel *label_40;
    QSpinBox *editParticleCreateNum;
    QSpinBox *editParticleFrameAppear;
    QSpinBox *editParticleFrameKeep;
    QLabel *label_22;
    QSpinBox *editParticleFrameDisappear;
    QDoubleSpinBox *editParticleYLow;
    QDoubleSpinBox *editParticleStartPosVar;
    QDoubleSpinBox *editParticleStartPosVarY;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_35;
    QLabel *label_29;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_31;
    QLabel *label_19;
    QCheckBox *editParticleRepeatScale;
    QLabel *label_20;
    QLabel *label_14;
    QLabel *label_33;
    QLabel *label_23;
    QLabel *label_21;
    QLabel *label_15;
    QLabel *label_25;
    QDoubleSpinBox *editParticleYHigh;
    QDoubleSpinBox *editParticleXZLow;
    QLabel *label_24;
    QDoubleSpinBox *editParticleXZHigh;
    QDoubleSpinBox *editParticleAccelX;
    QDoubleSpinBox *editParticleAccelY;
    QDoubleSpinBox *editParticleAccelZ;
    QCheckBox *editParticleRepeat;
    QDoubleSpinBox *editParticleScaleX;
    QDoubleSpinBox *editParticleScaleY;
    QDoubleSpinBox *editParticleScaleZ;
    QDoubleSpinBox *editParticleRotationLowX;
    QLabel *label_28;
    QDoubleSpinBox *editParticleRotationHighX;
    QDoubleSpinBox *editParticleRotationLowY;
    QLabel *label_30;
    QDoubleSpinBox *editParticleRotationHighY;
    QDoubleSpinBox *editParticleRotationLowZ;
    QLabel *label_32;
    QDoubleSpinBox *editParticleRotationHighZ;
    QDoubleSpinBox *editParticleScalSpeedXLow;
    QLabel *label_34;
    QDoubleSpinBox *editParticleScalSpeedXHigh;
    QDoubleSpinBox *editParticleScalSpeedYLow;
    QLabel *label_36;
    QDoubleSpinBox *editParticleScalSpeedYHigh;
    QDoubleSpinBox *editParticleScalSpeedZLow;
    QLabel *label_38;
    QDoubleSpinBox *editParticleScalSpeedZHigh;
    QDoubleSpinBox *editParticleScaleEndX;
    QDoubleSpinBox *editParticleScaleEndY;
    QDoubleSpinBox *editParticleScaleEndZ;
    QDoubleSpinBox *editParticleScaleSpeedX;
    QDoubleSpinBox *editParticleScaleSpeedY;
    QDoubleSpinBox *editParticleScaleSpeedZ;

    void setupUi(QMainWindow *MainFrameClass)
    {
        if (MainFrameClass->objectName().isEmpty())
            MainFrameClass->setObjectName(QStringLiteral("MainFrameClass"));
        MainFrameClass->resize(1280, 800);
        MainFrameClass->setMinimumSize(QSize(400, 300));
        MainFrameClass->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/SfxEditor.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainFrameClass->setWindowIcon(icon);
        actionOuvrir = new QAction(MainFrameClass);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainFrame/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon1);
        actionFusionner = new QAction(MainFrameClass);
        actionFusionner->setObjectName(QStringLiteral("actionFusionner"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainFrame/Resources/merge.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFusionner->setIcon(icon2);
        actionFermer = new QAction(MainFrameClass);
        actionFermer->setObjectName(QStringLiteral("actionFermer"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MainFrame/Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFermer->setIcon(icon3);
        actionEnregistrer_sous = new QAction(MainFrameClass);
        actionEnregistrer_sous->setObjectName(QStringLiteral("actionEnregistrer_sous"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MainFrame/Resources/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer_sous->setIcon(icon4);
        actionQuitter = new QAction(MainFrameClass);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MainFrame/Resources/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon5);
        actionGrille = new QAction(MainFrameClass);
        actionGrille->setObjectName(QStringLiteral("actionGrille"));
        actionGrille->setCheckable(true);
        actionGrille->setChecked(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/MainFrame/Resources/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrille->setIcon(icon6);
        actionJouer = new QAction(MainFrameClass);
        actionJouer->setObjectName(QStringLiteral("actionJouer"));
        actionJouer->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/MainFrame/Resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QStringLiteral(":/MainFrame/Resources/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        actionJouer->setIcon(icon7);
        actionStop = new QAction(MainFrameClass);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/MainFrame/Resources/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon8);
        actionPlein_cran = new QAction(MainFrameClass);
        actionPlein_cran->setObjectName(QStringLiteral("actionPlein_cran"));
        actionPlein_cran->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/MainFrame/Resources/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlein_cran->setIcon(icon9);
        action_propos = new QAction(MainFrameClass);
        action_propos->setObjectName(QStringLiteral("action_propos"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/MainFrame/Resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_propos->setIcon(icon10);
        actionQt = new QAction(MainFrameClass);
        actionQt->setObjectName(QStringLiteral("actionQt"));
        actionQt->setIcon(icon10);
        actionEnregistrer = new QAction(MainFrameClass);
        actionEnregistrer->setObjectName(QStringLiteral("actionEnregistrer"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/MainFrame/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer->setIcon(icon11);
        actionModel_3D = new QAction(MainFrameClass);
        actionModel_3D->setObjectName(QStringLiteral("actionModel_3D"));
        actionModel_3D->setCheckable(true);
        actionModel_3D->setChecked(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/MainFrame/Resources/model.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModel_3D->setIcon(icon12);
        actionAjouter_une_partie = new QAction(MainFrameClass);
        actionAjouter_une_partie->setObjectName(QStringLiteral("actionAjouter_une_partie"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/MainFrame/Resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjouter_une_partie->setIcon(icon13);
        actionSupprimer_la_partie = new QAction(MainFrameClass);
        actionSupprimer_la_partie->setObjectName(QStringLiteral("actionSupprimer_la_partie"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/MainFrame/Resources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSupprimer_la_partie->setIcon(icon14);
        actionCouleur_du_fond = new QAction(MainFrameClass);
        actionCouleur_du_fond->setObjectName(QStringLiteral("actionCouleur_du_fond"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/MainFrame/Resources/background_color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCouleur_du_fond->setIcon(icon15);
        actionFran_ais = new QAction(MainFrameClass);
        actionFran_ais->setObjectName(QStringLiteral("actionFran_ais"));
        actionFran_ais->setCheckable(true);
        actionFran_ais->setChecked(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/MainFrame/Resources/language_french.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFran_ais->setIcon(icon16);
        actionEnglish = new QAction(MainFrameClass);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionEnglish->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/MainFrame/Resources/language_english.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnglish->setIcon(icon17);
        actionDeutsch = new QAction(MainFrameClass);
        actionDeutsch->setObjectName(QStringLiteral("actionDeutsch"));
        actionDeutsch->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/MainFrame/Resources/language_german.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeutsch->setIcon(icon18);
        centralWidget = new QWidget(MainFrameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainFrameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainFrameClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menu_dition = new QMenu(menuBar);
        menu_dition->setObjectName(QStringLiteral("menu_dition"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        menuLangage = new QMenu(menuAffichage);
        menuLangage->setObjectName(QStringLiteral("menuLangage"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/MainFrame/Resources/language.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLangage->setIcon(icon19);
        menuFen_tres = new QMenu(menuBar);
        menuFen_tres->setObjectName(QStringLiteral("menuFen_tres"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainFrameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainFrameClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainFrameClass->addToolBar(Qt::BottomToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainFrameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral("background-color: #067600;"));
        MainFrameClass->setStatusBar(statusBar);
        dockTimeline = new QDockWidget(MainFrameClass);
        dockTimeline->setObjectName(QStringLiteral("dockTimeline"));
        dockTimeline->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockTimeline->setWidget(dockWidgetContents);
        MainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockTimeline);
        dockParts = new QDockWidget(MainFrameClass);
        dockParts->setObjectName(QStringLiteral("dockParts"));
        dockParts->setMinimumSize(QSize(200, 151));
        dockParts->setMaximumSize(QSize(524287, 524287));
        dockParts->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 0, 2, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnAddPart = new QPushButton(dockWidgetContents_2);
        btnAddPart->setObjectName(QStringLiteral("btnAddPart"));
        btnAddPart->setIcon(icon13);

        horizontalLayout_2->addWidget(btnAddPart);

        btnRemovePart = new QPushButton(dockWidgetContents_2);
        btnRemovePart->setObjectName(QStringLiteral("btnRemovePart"));
        btnRemovePart->setIcon(icon14);

        horizontalLayout_2->addWidget(btnRemovePart);


        verticalLayout->addLayout(horizontalLayout_2);

        listParts = new QListWidget(dockWidgetContents_2);
        listParts->setObjectName(QStringLiteral("listParts"));

        verticalLayout->addWidget(listParts);

        dockParts->setWidget(dockWidgetContents_2);
        MainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockParts);
        dockEditPart = new QDockWidget(MainFrameClass);
        dockEditPart->setObjectName(QStringLiteral("dockEditPart"));
        dockEditPart->setEnabled(true);
        dockEditPart->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        formLayout = new QFormLayout(dockWidgetContents_4);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(4);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(2, 0, 2, 0);
        label_6 = new QLabel(dockWidgetContents_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        editPartName = new QLineEdit(dockWidgetContents_4);
        editPartName->setObjectName(QStringLiteral("editPartName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editPartName);

        label_10 = new QLabel(dockWidgetContents_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_10);

        editPartVisible = new QCheckBox(dockWidgetContents_4);
        editPartVisible->setObjectName(QStringLiteral("editPartVisible"));
        editPartVisible->setTristate(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, editPartVisible);

        label_7 = new QLabel(dockWidgetContents_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        editPartBill = new QComboBox(dockWidgetContents_4);
        editPartBill->setObjectName(QStringLiteral("editPartBill"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editPartBill);

        label_8 = new QLabel(dockWidgetContents_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        editPartBlend = new QComboBox(dockWidgetContents_4);
        editPartBlend->setObjectName(QStringLiteral("editPartBlend"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editPartBlend);

        label_9 = new QLabel(dockWidgetContents_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        label_11 = new QLabel(dockWidgetContents_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_11);

        editPartTexFrame = new QSpinBox(dockWidgetContents_4);
        editPartTexFrame->setObjectName(QStringLiteral("editPartTexFrame"));
        editPartTexFrame->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editPartTexFrame->setMinimum(1);
        editPartTexFrame->setMaximum(99999);
        editPartTexFrame->setValue(1);

        formLayout->setWidget(7, QFormLayout::FieldRole, editPartTexFrame);

        label_12 = new QLabel(dockWidgetContents_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_12);

        editPartTexLoop = new QSpinBox(dockWidgetContents_4);
        editPartTexLoop->setObjectName(QStringLiteral("editPartTexLoop"));
        editPartTexLoop->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editPartTexLoop->setMinimum(1);
        editPartTexLoop->setMaximum(99999);
        editPartTexLoop->setValue(1);

        formLayout->setWidget(8, QFormLayout::FieldRole, editPartTexLoop);

        label_13 = new QLabel(dockWidgetContents_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_13);

        editCustomMeshPointCount = new QSpinBox(dockWidgetContents_4);
        editCustomMeshPointCount->setObjectName(QStringLiteral("editCustomMeshPointCount"));
        editCustomMeshPointCount->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editCustomMeshPointCount->setMinimum(1);
        editCustomMeshPointCount->setMaximum(180);
        editCustomMeshPointCount->setSingleStep(5);
        editCustomMeshPointCount->setValue(20);

        formLayout->setWidget(9, QFormLayout::FieldRole, editCustomMeshPointCount);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        editPartTexture = new QLineEdit(dockWidgetContents_4);
        editPartTexture->setObjectName(QStringLiteral("editPartTexture"));
        editPartTexture->setReadOnly(false);

        horizontalLayout->addWidget(editPartTexture);

        btnSetPartTexture = new QPushButton(dockWidgetContents_4);
        btnSetPartTexture->setObjectName(QStringLiteral("btnSetPartTexture"));
        btnSetPartTexture->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(btnSetPartTexture);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        dockEditPart->setWidget(dockWidgetContents_4);
        MainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockEditPart);
        dockEditKey = new QDockWidget(MainFrameClass);
        dockEditKey->setObjectName(QStringLiteral("dockEditKey"));
        dockEditKey->setEnabled(true);
        dockEditKey->setMinimumSize(QSize(363, 138));
        dockEditKey->setMaximumSize(QSize(524287, 524287));
        dockEditKey->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        gridLayout_5 = new QGridLayout(dockWidgetContents_3);
        gridLayout_5->setSpacing(4);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(2, 0, 2, 0);
        label = new QLabel(dockWidgetContents_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        editKeyPosX = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyPosX->setObjectName(QStringLiteral("editKeyPosX"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editKeyPosX->sizePolicy().hasHeightForWidth());
        editKeyPosX->setSizePolicy(sizePolicy);
        editKeyPosX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyPosX->setDecimals(4);
        editKeyPosX->setMinimum(-9999.99);
        editKeyPosX->setMaximum(9999.99);
        editKeyPosX->setSingleStep(0.5);

        gridLayout_5->addWidget(editKeyPosX, 0, 1, 1, 1);

        editKeyPosZ = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyPosZ->setObjectName(QStringLiteral("editKeyPosZ"));
        editKeyPosZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyPosZ->setDecimals(4);
        editKeyPosZ->setMinimum(-9999.99);
        editKeyPosZ->setMaximum(9999.99);
        editKeyPosZ->setSingleStep(0.5);

        gridLayout_5->addWidget(editKeyPosZ, 0, 3, 1, 1);

        label_2 = new QLabel(dockWidgetContents_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(dockWidgetContents_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 3, 0, 1, 1);

        editKeyPosY = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyPosY->setObjectName(QStringLiteral("editKeyPosY"));
        editKeyPosY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyPosY->setDecimals(4);
        editKeyPosY->setMinimum(-9999.99);
        editKeyPosY->setMaximum(9999.99);
        editKeyPosY->setSingleStep(0.5);

        gridLayout_5->addWidget(editKeyPosY, 0, 2, 1, 1);

        editKeyPosRotX = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyPosRotX->setObjectName(QStringLiteral("editKeyPosRotX"));
        sizePolicy.setHeightForWidth(editKeyPosRotX->sizePolicy().hasHeightForWidth());
        editKeyPosRotX->setSizePolicy(sizePolicy);
        editKeyPosRotX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyPosRotX->setDecimals(4);
        editKeyPosRotX->setMinimum(-9999.99);
        editKeyPosRotX->setMaximum(9999.99);
        editKeyPosRotX->setSingleStep(10);

        gridLayout_5->addWidget(editKeyPosRotX, 1, 1, 1, 1);

        label_3 = new QLabel(dockWidgetContents_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(dockWidgetContents_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 4, 0, 1, 1);

        editKeyScaleY = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyScaleY->setObjectName(QStringLiteral("editKeyScaleY"));
        editKeyScaleY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyScaleY->setDecimals(4);
        editKeyScaleY->setMinimum(-9999.99);
        editKeyScaleY->setMaximum(9999.99);
        editKeyScaleY->setSingleStep(0.1);
        editKeyScaleY->setValue(1);

        gridLayout_5->addWidget(editKeyScaleY, 2, 2, 1, 1);

        editKeyScaleZ = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyScaleZ->setObjectName(QStringLiteral("editKeyScaleZ"));
        editKeyScaleZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyScaleZ->setDecimals(4);
        editKeyScaleZ->setMinimum(-9999.99);
        editKeyScaleZ->setMaximum(9999.99);
        editKeyScaleZ->setSingleStep(0.1);
        editKeyScaleZ->setValue(1);

        gridLayout_5->addWidget(editKeyScaleZ, 2, 3, 1, 1);

        editKeyPosRotY = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyPosRotY->setObjectName(QStringLiteral("editKeyPosRotY"));
        editKeyPosRotY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyPosRotY->setDecimals(4);
        editKeyPosRotY->setMinimum(-9999.99);
        editKeyPosRotY->setMaximum(9999.99);
        editKeyPosRotY->setSingleStep(10);

        gridLayout_5->addWidget(editKeyPosRotY, 1, 2, 1, 1);

        editKeyPosRotZ = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyPosRotZ->setObjectName(QStringLiteral("editKeyPosRotZ"));
        editKeyPosRotZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyPosRotZ->setDecimals(4);
        editKeyPosRotZ->setMinimum(-9999.99);
        editKeyPosRotZ->setMaximum(9999.99);
        editKeyPosRotZ->setSingleStep(10);

        gridLayout_5->addWidget(editKeyPosRotZ, 1, 3, 1, 1);

        editKeyScaleX = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyScaleX->setObjectName(QStringLiteral("editKeyScaleX"));
        sizePolicy.setHeightForWidth(editKeyScaleX->sizePolicy().hasHeightForWidth());
        editKeyScaleX->setSizePolicy(sizePolicy);
        editKeyScaleX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyScaleX->setDecimals(4);
        editKeyScaleX->setMinimum(-9999.99);
        editKeyScaleX->setMaximum(9999.99);
        editKeyScaleX->setSingleStep(0.1);
        editKeyScaleX->setValue(1);

        gridLayout_5->addWidget(editKeyScaleX, 2, 1, 1, 1);

        editKeyRotX = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyRotX->setObjectName(QStringLiteral("editKeyRotX"));
        sizePolicy.setHeightForWidth(editKeyRotX->sizePolicy().hasHeightForWidth());
        editKeyRotX->setSizePolicy(sizePolicy);
        editKeyRotX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyRotX->setDecimals(4);
        editKeyRotX->setMinimum(-9999.99);
        editKeyRotX->setMaximum(9999.99);
        editKeyRotX->setSingleStep(10);

        gridLayout_5->addWidget(editKeyRotX, 3, 1, 1, 1);

        editKeyRotY = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyRotY->setObjectName(QStringLiteral("editKeyRotY"));
        editKeyRotY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyRotY->setDecimals(4);
        editKeyRotY->setMinimum(-9999.99);
        editKeyRotY->setMaximum(9999.99);
        editKeyRotY->setSingleStep(10);

        gridLayout_5->addWidget(editKeyRotY, 3, 2, 1, 1);

        editKeyRotZ = new QDoubleSpinBox(dockWidgetContents_3);
        editKeyRotZ->setObjectName(QStringLiteral("editKeyRotZ"));
        editKeyRotZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyRotZ->setDecimals(4);
        editKeyRotZ->setMinimum(-9999.99);
        editKeyRotZ->setMaximum(9999.99);
        editKeyRotZ->setSingleStep(10);

        gridLayout_5->addWidget(editKeyRotZ, 3, 3, 1, 1);

        editKeyAlpha = new QSpinBox(dockWidgetContents_3);
        editKeyAlpha->setObjectName(QStringLiteral("editKeyAlpha"));
        sizePolicy.setHeightForWidth(editKeyAlpha->sizePolicy().hasHeightForWidth());
        editKeyAlpha->setSizePolicy(sizePolicy);
        editKeyAlpha->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editKeyAlpha->setMaximum(255);
        editKeyAlpha->setSingleStep(10);
        editKeyAlpha->setValue(255);
        editKeyAlpha->setDisplayIntegerBase(10);

        gridLayout_5->addWidget(editKeyAlpha, 4, 1, 1, 1);

        currentKeyFrame = new QLabel(dockWidgetContents_3);
        currentKeyFrame->setObjectName(QStringLiteral("currentKeyFrame"));

        gridLayout_5->addWidget(currentKeyFrame, 4, 3, 1, 1);

        dockEditKey->setWidget(dockWidgetContents_3);
        MainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockEditKey);
        dockParticles = new QDockWidget(MainFrameClass);
        dockParticles->setObjectName(QStringLiteral("dockParticles"));
        dockParticles->setFloating(false);
        dockParticles->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_6);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        label_37 = new QLabel(dockWidgetContents_6);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_2->addWidget(label_37, 17, 0, 1, 1);

        editParticleCreate = new QSpinBox(dockWidgetContents_6);
        editParticleCreate->setObjectName(QStringLiteral("editParticleCreate"));
        editParticleCreate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleCreate->setMaximum(99999);

        gridLayout_2->addWidget(editParticleCreate, 1, 1, 1, 1);

        label_39 = new QLabel(dockWidgetContents_6);
        label_39->setObjectName(QStringLiteral("label_39"));

        gridLayout_2->addWidget(label_39, 18, 0, 1, 1);

        label_40 = new QLabel(dockWidgetContents_6);
        label_40->setObjectName(QStringLiteral("label_40"));

        gridLayout_2->addWidget(label_40, 19, 0, 1, 1);

        editParticleCreateNum = new QSpinBox(dockWidgetContents_6);
        editParticleCreateNum->setObjectName(QStringLiteral("editParticleCreateNum"));
        editParticleCreateNum->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleCreateNum->setMaximum(99999);

        gridLayout_2->addWidget(editParticleCreateNum, 0, 1, 1, 1);

        editParticleFrameAppear = new QSpinBox(dockWidgetContents_6);
        editParticleFrameAppear->setObjectName(QStringLiteral("editParticleFrameAppear"));
        editParticleFrameAppear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleFrameAppear->setMaximum(99999);

        gridLayout_2->addWidget(editParticleFrameAppear, 2, 1, 1, 1);

        editParticleFrameKeep = new QSpinBox(dockWidgetContents_6);
        editParticleFrameKeep->setObjectName(QStringLiteral("editParticleFrameKeep"));
        editParticleFrameKeep->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleFrameKeep->setMaximum(99999);

        gridLayout_2->addWidget(editParticleFrameKeep, 3, 1, 1, 1);

        label_22 = new QLabel(dockWidgetContents_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMaximumSize(QSize(16777215, 16777215));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_22, 7, 2, 1, 1);

        editParticleFrameDisappear = new QSpinBox(dockWidgetContents_6);
        editParticleFrameDisappear->setObjectName(QStringLiteral("editParticleFrameDisappear"));
        editParticleFrameDisappear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleFrameDisappear->setMaximum(99999);

        gridLayout_2->addWidget(editParticleFrameDisappear, 4, 1, 1, 1);

        editParticleYLow = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleYLow->setObjectName(QStringLiteral("editParticleYLow"));
        editParticleYLow->setWrapping(false);
        editParticleYLow->setFrame(true);
        editParticleYLow->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleYLow->setAccelerated(false);
        editParticleYLow->setKeyboardTracking(true);
        editParticleYLow->setProperty("showGroupSeparator", QVariant(false));
        editParticleYLow->setDecimals(4);
        editParticleYLow->setMinimum(-9999);
        editParticleYLow->setMaximum(9999);

        gridLayout_2->addWidget(editParticleYLow, 7, 1, 1, 1);

        editParticleStartPosVar = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleStartPosVar->setObjectName(QStringLiteral("editParticleStartPosVar"));
        editParticleStartPosVar->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleStartPosVar->setDecimals(4);
        editParticleStartPosVar->setMinimum(-9999);
        editParticleStartPosVar->setMaximum(9999);

        gridLayout_2->addWidget(editParticleStartPosVar, 5, 1, 1, 1);

        editParticleStartPosVarY = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleStartPosVarY->setObjectName(QStringLiteral("editParticleStartPosVarY"));
        editParticleStartPosVarY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleStartPosVarY->setDecimals(4);
        editParticleStartPosVarY->setMinimum(-9999);
        editParticleStartPosVarY->setMaximum(9999);

        gridLayout_2->addWidget(editParticleStartPosVarY, 6, 1, 1, 1);

        label_26 = new QLabel(dockWidgetContents_6);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_2->addWidget(label_26, 10, 0, 1, 1);

        label_27 = new QLabel(dockWidgetContents_6);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_2->addWidget(label_27, 11, 0, 1, 1);

        label_35 = new QLabel(dockWidgetContents_6);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_2->addWidget(label_35, 16, 0, 1, 1);

        label_29 = new QLabel(dockWidgetContents_6);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_2->addWidget(label_29, 12, 0, 1, 1);

        label_18 = new QLabel(dockWidgetContents_6);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_2->addWidget(label_18, 4, 0, 1, 1);

        label_17 = new QLabel(dockWidgetContents_6);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 3, 0, 1, 1);

        label_16 = new QLabel(dockWidgetContents_6);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 2, 0, 1, 1);

        label_31 = new QLabel(dockWidgetContents_6);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_2->addWidget(label_31, 13, 0, 1, 1);

        label_19 = new QLabel(dockWidgetContents_6);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_2->addWidget(label_19, 5, 0, 1, 1);

        editParticleRepeatScale = new QCheckBox(dockWidgetContents_6);
        editParticleRepeatScale->setObjectName(QStringLiteral("editParticleRepeatScale"));

        gridLayout_2->addWidget(editParticleRepeatScale, 14, 0, 1, 1);

        label_20 = new QLabel(dockWidgetContents_6);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 6, 0, 1, 1);

        label_14 = new QLabel(dockWidgetContents_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 1, 0, 1, 1);

        label_33 = new QLabel(dockWidgetContents_6);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_2->addWidget(label_33, 15, 0, 1, 1);

        label_23 = new QLabel(dockWidgetContents_6);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_2->addWidget(label_23, 8, 0, 1, 1);

        label_21 = new QLabel(dockWidgetContents_6);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_2->addWidget(label_21, 7, 0, 1, 1);

        label_15 = new QLabel(dockWidgetContents_6);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 0, 0, 1, 1);

        label_25 = new QLabel(dockWidgetContents_6);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_2->addWidget(label_25, 9, 0, 1, 1);

        editParticleYHigh = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleYHigh->setObjectName(QStringLiteral("editParticleYHigh"));
        editParticleYHigh->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleYHigh->setDecimals(4);
        editParticleYHigh->setMinimum(-9999);
        editParticleYHigh->setMaximum(9999);

        gridLayout_2->addWidget(editParticleYHigh, 7, 3, 1, 1);

        editParticleXZLow = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleXZLow->setObjectName(QStringLiteral("editParticleXZLow"));
        editParticleXZLow->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleXZLow->setDecimals(4);
        editParticleXZLow->setMinimum(-9999);
        editParticleXZLow->setMaximum(9999);

        gridLayout_2->addWidget(editParticleXZLow, 8, 1, 1, 1);

        label_24 = new QLabel(dockWidgetContents_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMaximumSize(QSize(16777215, 16777215));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_24, 8, 2, 1, 1);

        editParticleXZHigh = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleXZHigh->setObjectName(QStringLiteral("editParticleXZHigh"));
        editParticleXZHigh->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleXZHigh->setDecimals(4);
        editParticleXZHigh->setMinimum(-9999);
        editParticleXZHigh->setMaximum(9999);

        gridLayout_2->addWidget(editParticleXZHigh, 8, 3, 1, 1);

        editParticleAccelX = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleAccelX->setObjectName(QStringLiteral("editParticleAccelX"));
        editParticleAccelX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleAccelX->setDecimals(4);
        editParticleAccelX->setMinimum(-9999);
        editParticleAccelX->setMaximum(9999);

        gridLayout_2->addWidget(editParticleAccelX, 9, 1, 1, 1);

        editParticleAccelY = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleAccelY->setObjectName(QStringLiteral("editParticleAccelY"));
        editParticleAccelY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleAccelY->setDecimals(4);
        editParticleAccelY->setMinimum(-9999);
        editParticleAccelY->setMaximum(9999);

        gridLayout_2->addWidget(editParticleAccelY, 9, 2, 1, 1);

        editParticleAccelZ = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleAccelZ->setObjectName(QStringLiteral("editParticleAccelZ"));
        editParticleAccelZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleAccelZ->setDecimals(4);
        editParticleAccelZ->setMinimum(-9999);
        editParticleAccelZ->setMaximum(9999);

        gridLayout_2->addWidget(editParticleAccelZ, 9, 3, 1, 1);

        editParticleRepeat = new QCheckBox(dockWidgetContents_6);
        editParticleRepeat->setObjectName(QStringLiteral("editParticleRepeat"));

        gridLayout_2->addWidget(editParticleRepeat, 0, 3, 1, 1);

        editParticleScaleX = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleX->setObjectName(QStringLiteral("editParticleScaleX"));
        editParticleScaleX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleX->setDecimals(4);
        editParticleScaleX->setMinimum(-9999);

        gridLayout_2->addWidget(editParticleScaleX, 10, 1, 1, 1);

        editParticleScaleY = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleY->setObjectName(QStringLiteral("editParticleScaleY"));
        editParticleScaleY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleY->setDecimals(4);
        editParticleScaleY->setMinimum(-9999);

        gridLayout_2->addWidget(editParticleScaleY, 10, 2, 1, 1);

        editParticleScaleZ = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleZ->setObjectName(QStringLiteral("editParticleScaleZ"));
        editParticleScaleZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleZ->setDecimals(4);
        editParticleScaleZ->setMinimum(-9999);

        gridLayout_2->addWidget(editParticleScaleZ, 10, 3, 1, 1);

        editParticleRotationLowX = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleRotationLowX->setObjectName(QStringLiteral("editParticleRotationLowX"));
        editParticleRotationLowX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleRotationLowX->setDecimals(4);
        editParticleRotationLowX->setMinimum(-9999);
        editParticleRotationLowX->setMaximum(9999);

        gridLayout_2->addWidget(editParticleRotationLowX, 11, 1, 1, 1);

        label_28 = new QLabel(dockWidgetContents_6);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMaximumSize(QSize(16777215, 16777215));
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_28, 11, 2, 1, 1);

        editParticleRotationHighX = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleRotationHighX->setObjectName(QStringLiteral("editParticleRotationHighX"));
        editParticleRotationHighX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleRotationHighX->setDecimals(4);
        editParticleRotationHighX->setMinimum(-9999);
        editParticleRotationHighX->setMaximum(9999);

        gridLayout_2->addWidget(editParticleRotationHighX, 11, 3, 1, 1);

        editParticleRotationLowY = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleRotationLowY->setObjectName(QStringLiteral("editParticleRotationLowY"));
        editParticleRotationLowY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleRotationLowY->setDecimals(4);
        editParticleRotationLowY->setMinimum(-9999);
        editParticleRotationLowY->setMaximum(9999);

        gridLayout_2->addWidget(editParticleRotationLowY, 12, 1, 1, 1);

        label_30 = new QLabel(dockWidgetContents_6);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMaximumSize(QSize(16777215, 16777215));
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_30, 12, 2, 1, 1);

        editParticleRotationHighY = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleRotationHighY->setObjectName(QStringLiteral("editParticleRotationHighY"));
        editParticleRotationHighY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleRotationHighY->setDecimals(4);
        editParticleRotationHighY->setMinimum(-9999);
        editParticleRotationHighY->setMaximum(9999);

        gridLayout_2->addWidget(editParticleRotationHighY, 12, 3, 1, 1);

        editParticleRotationLowZ = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleRotationLowZ->setObjectName(QStringLiteral("editParticleRotationLowZ"));
        editParticleRotationLowZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleRotationLowZ->setDecimals(4);
        editParticleRotationLowZ->setMinimum(-9999);
        editParticleRotationLowZ->setMaximum(9999);

        gridLayout_2->addWidget(editParticleRotationLowZ, 13, 1, 1, 1);

        label_32 = new QLabel(dockWidgetContents_6);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMaximumSize(QSize(16777215, 16777215));
        label_32->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_32, 13, 2, 1, 1);

        editParticleRotationHighZ = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleRotationHighZ->setObjectName(QStringLiteral("editParticleRotationHighZ"));
        editParticleRotationHighZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleRotationHighZ->setDecimals(4);
        editParticleRotationHighZ->setMinimum(-9999);
        editParticleRotationHighZ->setMaximum(9999);

        gridLayout_2->addWidget(editParticleRotationHighZ, 13, 3, 1, 1);

        editParticleScalSpeedXLow = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScalSpeedXLow->setObjectName(QStringLiteral("editParticleScalSpeedXLow"));
        editParticleScalSpeedXLow->setEnabled(false);
        editParticleScalSpeedXLow->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScalSpeedXLow->setDecimals(4);
        editParticleScalSpeedXLow->setMinimum(-9999);
        editParticleScalSpeedXLow->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScalSpeedXLow, 15, 1, 1, 1);

        label_34 = new QLabel(dockWidgetContents_6);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMaximumSize(QSize(16777215, 16777215));
        label_34->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_34, 15, 2, 1, 1);

        editParticleScalSpeedXHigh = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScalSpeedXHigh->setObjectName(QStringLiteral("editParticleScalSpeedXHigh"));
        editParticleScalSpeedXHigh->setEnabled(false);
        editParticleScalSpeedXHigh->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScalSpeedXHigh->setDecimals(4);
        editParticleScalSpeedXHigh->setMinimum(-9999);
        editParticleScalSpeedXHigh->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScalSpeedXHigh, 15, 3, 1, 1);

        editParticleScalSpeedYLow = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScalSpeedYLow->setObjectName(QStringLiteral("editParticleScalSpeedYLow"));
        editParticleScalSpeedYLow->setEnabled(false);
        editParticleScalSpeedYLow->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScalSpeedYLow->setDecimals(4);
        editParticleScalSpeedYLow->setMinimum(-9999);
        editParticleScalSpeedYLow->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScalSpeedYLow, 16, 1, 1, 1);

        label_36 = new QLabel(dockWidgetContents_6);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMaximumSize(QSize(16777215, 16777215));
        label_36->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_36, 16, 2, 1, 1);

        editParticleScalSpeedYHigh = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScalSpeedYHigh->setObjectName(QStringLiteral("editParticleScalSpeedYHigh"));
        editParticleScalSpeedYHigh->setEnabled(false);
        editParticleScalSpeedYHigh->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScalSpeedYHigh->setDecimals(4);
        editParticleScalSpeedYHigh->setMinimum(-9999);
        editParticleScalSpeedYHigh->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScalSpeedYHigh, 16, 3, 1, 1);

        editParticleScalSpeedZLow = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScalSpeedZLow->setObjectName(QStringLiteral("editParticleScalSpeedZLow"));
        editParticleScalSpeedZLow->setEnabled(false);
        editParticleScalSpeedZLow->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScalSpeedZLow->setDecimals(4);
        editParticleScalSpeedZLow->setMinimum(-9999);
        editParticleScalSpeedZLow->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScalSpeedZLow, 17, 1, 1, 1);

        label_38 = new QLabel(dockWidgetContents_6);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setMaximumSize(QSize(16777215, 16777215));
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_38, 17, 2, 1, 1);

        editParticleScalSpeedZHigh = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScalSpeedZHigh->setObjectName(QStringLiteral("editParticleScalSpeedZHigh"));
        editParticleScalSpeedZHigh->setEnabled(false);
        editParticleScalSpeedZHigh->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScalSpeedZHigh->setDecimals(4);
        editParticleScalSpeedZHigh->setMinimum(-9999);
        editParticleScalSpeedZHigh->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScalSpeedZHigh, 17, 3, 1, 1);

        editParticleScaleEndX = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleEndX->setObjectName(QStringLiteral("editParticleScaleEndX"));
        editParticleScaleEndX->setEnabled(false);
        editParticleScaleEndX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleEndX->setDecimals(4);
        editParticleScaleEndX->setMinimum(-9999);
        editParticleScaleEndX->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScaleEndX, 18, 1, 1, 1);

        editParticleScaleEndY = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleEndY->setObjectName(QStringLiteral("editParticleScaleEndY"));
        editParticleScaleEndY->setEnabled(false);
        editParticleScaleEndY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleEndY->setDecimals(4);
        editParticleScaleEndY->setMinimum(-9999);
        editParticleScaleEndY->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScaleEndY, 18, 2, 1, 1);

        editParticleScaleEndZ = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleEndZ->setObjectName(QStringLiteral("editParticleScaleEndZ"));
        editParticleScaleEndZ->setEnabled(false);
        editParticleScaleEndZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleEndZ->setDecimals(4);
        editParticleScaleEndZ->setMinimum(-9999);
        editParticleScaleEndZ->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScaleEndZ, 18, 3, 1, 1);

        editParticleScaleSpeedX = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleSpeedX->setObjectName(QStringLiteral("editParticleScaleSpeedX"));
        editParticleScaleSpeedX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleSpeedX->setDecimals(4);
        editParticleScaleSpeedX->setMinimum(-9999);
        editParticleScaleSpeedX->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScaleSpeedX, 19, 1, 1, 1);

        editParticleScaleSpeedY = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleSpeedY->setObjectName(QStringLiteral("editParticleScaleSpeedY"));
        editParticleScaleSpeedY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleSpeedY->setDecimals(4);
        editParticleScaleSpeedY->setMinimum(-9999);
        editParticleScaleSpeedY->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScaleSpeedY, 19, 2, 1, 1);

        editParticleScaleSpeedZ = new QDoubleSpinBox(dockWidgetContents_6);
        editParticleScaleSpeedZ->setObjectName(QStringLiteral("editParticleScaleSpeedZ"));
        editParticleScaleSpeedZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editParticleScaleSpeedZ->setDecimals(4);
        editParticleScaleSpeedZ->setMinimum(-9999);
        editParticleScaleSpeedZ->setMaximum(9999);

        gridLayout_2->addWidget(editParticleScaleSpeedZ, 19, 3, 1, 1);

        dockParticles->setWidget(dockWidgetContents_6);
        MainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockParticles);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menu_dition->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuFen_tres->menuAction());
        menuBar->addAction(menu->menuAction());
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionFusionner);
        menuFichier->addAction(actionFermer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionEnregistrer_sous);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menu_dition->addAction(actionAjouter_une_partie);
        menu_dition->addAction(actionSupprimer_la_partie);
        menuAffichage->addAction(actionGrille);
        menuAffichage->addAction(actionModel_3D);
        menuAffichage->addAction(actionCouleur_du_fond);
        menuAffichage->addSeparator();
        menuAffichage->addAction(actionJouer);
        menuAffichage->addAction(actionStop);
        menuAffichage->addSeparator();
        menuAffichage->addAction(menuLangage->menuAction());
        menuAffichage->addAction(actionPlein_cran);
        menuLangage->addAction(actionFran_ais);
        menuLangage->addAction(actionEnglish);
        menuLangage->addAction(actionDeutsch);
        menu->addAction(action_propos);
        menu->addAction(actionQt);
        mainToolBar->addAction(actionOuvrir);
        mainToolBar->addAction(actionEnregistrer);
        mainToolBar->addAction(actionFermer);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionJouer);
        mainToolBar->addAction(actionStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAjouter_une_partie);
        mainToolBar->addAction(actionSupprimer_la_partie);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionGrille);
        mainToolBar->addAction(actionModel_3D);
        mainToolBar->addSeparator();

        retranslateUi(MainFrameClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), MainFrameClass, SLOT(close()));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScalSpeedXLow, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScalSpeedXHigh, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScalSpeedYLow, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScalSpeedYHigh, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScalSpeedZLow, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScalSpeedZHigh, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScaleEndX, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScaleEndZ, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScaleEndY, SLOT(setEnabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScaleSpeedX, SLOT(setDisabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScaleSpeedY, SLOT(setDisabled(bool)));
        QObject::connect(editParticleRepeatScale, SIGNAL(toggled(bool)), editParticleScaleSpeedZ, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(MainFrameClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainFrameClass)
    {
        MainFrameClass->setWindowTitle(QApplication::translate("MainFrameClass", "SfxEditor", 0));
        actionOuvrir->setText(QApplication::translate("MainFrameClass", "Ouvrir", 0));
        actionFusionner->setText(QApplication::translate("MainFrameClass", "Fusionner", 0));
#ifndef QT_NO_TOOLTIP
        actionFusionner->setToolTip(QApplication::translate("MainFrameClass", "Fusionner", 0));
#endif // QT_NO_TOOLTIP
        actionFermer->setText(QApplication::translate("MainFrameClass", "Fermer", 0));
        actionEnregistrer_sous->setText(QApplication::translate("MainFrameClass", "Enregistrer sous", 0));
#ifndef QT_NO_TOOLTIP
        actionEnregistrer_sous->setToolTip(QApplication::translate("MainFrameClass", "Enregistrer sous", 0));
#endif // QT_NO_TOOLTIP
        actionQuitter->setText(QApplication::translate("MainFrameClass", "Quitter", 0));
        actionGrille->setText(QApplication::translate("MainFrameClass", "Grille", 0));
        actionJouer->setText(QApplication::translate("MainFrameClass", "Jouer", 0));
        actionStop->setText(QApplication::translate("MainFrameClass", "Stop", 0));
        actionPlein_cran->setText(QApplication::translate("MainFrameClass", "Plein \303\251cran", 0));
        action_propos->setText(QApplication::translate("MainFrameClass", "\303\200 propos", 0));
        actionQt->setText(QApplication::translate("MainFrameClass", "Qt", 0));
        actionEnregistrer->setText(QApplication::translate("MainFrameClass", "Enregistrer", 0));
        actionModel_3D->setText(QApplication::translate("MainFrameClass", "Model 3D", 0));
        actionAjouter_une_partie->setText(QApplication::translate("MainFrameClass", "Ajouter une partie", 0));
        actionSupprimer_la_partie->setText(QApplication::translate("MainFrameClass", "Supprimer la partie", 0));
        actionCouleur_du_fond->setText(QApplication::translate("MainFrameClass", "Couleur du fond", 0));
        actionFran_ais->setText(QApplication::translate("MainFrameClass", "Fran\303\247ais", 0));
        actionEnglish->setText(QApplication::translate("MainFrameClass", "English", 0));
        actionDeutsch->setText(QApplication::translate("MainFrameClass", "Deutsch", 0));
        menuFichier->setTitle(QApplication::translate("MainFrameClass", "Fichier", 0));
        menu_dition->setTitle(QApplication::translate("MainFrameClass", "\303\211dition", 0));
        menuAffichage->setTitle(QApplication::translate("MainFrameClass", "Affichage", 0));
        menuLangage->setTitle(QApplication::translate("MainFrameClass", "Langage", 0));
        menuFen_tres->setTitle(QApplication::translate("MainFrameClass", "Fen\303\252tres", 0));
        menu->setTitle(QApplication::translate("MainFrameClass", "?", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainFrameClass", "Barre d'outils", 0));
        dockTimeline->setWindowTitle(QApplication::translate("MainFrameClass", "Timeline", 0));
        dockParts->setWindowTitle(QApplication::translate("MainFrameClass", "Parties du SFX", 0));
        btnAddPart->setText(QApplication::translate("MainFrameClass", "Ajouter", 0));
        btnRemovePart->setText(QApplication::translate("MainFrameClass", "Supprimer", 0));
        dockEditPart->setWindowTitle(QApplication::translate("MainFrameClass", "\303\211dition de la partie", 0));
        label_6->setText(QApplication::translate("MainFrameClass", "Nom :", 0));
        label_10->setText(QApplication::translate("MainFrameClass", "Visible :", 0));
        editPartVisible->setText(QString());
        label_7->setText(QApplication::translate("MainFrameClass", "Bill :", 0));
        editPartBill->clear();
        editPartBill->insertItems(0, QStringList()
         << QApplication::translate("MainFrameClass", "Normal", 0)
         << QApplication::translate("MainFrameClass", "Bill", 0)
         << QApplication::translate("MainFrameClass", "Bottom", 0)
         << QApplication::translate("MainFrameClass", "Pole", 0)
        );
        label_8->setText(QApplication::translate("MainFrameClass", "Alpha :", 0));
        editPartBlend->clear();
        editPartBlend->insertItems(0, QStringList()
         << QApplication::translate("MainFrameClass", "Blend", 0)
         << QApplication::translate("MainFrameClass", "Glow", 0)
        );
        label_9->setText(QApplication::translate("MainFrameClass", "Texture/model :", 0));
        label_11->setText(QApplication::translate("MainFrameClass", "Textures frames :", 0));
        label_12->setText(QApplication::translate("MainFrameClass", "Boucles :", 0));
        label_13->setText(QApplication::translate("MainFrameClass", "Nombre de points :", 0));
        btnSetPartTexture->setText(QApplication::translate("MainFrameClass", "...", 0));
        dockEditKey->setWindowTitle(QApplication::translate("MainFrameClass", "\303\211dition de la cl\303\251", 0));
        label->setText(QApplication::translate("MainFrameClass", "Position :", 0));
        editKeyPosX->setPrefix(QApplication::translate("MainFrameClass", "X: ", 0));
        editKeyPosZ->setPrefix(QApplication::translate("MainFrameClass", "Z: ", 0));
        label_2->setText(QApplication::translate("MainFrameClass", "PosRotation :", 0));
        label_4->setText(QApplication::translate("MainFrameClass", "Angle :", 0));
        editKeyPosY->setPrefix(QApplication::translate("MainFrameClass", "Y: ", 0));
        editKeyPosRotX->setPrefix(QApplication::translate("MainFrameClass", "X: ", 0));
        label_3->setText(QApplication::translate("MainFrameClass", "Taille :", 0));
        label_5->setText(QApplication::translate("MainFrameClass", "Alpha :", 0));
        editKeyScaleY->setPrefix(QApplication::translate("MainFrameClass", "Y: ", 0));
        editKeyScaleZ->setPrefix(QApplication::translate("MainFrameClass", "Z: ", 0));
        editKeyPosRotY->setPrefix(QApplication::translate("MainFrameClass", "Y: ", 0));
        editKeyPosRotZ->setPrefix(QApplication::translate("MainFrameClass", "Z: ", 0));
        editKeyScaleX->setPrefix(QApplication::translate("MainFrameClass", "X: ", 0));
        editKeyRotX->setPrefix(QApplication::translate("MainFrameClass", "X: ", 0));
        editKeyRotY->setPrefix(QApplication::translate("MainFrameClass", "Y: ", 0));
        editKeyRotZ->setPrefix(QApplication::translate("MainFrameClass", "Z: ", 0));
        currentKeyFrame->setText(QApplication::translate("MainFrameClass", "Frame -", 0));
        dockParticles->setWindowTitle(QApplication::translate("MainFrameClass", "\303\211diteur de particules", 0));
        label_37->setText(QApplication::translate("MainFrameClass", "\303\211volution de la taille  Z :", 0));
        label_39->setText(QApplication::translate("MainFrameClass", "Taille maximale :", 0));
        label_40->setText(QApplication::translate("MainFrameClass", "\303\211volution de la taille :", 0));
        label_22->setText(QApplication::translate("MainFrameClass", "~", 0));
        editParticleYLow->setPrefix(QApplication::translate("MainFrameClass", "Min: ", 0));
        label_26->setText(QApplication::translate("MainFrameClass", "Taille au d\303\251but :", 0));
        label_27->setText(QApplication::translate("MainFrameClass", "Rotation X :", 0));
        label_35->setText(QApplication::translate("MainFrameClass", "\303\211volution de la taille Y :", 0));
        label_29->setText(QApplication::translate("MainFrameClass", "Rotation Y :", 0));
        label_18->setText(QApplication::translate("MainFrameClass", "Frame de disparition totale :", 0));
        label_17->setText(QApplication::translate("MainFrameClass", "Frame de d\303\251but de disparition :", 0));
        label_16->setText(QApplication::translate("MainFrameClass", "Frame d'apparition :", 0));
        label_31->setText(QApplication::translate("MainFrameClass", "Rotation Z :", 0));
        label_19->setText(QApplication::translate("MainFrameClass", "Radius :", 0));
        editParticleRepeatScale->setText(QApplication::translate("MainFrameClass", "\303\211volution al\303\251atoire de la taille", 0));
        label_20->setText(QApplication::translate("MainFrameClass", "Hauteur :", 0));
        label_14->setText(QApplication::translate("MainFrameClass", "Intervalle de cr\303\251ation :", 0));
        label_33->setText(QApplication::translate("MainFrameClass", "\303\211volution de la taille X :", 0));
        label_23->setText(QApplication::translate("MainFrameClass", "Vitesse XZ :", 0));
        label_21->setText(QApplication::translate("MainFrameClass", "Vitesse Y :", 0));
        label_15->setText(QApplication::translate("MainFrameClass", "Quantit\303\251 \303\240 cr\303\251er :", 0));
        label_25->setText(QApplication::translate("MainFrameClass", "Acc\303\251l\303\251ration :", 0));
        editParticleYHigh->setPrefix(QApplication::translate("MainFrameClass", "Max: ", 0));
        editParticleXZLow->setPrefix(QApplication::translate("MainFrameClass", "Min: ", 0));
        label_24->setText(QApplication::translate("MainFrameClass", "~", 0));
        editParticleXZHigh->setPrefix(QApplication::translate("MainFrameClass", "Max: ", 0));
        editParticleAccelX->setPrefix(QApplication::translate("MainFrameClass", "X: ", 0));
        editParticleAccelY->setPrefix(QApplication::translate("MainFrameClass", "Y: ", 0));
        editParticleAccelZ->setPrefix(QApplication::translate("MainFrameClass", "Z: ", 0));
        editParticleRepeat->setText(QApplication::translate("MainFrameClass", "R\303\251p\303\251ter", 0));
        editParticleScaleX->setPrefix(QApplication::translate("MainFrameClass", "X: ", 0));
        editParticleScaleY->setPrefix(QApplication::translate("MainFrameClass", "Y: ", 0));
        editParticleScaleZ->setPrefix(QApplication::translate("MainFrameClass", "Z: ", 0));
        editParticleRotationLowX->setPrefix(QApplication::translate("MainFrameClass", "Min: ", 0));
        label_28->setText(QApplication::translate("MainFrameClass", "~", 0));
        editParticleRotationHighX->setPrefix(QApplication::translate("MainFrameClass", "Max: ", 0));
        editParticleRotationLowY->setPrefix(QApplication::translate("MainFrameClass", "Min: ", 0));
        label_30->setText(QApplication::translate("MainFrameClass", "~", 0));
        editParticleRotationHighY->setPrefix(QApplication::translate("MainFrameClass", "Max: ", 0));
        editParticleRotationLowZ->setPrefix(QApplication::translate("MainFrameClass", "Min: ", 0));
        label_32->setText(QApplication::translate("MainFrameClass", "~", 0));
        editParticleRotationHighZ->setPrefix(QApplication::translate("MainFrameClass", "Max: ", 0));
        editParticleScalSpeedXLow->setPrefix(QApplication::translate("MainFrameClass", "Min: ", 0));
        label_34->setText(QApplication::translate("MainFrameClass", "~", 0));
        editParticleScalSpeedXHigh->setPrefix(QApplication::translate("MainFrameClass", "Max: ", 0));
        editParticleScalSpeedYLow->setPrefix(QApplication::translate("MainFrameClass", "Min: ", 0));
        label_36->setText(QApplication::translate("MainFrameClass", "~", 0));
        editParticleScalSpeedYHigh->setPrefix(QApplication::translate("MainFrameClass", "Max: ", 0));
        editParticleScalSpeedZLow->setPrefix(QApplication::translate("MainFrameClass", "Min: ", 0));
        label_38->setText(QApplication::translate("MainFrameClass", "~", 0));
        editParticleScalSpeedZHigh->setPrefix(QApplication::translate("MainFrameClass", "Max: ", 0));
        editParticleScaleEndX->setPrefix(QApplication::translate("MainFrameClass", "X: ", 0));
        editParticleScaleEndY->setPrefix(QApplication::translate("MainFrameClass", "Y: ", 0));
        editParticleScaleEndZ->setPrefix(QApplication::translate("MainFrameClass", "Z: ", 0));
        editParticleScaleSpeedX->setPrefix(QApplication::translate("MainFrameClass", "X: ", 0));
        editParticleScaleSpeedY->setPrefix(QApplication::translate("MainFrameClass", "Y: ", 0));
        editParticleScaleSpeedZ->setPrefix(QApplication::translate("MainFrameClass", "Z: ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainFrameClass: public Ui_MainFrameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFRAME_H
