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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMainFrameClass
{
public:
    QAction *actionEnregistrer;
    QAction *actionQuitter;
    QAction *action_propos;
    QAction *actionQt;
    QAction *actionPlein_cran;
    QAction *actionAligner_en_haut;
    QAction *actionAligner_en_bas;
    QAction *actionAligner_gauche;
    QAction *actionAligner_droite;
    QAction *actionSupprimer_le_control;
    QAction *actionGrille;
    QAction *actionCling;
    QAction *actionNouvelle_fen_tre;
    QAction *actionText;
    QAction *actionPicture;
    QAction *actionStatic;
    QAction *actionText_Edit;
    QAction *actionGroupBox;
    QAction *actionButton;
    QAction *actionCheckBox;
    QAction *actionRadioButton;
    QAction *actionComboBox;
    QAction *actionListBox;
    QAction *actionListCtrl;
    QAction *actionTreeCtrl;
    QAction *actionTabCtrl;
    QAction *actionCustom;
    QAction *actionX;
    QAction *actionCouleur_du_fond;
    QAction *actionPr_cision_de_l_diteur;
    QAction *actionRamener_au_premier_plan;
    QAction *actionFran_ais;
    QAction *actionEnglish;
    QAction *actionCopier;
    QAction *actionCouper;
    QAction *actionColler;
    QAction *actionDeutsch;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuAffichage;
    QMenu *menuLangage;
    QMenu *menuFen_tres;
    QMenu *menu;
    QMenu *menu_dition;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWindows;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddWindow;
    QPushButton *btnRemoveWindow;
    QListView *listWindows;
    QDockWidget *dockEdit;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupEditGeneral;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *editControlID;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *editControlWidth;
    QSpinBox *editControlHeight;
    QLabel *label_5;
    QLineEdit *editControlText;
    QLabel *label_6;
    QLineEdit *editControlTooltip;
    QLabel *label_7;
    QLineEdit *editControlTexture;
    QPushButton *btnSelectTexture;
    QPushButton *btnAdaptSizeToTexture;
    QCheckBox *editControlNoDrawFrame;
    QCheckBox *editControlTiles;
    QGroupBox *groupEditControl;
    QGridLayout *gridLayout;
    QCheckBox *editControlEnabled;
    QCheckBox *editControlVisible;
    QCheckBox *editControlTabStop;
    QLabel *label_2;
    QSpinBox *editControlX;
    QSpinBox *editControlY;
    QCheckBox *editControlGroup;
    QCheckBox *editControlScrollBar;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupEditHAlign;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *editHAlignLeft;
    QRadioButton *editHAlignCenter;
    QRadioButton *editHAlignRight;
    QGroupBox *groupEditVAlign;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *editVAlignTop;
    QRadioButton *editVAlignMiddle;
    QRadioButton *editVAlignBottom;
    QLabel *label_9;
    QWidget *editControlViewColor;
    QPushButton *editControlColor;
    QGroupBox *groupEditWindow;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *editWindowD3DFormat;
    QCheckBox *editWindowCaption;
    QCheckBox *editWindowNoFrame;
    QLabel *label_8;
    QLineEdit *editWindowIcon;
    QToolBar *toolBar;

    void setupUi(QMainWindow *CMainFrameClass)
    {
        if (CMainFrameClass->objectName().isEmpty())
            CMainFrameClass->setObjectName(QStringLiteral("CMainFrameClass"));
        CMainFrameClass->resize(1024, 768);
        CMainFrameClass->setMinimumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/GUIEditor.png"), QSize(), QIcon::Normal, QIcon::Off);
        CMainFrameClass->setWindowIcon(icon);
        actionEnregistrer = new QAction(CMainFrameClass);
        actionEnregistrer->setObjectName(QStringLiteral("actionEnregistrer"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainFrame/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer->setIcon(icon1);
        actionQuitter = new QAction(CMainFrameClass);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainFrame/Resources/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon2);
        action_propos = new QAction(CMainFrameClass);
        action_propos->setObjectName(QStringLiteral("action_propos"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MainFrame/Resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_propos->setIcon(icon3);
        actionQt = new QAction(CMainFrameClass);
        actionQt->setObjectName(QStringLiteral("actionQt"));
        actionQt->setIcon(icon3);
        actionPlein_cran = new QAction(CMainFrameClass);
        actionPlein_cran->setObjectName(QStringLiteral("actionPlein_cran"));
        actionPlein_cran->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MainFrame/Resources/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlein_cran->setIcon(icon4);
        actionAligner_en_haut = new QAction(CMainFrameClass);
        actionAligner_en_haut->setObjectName(QStringLiteral("actionAligner_en_haut"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MainFrame/Resources/align_top.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAligner_en_haut->setIcon(icon5);
        actionAligner_en_bas = new QAction(CMainFrameClass);
        actionAligner_en_bas->setObjectName(QStringLiteral("actionAligner_en_bas"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/MainFrame/Resources/align_bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAligner_en_bas->setIcon(icon6);
        actionAligner_gauche = new QAction(CMainFrameClass);
        actionAligner_gauche->setObjectName(QStringLiteral("actionAligner_gauche"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/MainFrame/Resources/align_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAligner_gauche->setIcon(icon7);
        actionAligner_droite = new QAction(CMainFrameClass);
        actionAligner_droite->setObjectName(QStringLiteral("actionAligner_droite"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/MainFrame/Resources/align_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAligner_droite->setIcon(icon8);
        actionSupprimer_le_control = new QAction(CMainFrameClass);
        actionSupprimer_le_control->setObjectName(QStringLiteral("actionSupprimer_le_control"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/MainFrame/Resources/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSupprimer_le_control->setIcon(icon9);
        actionGrille = new QAction(CMainFrameClass);
        actionGrille->setObjectName(QStringLiteral("actionGrille"));
        actionGrille->setCheckable(true);
        actionGrille->setChecked(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/MainFrame/Resources/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrille->setIcon(icon10);
        actionCling = new QAction(CMainFrameClass);
        actionCling->setObjectName(QStringLiteral("actionCling"));
        actionCling->setCheckable(true);
        actionCling->setChecked(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/MainFrame/Resources/cling.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCling->setIcon(icon11);
        actionNouvelle_fen_tre = new QAction(CMainFrameClass);
        actionNouvelle_fen_tre->setObjectName(QStringLiteral("actionNouvelle_fen_tre"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/MainFrame/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNouvelle_fen_tre->setIcon(icon12);
        actionText = new QAction(CMainFrameClass);
        actionText->setObjectName(QStringLiteral("actionText"));
        actionText->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/MainFrame/Resources/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText->setIcon(icon13);
        actionPicture = new QAction(CMainFrameClass);
        actionPicture->setObjectName(QStringLiteral("actionPicture"));
        actionPicture->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/MainFrame/Resources/picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPicture->setIcon(icon14);
        actionStatic = new QAction(CMainFrameClass);
        actionStatic->setObjectName(QStringLiteral("actionStatic"));
        actionStatic->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/MainFrame/Resources/static.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStatic->setIcon(icon15);
        actionText_Edit = new QAction(CMainFrameClass);
        actionText_Edit->setObjectName(QStringLiteral("actionText_Edit"));
        actionText_Edit->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/MainFrame/Resources/textEdit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionText_Edit->setIcon(icon16);
        actionGroupBox = new QAction(CMainFrameClass);
        actionGroupBox->setObjectName(QStringLiteral("actionGroupBox"));
        actionGroupBox->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/MainFrame/Resources/groupBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroupBox->setIcon(icon17);
        actionButton = new QAction(CMainFrameClass);
        actionButton->setObjectName(QStringLiteral("actionButton"));
        actionButton->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/MainFrame/Resources/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionButton->setIcon(icon18);
        actionCheckBox = new QAction(CMainFrameClass);
        actionCheckBox->setObjectName(QStringLiteral("actionCheckBox"));
        actionCheckBox->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/MainFrame/Resources/checkBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckBox->setIcon(icon19);
        actionRadioButton = new QAction(CMainFrameClass);
        actionRadioButton->setObjectName(QStringLiteral("actionRadioButton"));
        actionRadioButton->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/MainFrame/Resources/radioButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRadioButton->setIcon(icon20);
        actionComboBox = new QAction(CMainFrameClass);
        actionComboBox->setObjectName(QStringLiteral("actionComboBox"));
        actionComboBox->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/MainFrame/Resources/comboBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComboBox->setIcon(icon21);
        actionListBox = new QAction(CMainFrameClass);
        actionListBox->setObjectName(QStringLiteral("actionListBox"));
        actionListBox->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/MainFrame/Resources/listBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionListBox->setIcon(icon22);
        actionListCtrl = new QAction(CMainFrameClass);
        actionListCtrl->setObjectName(QStringLiteral("actionListCtrl"));
        actionListCtrl->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/MainFrame/Resources/listCtrl.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionListCtrl->setIcon(icon23);
        actionTreeCtrl = new QAction(CMainFrameClass);
        actionTreeCtrl->setObjectName(QStringLiteral("actionTreeCtrl"));
        actionTreeCtrl->setCheckable(true);
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/MainFrame/Resources/treeCtrl.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTreeCtrl->setIcon(icon24);
        actionTabCtrl = new QAction(CMainFrameClass);
        actionTabCtrl->setObjectName(QStringLiteral("actionTabCtrl"));
        actionTabCtrl->setCheckable(true);
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/MainFrame/Resources/tabCtrl.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTabCtrl->setIcon(icon25);
        actionCustom = new QAction(CMainFrameClass);
        actionCustom->setObjectName(QStringLiteral("actionCustom"));
        actionCustom->setCheckable(true);
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/MainFrame/Resources/custom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCustom->setIcon(icon26);
        actionX = new QAction(CMainFrameClass);
        actionX->setObjectName(QStringLiteral("actionX"));
        actionX->setCheckable(true);
        actionX->setChecked(true);
        actionCouleur_du_fond = new QAction(CMainFrameClass);
        actionCouleur_du_fond->setObjectName(QStringLiteral("actionCouleur_du_fond"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/MainFrame/Resources/background_color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCouleur_du_fond->setIcon(icon27);
        actionPr_cision_de_l_diteur = new QAction(CMainFrameClass);
        actionPr_cision_de_l_diteur->setObjectName(QStringLiteral("actionPr_cision_de_l_diteur"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/MainFrame/Resources/precision.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPr_cision_de_l_diteur->setIcon(icon28);
        actionRamener_au_premier_plan = new QAction(CMainFrameClass);
        actionRamener_au_premier_plan->setObjectName(QStringLiteral("actionRamener_au_premier_plan"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/MainFrame/Resources/bring.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRamener_au_premier_plan->setIcon(icon29);
        actionFran_ais = new QAction(CMainFrameClass);
        actionFran_ais->setObjectName(QStringLiteral("actionFran_ais"));
        actionFran_ais->setCheckable(true);
        actionFran_ais->setChecked(true);
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/MainFrame/Resources/language_french.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFran_ais->setIcon(icon30);
        actionEnglish = new QAction(CMainFrameClass);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionEnglish->setCheckable(true);
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/MainFrame/Resources/language_english.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnglish->setIcon(icon31);
        actionCopier = new QAction(CMainFrameClass);
        actionCopier->setObjectName(QStringLiteral("actionCopier"));
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/MainFrame/Resources/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopier->setIcon(icon32);
        actionCouper = new QAction(CMainFrameClass);
        actionCouper->setObjectName(QStringLiteral("actionCouper"));
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/MainFrame/Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCouper->setIcon(icon33);
        actionColler = new QAction(CMainFrameClass);
        actionColler->setObjectName(QStringLiteral("actionColler"));
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/MainFrame/Resources/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColler->setIcon(icon34);
        actionDeutsch = new QAction(CMainFrameClass);
        actionDeutsch->setObjectName(QStringLiteral("actionDeutsch"));
        actionDeutsch->setCheckable(true);
        QIcon icon35;
        icon35.addFile(QStringLiteral(":/MainFrame/Resources/language_german.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeutsch->setIcon(icon35);
        centralWidget = new QWidget(CMainFrameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CMainFrameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CMainFrameClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        menuLangage = new QMenu(menuAffichage);
        menuLangage->setObjectName(QStringLiteral("menuLangage"));
        QIcon icon36;
        icon36.addFile(QStringLiteral(":/MainFrame/Resources/language.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLangage->setIcon(icon36);
        menuFen_tres = new QMenu(menuBar);
        menuFen_tres->setObjectName(QStringLiteral("menuFen_tres"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_dition = new QMenu(menuBar);
        menu_dition->setObjectName(QStringLiteral("menu_dition"));
        CMainFrameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CMainFrameClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CMainFrameClass->addToolBar(Qt::BottomToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CMainFrameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral("background-color: #a29314;"));
        CMainFrameClass->setStatusBar(statusBar);
        dockWindows = new QDockWidget(CMainFrameClass);
        dockWindows->setObjectName(QStringLiteral("dockWindows"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 0, 2, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAddWindow = new QPushButton(dockWidgetContents);
        btnAddWindow->setObjectName(QStringLiteral("btnAddWindow"));
        btnAddWindow->setIcon(icon12);

        horizontalLayout->addWidget(btnAddWindow);

        btnRemoveWindow = new QPushButton(dockWidgetContents);
        btnRemoveWindow->setObjectName(QStringLiteral("btnRemoveWindow"));
        btnRemoveWindow->setIcon(icon9);

        horizontalLayout->addWidget(btnRemoveWindow);


        verticalLayout->addLayout(horizontalLayout);

        listWindows = new QListView(dockWidgetContents);
        listWindows->setObjectName(QStringLiteral("listWindows"));
        listWindows->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWindows->setViewMode(QListView::ListMode);
        listWindows->setUniformItemSizes(true);

        verticalLayout->addWidget(listWindows);

        dockWindows->setWidget(dockWidgetContents);
        CMainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWindows);
        dockEdit = new QDockWidget(CMainFrameClass);
        dockEdit->setObjectName(QStringLiteral("dockEdit"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        groupEditGeneral = new QGroupBox(dockWidgetContents_2);
        groupEditGeneral->setObjectName(QStringLiteral("groupEditGeneral"));
        formLayout = new QFormLayout(groupEditGeneral);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(4);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(6, 4, 6, 4);
        label_3 = new QLabel(groupEditGeneral);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        editControlID = new QComboBox(groupEditGeneral);
        editControlID->setObjectName(QStringLiteral("editControlID"));
        editControlID->setEditable(true);
        editControlID->setMaxVisibleItems(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, editControlID);

        label_4 = new QLabel(groupEditGeneral);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        editControlWidth = new QSpinBox(groupEditGeneral);
        editControlWidth->setObjectName(QStringLiteral("editControlWidth"));
        editControlWidth->setMinimum(1);
        editControlWidth->setMaximum(9999);

        horizontalLayout_3->addWidget(editControlWidth);

        editControlHeight = new QSpinBox(groupEditGeneral);
        editControlHeight->setObjectName(QStringLiteral("editControlHeight"));
        editControlHeight->setMinimum(1);
        editControlHeight->setMaximum(9999);

        horizontalLayout_3->addWidget(editControlHeight);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_3);

        label_5 = new QLabel(groupEditGeneral);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        editControlText = new QLineEdit(groupEditGeneral);
        editControlText->setObjectName(QStringLiteral("editControlText"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editControlText);

        label_6 = new QLabel(groupEditGeneral);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        editControlTooltip = new QLineEdit(groupEditGeneral);
        editControlTooltip->setObjectName(QStringLiteral("editControlTooltip"));

        formLayout->setWidget(5, QFormLayout::FieldRole, editControlTooltip);

        label_7 = new QLabel(groupEditGeneral);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        editControlTexture = new QLineEdit(groupEditGeneral);
        editControlTexture->setObjectName(QStringLiteral("editControlTexture"));

        formLayout->setWidget(7, QFormLayout::FieldRole, editControlTexture);

        btnSelectTexture = new QPushButton(groupEditGeneral);
        btnSelectTexture->setObjectName(QStringLiteral("btnSelectTexture"));
        btnSelectTexture->setMaximumSize(QSize(50, 16777215));
        btnSelectTexture->setFlat(false);

        formLayout->setWidget(8, QFormLayout::LabelRole, btnSelectTexture);

        btnAdaptSizeToTexture = new QPushButton(groupEditGeneral);
        btnAdaptSizeToTexture->setObjectName(QStringLiteral("btnAdaptSizeToTexture"));

        formLayout->setWidget(8, QFormLayout::FieldRole, btnAdaptSizeToTexture);

        editControlNoDrawFrame = new QCheckBox(groupEditGeneral);
        editControlNoDrawFrame->setObjectName(QStringLiteral("editControlNoDrawFrame"));

        formLayout->setWidget(10, QFormLayout::FieldRole, editControlNoDrawFrame);

        editControlTiles = new QCheckBox(groupEditGeneral);
        editControlTiles->setObjectName(QStringLiteral("editControlTiles"));
        editControlTiles->setTristate(false);

        formLayout->setWidget(10, QFormLayout::LabelRole, editControlTiles);


        verticalLayout_2->addWidget(groupEditGeneral);

        groupEditControl = new QGroupBox(dockWidgetContents_2);
        groupEditControl->setObjectName(QStringLiteral("groupEditControl"));
        gridLayout = new QGridLayout(groupEditControl);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 4, 6, 4);
        editControlEnabled = new QCheckBox(groupEditControl);
        editControlEnabled->setObjectName(QStringLiteral("editControlEnabled"));

        gridLayout->addWidget(editControlEnabled, 2, 1, 1, 1);

        editControlVisible = new QCheckBox(groupEditControl);
        editControlVisible->setObjectName(QStringLiteral("editControlVisible"));

        gridLayout->addWidget(editControlVisible, 2, 0, 1, 1);

        editControlTabStop = new QCheckBox(groupEditControl);
        editControlTabStop->setObjectName(QStringLiteral("editControlTabStop"));

        gridLayout->addWidget(editControlTabStop, 2, 2, 1, 1);

        label_2 = new QLabel(groupEditControl);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        editControlX = new QSpinBox(groupEditControl);
        editControlX->setObjectName(QStringLiteral("editControlX"));
        editControlX->setMinimum(-9999);
        editControlX->setMaximum(9999);

        gridLayout->addWidget(editControlX, 0, 1, 1, 1);

        editControlY = new QSpinBox(groupEditControl);
        editControlY->setObjectName(QStringLiteral("editControlY"));
        editControlY->setMinimum(-9999);
        editControlY->setMaximum(9999);

        gridLayout->addWidget(editControlY, 0, 2, 1, 1);

        editControlGroup = new QCheckBox(groupEditControl);
        editControlGroup->setObjectName(QStringLiteral("editControlGroup"));

        gridLayout->addWidget(editControlGroup, 3, 0, 1, 1);

        editControlScrollBar = new QCheckBox(groupEditControl);
        editControlScrollBar->setObjectName(QStringLiteral("editControlScrollBar"));

        gridLayout->addWidget(editControlScrollBar, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupEditHAlign = new QGroupBox(groupEditControl);
        groupEditHAlign->setObjectName(QStringLiteral("groupEditHAlign"));
        verticalLayout_3 = new QVBoxLayout(groupEditHAlign);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 4, 6, 4);
        editHAlignLeft = new QRadioButton(groupEditHAlign);
        editHAlignLeft->setObjectName(QStringLiteral("editHAlignLeft"));

        verticalLayout_3->addWidget(editHAlignLeft);

        editHAlignCenter = new QRadioButton(groupEditHAlign);
        editHAlignCenter->setObjectName(QStringLiteral("editHAlignCenter"));

        verticalLayout_3->addWidget(editHAlignCenter);

        editHAlignRight = new QRadioButton(groupEditHAlign);
        editHAlignRight->setObjectName(QStringLiteral("editHAlignRight"));

        verticalLayout_3->addWidget(editHAlignRight);


        horizontalLayout_2->addWidget(groupEditHAlign);

        groupEditVAlign = new QGroupBox(groupEditControl);
        groupEditVAlign->setObjectName(QStringLiteral("groupEditVAlign"));
        verticalLayout_4 = new QVBoxLayout(groupEditVAlign);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 4, 6, 4);
        editVAlignTop = new QRadioButton(groupEditVAlign);
        editVAlignTop->setObjectName(QStringLiteral("editVAlignTop"));

        verticalLayout_4->addWidget(editVAlignTop);

        editVAlignMiddle = new QRadioButton(groupEditVAlign);
        editVAlignMiddle->setObjectName(QStringLiteral("editVAlignMiddle"));

        verticalLayout_4->addWidget(editVAlignMiddle);

        editVAlignBottom = new QRadioButton(groupEditVAlign);
        editVAlignBottom->setObjectName(QStringLiteral("editVAlignBottom"));

        verticalLayout_4->addWidget(editVAlignBottom);


        horizontalLayout_2->addWidget(groupEditVAlign);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 3);

        label_9 = new QLabel(groupEditControl);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        editControlViewColor = new QWidget(groupEditControl);
        editControlViewColor->setObjectName(QStringLiteral("editControlViewColor"));
        editControlViewColor->setStyleSheet(QStringLiteral("background-color: #7f7f7f;"));

        gridLayout->addWidget(editControlViewColor, 1, 1, 1, 1);

        editControlColor = new QPushButton(groupEditControl);
        editControlColor->setObjectName(QStringLiteral("editControlColor"));
        editControlColor->setEnabled(false);

        gridLayout->addWidget(editControlColor, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupEditControl);

        groupEditWindow = new QGroupBox(dockWidgetContents_2);
        groupEditWindow->setObjectName(QStringLiteral("groupEditWindow"));
        gridLayout_2 = new QGridLayout(groupEditWindow);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 4, 6, 4);
        label = new QLabel(groupEditWindow);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        editWindowD3DFormat = new QComboBox(groupEditWindow);
        editWindowD3DFormat->setObjectName(QStringLiteral("editWindowD3DFormat"));

        gridLayout_2->addWidget(editWindowD3DFormat, 0, 1, 1, 1);

        editWindowCaption = new QCheckBox(groupEditWindow);
        editWindowCaption->setObjectName(QStringLiteral("editWindowCaption"));

        gridLayout_2->addWidget(editWindowCaption, 1, 0, 1, 1);

        editWindowNoFrame = new QCheckBox(groupEditWindow);
        editWindowNoFrame->setObjectName(QStringLiteral("editWindowNoFrame"));

        gridLayout_2->addWidget(editWindowNoFrame, 1, 1, 1, 1);

        label_8 = new QLabel(groupEditWindow);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        editWindowIcon = new QLineEdit(groupEditWindow);
        editWindowIcon->setObjectName(QStringLiteral("editWindowIcon"));
        editWindowIcon->setEnabled(false);

        gridLayout_2->addWidget(editWindowIcon, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupEditWindow);

        dockEdit->setWidget(dockWidgetContents_2);
        CMainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockEdit);
        toolBar = new QToolBar(CMainFrameClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        CMainFrameClass->addToolBar(Qt::RightToolBarArea, toolBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menu_dition->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuFen_tres->menuAction());
        menuBar->addAction(menu->menuAction());
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuAffichage->addAction(actionGrille);
        menuAffichage->addAction(actionCouleur_du_fond);
        menuAffichage->addSeparator();
        menuAffichage->addAction(menuLangage->menuAction());
        menuAffichage->addAction(actionPlein_cran);
        menuLangage->addAction(actionFran_ais);
        menuLangage->addAction(actionEnglish);
        menuLangage->addAction(actionDeutsch);
        menu->addAction(action_propos);
        menu->addAction(actionQt);
        menu_dition->addAction(actionCopier);
        menu_dition->addAction(actionCouper);
        menu_dition->addAction(actionColler);
        menu_dition->addSeparator();
        menu_dition->addAction(actionNouvelle_fen_tre);
        menu_dition->addAction(actionSupprimer_le_control);
        menu_dition->addSeparator();
        menu_dition->addAction(actionAligner_gauche);
        menu_dition->addAction(actionAligner_droite);
        menu_dition->addAction(actionAligner_en_haut);
        menu_dition->addAction(actionAligner_en_bas);
        menu_dition->addAction(actionRamener_au_premier_plan);
        menu_dition->addSeparator();
        menu_dition->addAction(actionCling);
        menu_dition->addAction(actionPr_cision_de_l_diteur);
        mainToolBar->addAction(actionEnregistrer);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionGrille);
        mainToolBar->addAction(actionCling);
        mainToolBar->addAction(actionPr_cision_de_l_diteur);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAligner_gauche);
        mainToolBar->addAction(actionAligner_droite);
        mainToolBar->addAction(actionAligner_en_haut);
        mainToolBar->addAction(actionAligner_en_bas);
        mainToolBar->addAction(actionRamener_au_premier_plan);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionNouvelle_fen_tre);
        mainToolBar->addAction(actionSupprimer_le_control);
        toolBar->addAction(actionX);
        toolBar->addAction(actionText);
        toolBar->addAction(actionPicture);
        toolBar->addAction(actionStatic);
        toolBar->addAction(actionText_Edit);
        toolBar->addAction(actionGroupBox);
        toolBar->addAction(actionButton);
        toolBar->addAction(actionCheckBox);
        toolBar->addAction(actionRadioButton);
        toolBar->addAction(actionComboBox);
        toolBar->addAction(actionListBox);
        toolBar->addAction(actionListCtrl);
        toolBar->addAction(actionTreeCtrl);
        toolBar->addAction(actionTabCtrl);
        toolBar->addAction(actionCustom);

        retranslateUi(CMainFrameClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), CMainFrameClass, SLOT(close()));

        QMetaObject::connectSlotsByName(CMainFrameClass);
    } // setupUi

    void retranslateUi(QMainWindow *CMainFrameClass)
    {
        CMainFrameClass->setWindowTitle(QApplication::translate("CMainFrameClass", "GUIEditor", 0));
        actionEnregistrer->setText(QApplication::translate("CMainFrameClass", "Enregistrer", 0));
        actionQuitter->setText(QApplication::translate("CMainFrameClass", "Quitter", 0));
        action_propos->setText(QApplication::translate("CMainFrameClass", "\303\200 propos", 0));
        actionQt->setText(QApplication::translate("CMainFrameClass", "Qt", 0));
        actionPlein_cran->setText(QApplication::translate("CMainFrameClass", "Plein \303\251cran", 0));
        actionAligner_en_haut->setText(QApplication::translate("CMainFrameClass", "Aligner en haut", 0));
        actionAligner_en_bas->setText(QApplication::translate("CMainFrameClass", "Aligner en bas", 0));
        actionAligner_gauche->setText(QApplication::translate("CMainFrameClass", "Aligner \303\240 gauche", 0));
        actionAligner_droite->setText(QApplication::translate("CMainFrameClass", "Aligner \303\240 droite", 0));
        actionSupprimer_le_control->setText(QApplication::translate("CMainFrameClass", "Supprimer le control", 0));
        actionGrille->setText(QApplication::translate("CMainFrameClass", "Grille", 0));
        actionCling->setText(QApplication::translate("CMainFrameClass", "Cling", 0));
        actionNouvelle_fen_tre->setText(QApplication::translate("CMainFrameClass", "Nouvelle fen\303\252tre", 0));
        actionText->setText(QApplication::translate("CMainFrameClass", "Text", 0));
        actionPicture->setText(QApplication::translate("CMainFrameClass", "Picture", 0));
        actionStatic->setText(QApplication::translate("CMainFrameClass", "Static", 0));
        actionText_Edit->setText(QApplication::translate("CMainFrameClass", "Text Edit", 0));
        actionGroupBox->setText(QApplication::translate("CMainFrameClass", "GroupBox", 0));
        actionButton->setText(QApplication::translate("CMainFrameClass", "Button", 0));
        actionCheckBox->setText(QApplication::translate("CMainFrameClass", "CheckBox", 0));
        actionRadioButton->setText(QApplication::translate("CMainFrameClass", "RadioButton", 0));
        actionComboBox->setText(QApplication::translate("CMainFrameClass", "ComboBox", 0));
        actionListBox->setText(QApplication::translate("CMainFrameClass", "ListBox", 0));
        actionListCtrl->setText(QApplication::translate("CMainFrameClass", "ListCtrl", 0));
        actionTreeCtrl->setText(QApplication::translate("CMainFrameClass", "TreeCtrl", 0));
        actionTabCtrl->setText(QApplication::translate("CMainFrameClass", "TabCtrl", 0));
        actionCustom->setText(QApplication::translate("CMainFrameClass", "Custom", 0));
        actionX->setText(QApplication::translate("CMainFrameClass", "X", 0));
        actionCouleur_du_fond->setText(QApplication::translate("CMainFrameClass", "Couleur du fond", 0));
        actionPr_cision_de_l_diteur->setText(QApplication::translate("CMainFrameClass", "Pr\303\251cision de l'\303\251diteur", 0));
        actionRamener_au_premier_plan->setText(QApplication::translate("CMainFrameClass", "Ramener au premier plan", 0));
        actionFran_ais->setText(QApplication::translate("CMainFrameClass", "Fran\303\247ais", 0));
        actionEnglish->setText(QApplication::translate("CMainFrameClass", "English", 0));
        actionCopier->setText(QApplication::translate("CMainFrameClass", "Copier", 0));
        actionCouper->setText(QApplication::translate("CMainFrameClass", "Couper", 0));
        actionColler->setText(QApplication::translate("CMainFrameClass", "Coller", 0));
        actionDeutsch->setText(QApplication::translate("CMainFrameClass", "Deutsch", 0));
        menuFichier->setTitle(QApplication::translate("CMainFrameClass", "Fichier", 0));
        menuAffichage->setTitle(QApplication::translate("CMainFrameClass", "Affichage", 0));
        menuLangage->setTitle(QApplication::translate("CMainFrameClass", "Langage", 0));
        menuFen_tres->setTitle(QApplication::translate("CMainFrameClass", "Fen\303\252tres", 0));
        menu->setTitle(QApplication::translate("CMainFrameClass", "?", 0));
        menu_dition->setTitle(QApplication::translate("CMainFrameClass", "\303\211dition", 0));
        mainToolBar->setWindowTitle(QApplication::translate("CMainFrameClass", "Barre d'outils", 0));
        dockWindows->setWindowTitle(QApplication::translate("CMainFrameClass", "Liste des fen\303\252tres", 0));
        btnAddWindow->setText(QApplication::translate("CMainFrameClass", "Ajouter", 0));
        btnRemoveWindow->setText(QApplication::translate("CMainFrameClass", "Supprimer", 0));
        dockEdit->setWindowTitle(QApplication::translate("CMainFrameClass", "\303\211dition du control", 0));
        groupEditGeneral->setTitle(QApplication::translate("CMainFrameClass", "G\303\251n\303\251ral", 0));
        label_3->setText(QApplication::translate("CMainFrameClass", "ID :", 0));
        label_4->setText(QApplication::translate("CMainFrameClass", "Taille :", 0));
        editControlWidth->setPrefix(QApplication::translate("CMainFrameClass", "Largeur: ", 0));
        editControlHeight->setPrefix(QApplication::translate("CMainFrameClass", "Hauteur: ", 0));
        label_5->setText(QApplication::translate("CMainFrameClass", "Texte :", 0));
        label_6->setText(QApplication::translate("CMainFrameClass", "Infobulle :", 0));
        label_7->setText(QApplication::translate("CMainFrameClass", "Texture :", 0));
        btnSelectTexture->setText(QApplication::translate("CMainFrameClass", "...", 0));
        btnAdaptSizeToTexture->setText(QApplication::translate("CMainFrameClass", "Adapter la taille", 0));
        editControlNoDrawFrame->setText(QApplication::translate("CMainFrameClass", "Pas de dessin de la frame", 0));
        editControlTiles->setText(QApplication::translate("CMainFrameClass", "Tuiles", 0));
        groupEditControl->setTitle(QApplication::translate("CMainFrameClass", "Control", 0));
        editControlEnabled->setText(QApplication::translate("CMainFrameClass", "Activ\303\251", 0));
        editControlVisible->setText(QApplication::translate("CMainFrameClass", "Visible", 0));
        editControlTabStop->setText(QApplication::translate("CMainFrameClass", "Tab stop", 0));
        label_2->setText(QApplication::translate("CMainFrameClass", "Position :", 0));
        editControlX->setSuffix(QString());
        editControlX->setPrefix(QApplication::translate("CMainFrameClass", "X: ", 0));
        editControlY->setPrefix(QApplication::translate("CMainFrameClass", "Y: ", 0));
        editControlGroup->setText(QApplication::translate("CMainFrameClass", "Group", 0));
        editControlScrollBar->setText(QApplication::translate("CMainFrameClass", "ScrollBar", 0));
        groupEditHAlign->setTitle(QApplication::translate("CMainFrameClass", "Alignement horizontal", 0));
        editHAlignLeft->setText(QApplication::translate("CMainFrameClass", "Gauche", 0));
        editHAlignCenter->setText(QApplication::translate("CMainFrameClass", "Centre", 0));
        editHAlignRight->setText(QApplication::translate("CMainFrameClass", "Droite", 0));
        groupEditVAlign->setTitle(QApplication::translate("CMainFrameClass", "Alignement vertical", 0));
        editVAlignTop->setText(QApplication::translate("CMainFrameClass", "Haut", 0));
        editVAlignMiddle->setText(QApplication::translate("CMainFrameClass", "Milieu", 0));
        editVAlignBottom->setText(QApplication::translate("CMainFrameClass", "Bas", 0));
        label_9->setText(QApplication::translate("CMainFrameClass", "Couleur :", 0));
        editControlColor->setText(QApplication::translate("CMainFrameClass", "Changer", 0));
        groupEditWindow->setTitle(QApplication::translate("CMainFrameClass", "Fen\303\252tre", 0));
        label->setText(QApplication::translate("CMainFrameClass", "Format :", 0));
        editWindowD3DFormat->clear();
        editWindowD3DFormat->insertItems(0, QStringList()
         << QApplication::translate("CMainFrameClass", "A4R4G4B4", 0)
         << QApplication::translate("CMainFrameClass", "A8R8G8B8", 0)
        );
        editWindowCaption->setText(QApplication::translate("CMainFrameClass", "Barre de titre", 0));
        editWindowNoFrame->setText(QApplication::translate("CMainFrameClass", "Pas de bordures", 0));
        label_8->setText(QApplication::translate("CMainFrameClass", "Icone :", 0));
        toolBar->setWindowTitle(QApplication::translate("CMainFrameClass", "Controls", 0));
    } // retranslateUi

};

namespace Ui {
    class CMainFrameClass: public Ui_CMainFrameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFRAME_H
