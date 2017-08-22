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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFrameClass
{
public:
    QAction *action_propos;
    QAction *actionQt;
    QAction *actionOuvrir;
    QAction *actionFermer;
    QAction *actionQuitter;
    QAction *action_diter_les_effets;
    QAction *actionGrille;
    QAction *actionTextures_additionnelles;
    QAction *actionJouer;
    QAction *actionStop;
    QAction *actionLOD_0;
    QAction *actionLOD_1;
    QAction *actionLOD_2;
    QAction *actionEnregistrer;
    QAction *actionGuide_d_import;
    QAction *actionPlein_cran;
    QAction *actionCouleur_du_fond;
    QAction *actionFran_ais;
    QAction *actionEnglish;
    QAction *actionObjet_de_collision;
    QAction *actionCW_CCW;
    QAction *actionSkin_auto;
    QAction *actionVolume_sonore;
    QAction *actionDeutsch;
    QAction *actionOs;
    QAction *actionSolide;
    QAction *actionLigne;
    QAction *actionPoint;
    QAction *actionTaille_l_import;
    QAction *actionModel_de_r_f_rence;
    QAction *actionCollision_auto;
    QAction *actionGetRelyOn;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menu_dition;
    QMenu *menuAffichage;
    QMenu *menuLangage;
    QMenu *menu;
    QMenu *menuFen_tres;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QDockWidget *dockTimeline;
    QWidget *dockWidgetContents;
    QDockWidget *dockAnimations;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QListView *motionList;

    void setupUi(QMainWindow *MainFrameClass)
    {
        if (MainFrameClass->objectName().isEmpty())
            MainFrameClass->setObjectName(QStringLiteral("MainFrameClass"));
        MainFrameClass->resize(1024, 768);
        MainFrameClass->setMinimumSize(QSize(400, 300));
        MainFrameClass->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/ModelEditor.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainFrameClass->setWindowIcon(icon);
        action_propos = new QAction(MainFrameClass);
        action_propos->setObjectName(QStringLiteral("action_propos"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainFrame/Resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_propos->setIcon(icon1);
        actionQt = new QAction(MainFrameClass);
        actionQt->setObjectName(QStringLiteral("actionQt"));
        actionQt->setIcon(icon1);
        actionOuvrir = new QAction(MainFrameClass);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainFrame/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon2);
        actionFermer = new QAction(MainFrameClass);
        actionFermer->setObjectName(QStringLiteral("actionFermer"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MainFrame/Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFermer->setIcon(icon3);
        actionQuitter = new QAction(MainFrameClass);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MainFrame/Resources/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon4);
        action_diter_les_effets = new QAction(MainFrameClass);
        action_diter_les_effets->setObjectName(QStringLiteral("action_diter_les_effets"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MainFrame/Resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_diter_les_effets->setIcon(icon5);
        actionGrille = new QAction(MainFrameClass);
        actionGrille->setObjectName(QStringLiteral("actionGrille"));
        actionGrille->setCheckable(true);
        actionGrille->setChecked(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/MainFrame/Resources/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrille->setIcon(icon6);
        actionTextures_additionnelles = new QAction(MainFrameClass);
        actionTextures_additionnelles->setObjectName(QStringLiteral("actionTextures_additionnelles"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/MainFrame/Resources/texture.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTextures_additionnelles->setIcon(icon7);
        actionJouer = new QAction(MainFrameClass);
        actionJouer->setObjectName(QStringLiteral("actionJouer"));
        actionJouer->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/MainFrame/Resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QStringLiteral(":/MainFrame/Resources/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        actionJouer->setIcon(icon8);
        actionStop = new QAction(MainFrameClass);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/MainFrame/Resources/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon9);
        actionLOD_0 = new QAction(MainFrameClass);
        actionLOD_0->setObjectName(QStringLiteral("actionLOD_0"));
        actionLOD_0->setCheckable(true);
        actionLOD_0->setChecked(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/MainFrame/Resources/lod1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLOD_0->setIcon(icon10);
        actionLOD_1 = new QAction(MainFrameClass);
        actionLOD_1->setObjectName(QStringLiteral("actionLOD_1"));
        actionLOD_1->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/MainFrame/Resources/lod2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLOD_1->setIcon(icon11);
        actionLOD_2 = new QAction(MainFrameClass);
        actionLOD_2->setObjectName(QStringLiteral("actionLOD_2"));
        actionLOD_2->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/MainFrame/Resources/lod3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLOD_2->setIcon(icon12);
        actionEnregistrer = new QAction(MainFrameClass);
        actionEnregistrer->setObjectName(QStringLiteral("actionEnregistrer"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/MainFrame/Resources/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer->setIcon(icon13);
        actionGuide_d_import = new QAction(MainFrameClass);
        actionGuide_d_import->setObjectName(QStringLiteral("actionGuide_d_import"));
        actionGuide_d_import->setIcon(icon1);
        actionPlein_cran = new QAction(MainFrameClass);
        actionPlein_cran->setObjectName(QStringLiteral("actionPlein_cran"));
        actionPlein_cran->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/MainFrame/Resources/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlein_cran->setIcon(icon14);
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
        actionObjet_de_collision = new QAction(MainFrameClass);
        actionObjet_de_collision->setObjectName(QStringLiteral("actionObjet_de_collision"));
        actionObjet_de_collision->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/MainFrame/Resources/collision.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionObjet_de_collision->setIcon(icon18);
        actionCW_CCW = new QAction(MainFrameClass);
        actionCW_CCW->setObjectName(QStringLiteral("actionCW_CCW"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/MainFrame/Resources/cw_ccw.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCW_CCW->setIcon(icon19);
        actionSkin_auto = new QAction(MainFrameClass);
        actionSkin_auto->setObjectName(QStringLiteral("actionSkin_auto"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/MainFrame/Resources/Skin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSkin_auto->setIcon(icon20);
        actionVolume_sonore = new QAction(MainFrameClass);
        actionVolume_sonore->setObjectName(QStringLiteral("actionVolume_sonore"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/MainFrame/Resources/volume.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVolume_sonore->setIcon(icon21);
        actionDeutsch = new QAction(MainFrameClass);
        actionDeutsch->setObjectName(QStringLiteral("actionDeutsch"));
        actionDeutsch->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/MainFrame/Resources/language_german.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeutsch->setIcon(icon22);
        actionOs = new QAction(MainFrameClass);
        actionOs->setObjectName(QStringLiteral("actionOs"));
        actionOs->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/MainFrame/Resources/bones.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOs->setIcon(icon23);
        actionSolide = new QAction(MainFrameClass);
        actionSolide->setObjectName(QStringLiteral("actionSolide"));
        actionSolide->setCheckable(true);
        actionSolide->setChecked(true);
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/MainFrame/Resources/fill_solid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSolide->setIcon(icon24);
        actionLigne = new QAction(MainFrameClass);
        actionLigne->setObjectName(QStringLiteral("actionLigne"));
        actionLigne->setCheckable(true);
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/MainFrame/Resources/fill_line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLigne->setIcon(icon25);
        actionPoint = new QAction(MainFrameClass);
        actionPoint->setObjectName(QStringLiteral("actionPoint"));
        actionPoint->setCheckable(true);
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/MainFrame/Resources/fill_point.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPoint->setIcon(icon26);
        actionTaille_l_import = new QAction(MainFrameClass);
        actionTaille_l_import->setObjectName(QStringLiteral("actionTaille_l_import"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/MainFrame/Resources/scale.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTaille_l_import->setIcon(icon27);
        actionModel_de_r_f_rence = new QAction(MainFrameClass);
        actionModel_de_r_f_rence->setObjectName(QStringLiteral("actionModel_de_r_f_rence"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/MainFrame/Resources/model.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModel_de_r_f_rence->setIcon(icon28);
        actionCollision_auto = new QAction(MainFrameClass);
        actionCollision_auto->setObjectName(QStringLiteral("actionCollision_auto"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/MainFrame/Resources/Coll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCollision_auto->setIcon(icon29);
        actionGetRelyOn = new QAction(MainFrameClass);
        actionGetRelyOn->setObjectName(QStringLiteral("actionGetRelyOn"));
        actionGetRelyOn->setCheckable(true);
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/MainFrame/Resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGetRelyOn->setIcon(icon30);
        centralWidget = new QWidget(MainFrameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainFrameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainFrameClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 26));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menu_dition = new QMenu(menuBar);
        menu_dition->setObjectName(QStringLiteral("menu_dition"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        menuLangage = new QMenu(menuAffichage);
        menuLangage->setObjectName(QStringLiteral("menuLangage"));
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/MainFrame/Resources/language.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLangage->setIcon(icon31);
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuFen_tres = new QMenu(menuBar);
        menuFen_tres->setObjectName(QStringLiteral("menuFen_tres"));
        MainFrameClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainFrameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral("background-color: #180076;"));
        MainFrameClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainFrameClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainFrameClass->addToolBar(Qt::BottomToolBarArea, mainToolBar);
        dockTimeline = new QDockWidget(MainFrameClass);
        dockTimeline->setObjectName(QStringLiteral("dockTimeline"));
        dockTimeline->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockTimeline->setWidget(dockWidgetContents);
        MainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockTimeline);
        dockAnimations = new QDockWidget(MainFrameClass);
        dockAnimations->setObjectName(QStringLiteral("dockAnimations"));
        dockAnimations->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        motionList = new QListView(dockWidgetContents_2);
        motionList->setObjectName(QStringLiteral("motionList"));
        motionList->setMaximumSize(QSize(16777215, 16777215));
        motionList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        motionList->setUniformItemSizes(true);

        horizontalLayout->addWidget(motionList);

        dockAnimations->setWidget(dockWidgetContents_2);
        MainFrameClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockAnimations);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menu_dition->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuFen_tres->menuAction());
        menuBar->addAction(menu->menuAction());
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionFermer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menu_dition->addAction(action_diter_les_effets);
        menu_dition->addAction(actionCW_CCW);
        menu_dition->addAction(actionSkin_auto);
        menu_dition->addAction(actionCollision_auto);
        menu_dition->addAction(actionTaille_l_import);
        menu_dition->addSeparator();
        menu_dition->addAction(actionGuide_d_import);
        menu_dition->addSeparator();
        menu_dition->addAction(actionGetRelyOn);
        menuAffichage->addAction(actionGrille);
        menuAffichage->addAction(actionCouleur_du_fond);
        menuAffichage->addAction(actionVolume_sonore);
        menuAffichage->addSeparator();
        menuAffichage->addAction(actionTextures_additionnelles);
        menuAffichage->addAction(actionObjet_de_collision);
        menuAffichage->addAction(actionOs);
        menuAffichage->addAction(actionModel_de_r_f_rence);
        menuAffichage->addSeparator();
        menuAffichage->addAction(actionJouer);
        menuAffichage->addAction(actionStop);
        menuAffichage->addSeparator();
        menuAffichage->addAction(actionLOD_0);
        menuAffichage->addAction(actionLOD_1);
        menuAffichage->addAction(actionLOD_2);
        menuAffichage->addSeparator();
        menuAffichage->addAction(actionSolide);
        menuAffichage->addAction(actionLigne);
        menuAffichage->addAction(actionPoint);
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
        mainToolBar->addAction(actionTaille_l_import);
        mainToolBar->addAction(action_diter_les_effets);
        mainToolBar->addAction(actionCW_CCW);
        mainToolBar->addAction(actionSkin_auto);
        mainToolBar->addAction(actionCollision_auto);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionGrille);
        mainToolBar->addAction(actionTextures_additionnelles);
        mainToolBar->addAction(actionObjet_de_collision);
        mainToolBar->addAction(actionOs);
        mainToolBar->addAction(actionModel_de_r_f_rence);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSolide);
        mainToolBar->addAction(actionLigne);
        mainToolBar->addAction(actionPoint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLOD_0);
        mainToolBar->addAction(actionLOD_1);
        mainToolBar->addAction(actionLOD_2);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionVolume_sonore);

        retranslateUi(MainFrameClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), MainFrameClass, SLOT(close()));

        QMetaObject::connectSlotsByName(MainFrameClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainFrameClass)
    {
        MainFrameClass->setWindowTitle(QApplication::translate("MainFrameClass", "ModelEditor", 0));
        action_propos->setText(QApplication::translate("MainFrameClass", "\303\200 propos", 0));
        actionQt->setText(QApplication::translate("MainFrameClass", "Qt", 0));
        actionOuvrir->setText(QApplication::translate("MainFrameClass", "Ouvrir", 0));
        actionFermer->setText(QApplication::translate("MainFrameClass", "Fermer", 0));
        actionQuitter->setText(QApplication::translate("MainFrameClass", "Quitter", 0));
        action_diter_les_effets->setText(QApplication::translate("MainFrameClass", "\303\211diter les effets", 0));
        actionGrille->setText(QApplication::translate("MainFrameClass", "Grille", 0));
        actionTextures_additionnelles->setText(QApplication::translate("MainFrameClass", "Textures additionnelles", 0));
        actionJouer->setText(QApplication::translate("MainFrameClass", "Jouer", 0));
        actionStop->setText(QApplication::translate("MainFrameClass", "Stop", 0));
        actionLOD_0->setText(QApplication::translate("MainFrameClass", "LOD 0", 0));
        actionLOD_1->setText(QApplication::translate("MainFrameClass", "LOD 1", 0));
        actionLOD_2->setText(QApplication::translate("MainFrameClass", "LOD 2", 0));
        actionEnregistrer->setText(QApplication::translate("MainFrameClass", "Enregistrer", 0));
        actionGuide_d_import->setText(QApplication::translate("MainFrameClass", "Guide d'import", 0));
        actionPlein_cran->setText(QApplication::translate("MainFrameClass", "Plein \303\251cran", 0));
        actionCouleur_du_fond->setText(QApplication::translate("MainFrameClass", "Couleur du fond", 0));
        actionFran_ais->setText(QApplication::translate("MainFrameClass", "Fran\303\247ais", 0));
        actionEnglish->setText(QApplication::translate("MainFrameClass", "English", 0));
        actionObjet_de_collision->setText(QApplication::translate("MainFrameClass", "Objet de collision", 0));
        actionCW_CCW->setText(QApplication::translate("MainFrameClass", "CW <-> CCW", 0));
        actionSkin_auto->setText(QApplication::translate("MainFrameClass", "Skin auto", 0));
        actionVolume_sonore->setText(QApplication::translate("MainFrameClass", "Volume sonore", 0));
        actionDeutsch->setText(QApplication::translate("MainFrameClass", "Deutsch", 0));
        actionOs->setText(QApplication::translate("MainFrameClass", "Os", 0));
        actionSolide->setText(QApplication::translate("MainFrameClass", "Solide", 0));
        actionLigne->setText(QApplication::translate("MainFrameClass", "Ligne", 0));
        actionPoint->setText(QApplication::translate("MainFrameClass", "Point", 0));
        actionTaille_l_import->setText(QApplication::translate("MainFrameClass", "Taille \303\240 l'import", 0));
        actionModel_de_r_f_rence->setText(QApplication::translate("MainFrameClass", "Model de r\303\251f\303\251rence", 0));
        actionCollision_auto->setText(QApplication::translate("MainFrameClass", "Collision auto", 0));
        actionGetRelyOn->setText(QApplication::translate("MainFrameClass", "getRelyOn", 0));
        actionGetRelyOn->setShortcut(QApplication::translate("MainFrameClass", "F1", 0));
        menuFichier->setTitle(QApplication::translate("MainFrameClass", "Fichier", 0));
        menu_dition->setTitle(QApplication::translate("MainFrameClass", "\303\211dition", 0));
        menuAffichage->setTitle(QApplication::translate("MainFrameClass", "Affichage", 0));
        menuLangage->setTitle(QApplication::translate("MainFrameClass", "Langage", 0));
        menu->setTitle(QApplication::translate("MainFrameClass", "?", 0));
        menuFen_tres->setTitle(QApplication::translate("MainFrameClass", "Fen\303\252tres", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainFrameClass", "Barre d'outils", 0));
        dockTimeline->setWindowTitle(QApplication::translate("MainFrameClass", "Timeline", 0));
        dockAnimations->setWindowTitle(QApplication::translate("MainFrameClass", "Animations", 0));
    } // retranslateUi

};

namespace Ui {
    class MainFrameClass: public Ui_MainFrameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFRAME_H
