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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_MainFrameClass
{
public:
    QAction *action_propos;
    QAction *actionQt;
    QAction *actionQuitter;
    QAction *actionPlein_cran;
    QAction *actionFran_ais;
    QAction *actionEnglish;
    QAction *actionEnregistrer;
    QAction *actionEnregistrer_sous;
    QAction *actionNouveau;
    QAction *actionOuvrir;
    QAction *actionFermer;
    QAction *actionAjouter_des_fichiers;
    QAction *actionSupprimer_les_fichiers;
    QAction *actionCl_de_cryptage;
    QAction *actionCrypter_les_fichiers;
    QAction *actionExtraire_les_fichiers;
    QAction *actionExtracteur_de_client;
    QAction *actionNom;
    QAction *actionType;
    QAction *actionDate;
    QAction *actionTaille_2;
    QAction *actionGrandes_ic_nes;
    QAction *actionMoyennes_ic_nes;
    QAction *actionPetites_ic_nes;
    QAction *actionListe;
    QAction *actionDeutsch;
    QListView *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menu_dition;
    QMenu *menu;
    QMenu *menuAffichage;
    QMenu *menuLangage;
    QMenu *menuTrier_par;
    QMenu *menuTaille;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainFrameClass)
    {
        if (MainFrameClass->objectName().isEmpty())
            MainFrameClass->setObjectName(QStringLiteral("MainFrameClass"));
        MainFrameClass->resize(800, 600);
        MainFrameClass->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainFrame/Resources/ResEditor.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainFrameClass->setWindowIcon(icon);
        action_propos = new QAction(MainFrameClass);
        action_propos->setObjectName(QStringLiteral("action_propos"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainFrame/Resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_propos->setIcon(icon1);
        actionQt = new QAction(MainFrameClass);
        actionQt->setObjectName(QStringLiteral("actionQt"));
        actionQt->setIcon(icon1);
        actionQuitter = new QAction(MainFrameClass);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainFrame/Resources/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon2);
        actionPlein_cran = new QAction(MainFrameClass);
        actionPlein_cran->setObjectName(QStringLiteral("actionPlein_cran"));
        actionPlein_cran->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MainFrame/Resources/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlein_cran->setIcon(icon3);
        actionFran_ais = new QAction(MainFrameClass);
        actionFran_ais->setObjectName(QStringLiteral("actionFran_ais"));
        actionFran_ais->setCheckable(true);
        actionFran_ais->setChecked(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MainFrame/Resources/language_french.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFran_ais->setIcon(icon4);
        actionEnglish = new QAction(MainFrameClass);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionEnglish->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MainFrame/Resources/language_english.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnglish->setIcon(icon5);
        actionEnregistrer = new QAction(MainFrameClass);
        actionEnregistrer->setObjectName(QStringLiteral("actionEnregistrer"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/MainFrame/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer->setIcon(icon6);
        actionEnregistrer_sous = new QAction(MainFrameClass);
        actionEnregistrer_sous->setObjectName(QStringLiteral("actionEnregistrer_sous"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/MainFrame/Resources/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer_sous->setIcon(icon7);
        actionNouveau = new QAction(MainFrameClass);
        actionNouveau->setObjectName(QStringLiteral("actionNouveau"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/MainFrame/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNouveau->setIcon(icon8);
        actionOuvrir = new QAction(MainFrameClass);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/MainFrame/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon9);
        actionFermer = new QAction(MainFrameClass);
        actionFermer->setObjectName(QStringLiteral("actionFermer"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/MainFrame/Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFermer->setIcon(icon10);
        actionAjouter_des_fichiers = new QAction(MainFrameClass);
        actionAjouter_des_fichiers->setObjectName(QStringLiteral("actionAjouter_des_fichiers"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/MainFrame/Resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjouter_des_fichiers->setIcon(icon11);
        actionSupprimer_les_fichiers = new QAction(MainFrameClass);
        actionSupprimer_les_fichiers->setObjectName(QStringLiteral("actionSupprimer_les_fichiers"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/MainFrame/Resources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSupprimer_les_fichiers->setIcon(icon12);
        actionCl_de_cryptage = new QAction(MainFrameClass);
        actionCl_de_cryptage->setObjectName(QStringLiteral("actionCl_de_cryptage"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/MainFrame/Resources/key.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCl_de_cryptage->setIcon(icon13);
        actionCrypter_les_fichiers = new QAction(MainFrameClass);
        actionCrypter_les_fichiers->setObjectName(QStringLiteral("actionCrypter_les_fichiers"));
        actionCrypter_les_fichiers->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/MainFrame/Resources/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrypter_les_fichiers->setIcon(icon14);
        actionExtraire_les_fichiers = new QAction(MainFrameClass);
        actionExtraire_les_fichiers->setObjectName(QStringLiteral("actionExtraire_les_fichiers"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/MainFrame/Resources/extract.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtraire_les_fichiers->setIcon(icon15);
        actionExtracteur_de_client = new QAction(MainFrameClass);
        actionExtracteur_de_client->setObjectName(QStringLiteral("actionExtracteur_de_client"));
        actionExtracteur_de_client->setIcon(icon15);
        actionNom = new QAction(MainFrameClass);
        actionNom->setObjectName(QStringLiteral("actionNom"));
        actionNom->setCheckable(true);
        actionNom->setChecked(true);
        actionType = new QAction(MainFrameClass);
        actionType->setObjectName(QStringLiteral("actionType"));
        actionType->setCheckable(true);
        actionDate = new QAction(MainFrameClass);
        actionDate->setObjectName(QStringLiteral("actionDate"));
        actionDate->setCheckable(true);
        actionTaille_2 = new QAction(MainFrameClass);
        actionTaille_2->setObjectName(QStringLiteral("actionTaille_2"));
        actionTaille_2->setCheckable(true);
        actionGrandes_ic_nes = new QAction(MainFrameClass);
        actionGrandes_ic_nes->setObjectName(QStringLiteral("actionGrandes_ic_nes"));
        actionGrandes_ic_nes->setCheckable(true);
        actionMoyennes_ic_nes = new QAction(MainFrameClass);
        actionMoyennes_ic_nes->setObjectName(QStringLiteral("actionMoyennes_ic_nes"));
        actionMoyennes_ic_nes->setCheckable(true);
        actionMoyennes_ic_nes->setChecked(true);
        actionPetites_ic_nes = new QAction(MainFrameClass);
        actionPetites_ic_nes->setObjectName(QStringLiteral("actionPetites_ic_nes"));
        actionPetites_ic_nes->setCheckable(true);
        actionListe = new QAction(MainFrameClass);
        actionListe->setObjectName(QStringLiteral("actionListe"));
        actionListe->setCheckable(true);
        actionDeutsch = new QAction(MainFrameClass);
        actionDeutsch->setObjectName(QStringLiteral("actionDeutsch"));
        actionDeutsch->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/MainFrame/Resources/language_german.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeutsch->setIcon(icon16);
        centralWidget = new QListView(MainFrameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        centralWidget->setStyleSheet(QStringLiteral(""));
        centralWidget->setFrameShape(QFrame::NoFrame);
        centralWidget->setDragDropMode(QAbstractItemView::DragDrop);
        centralWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        centralWidget->setIconSize(QSize(32, 32));
        centralWidget->setResizeMode(QListView::Adjust);
        centralWidget->setGridSize(QSize(92, 52));
        centralWidget->setViewMode(QListView::IconMode);
        centralWidget->setSelectionRectVisible(true);
        MainFrameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainFrameClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menu_dition = new QMenu(menuBar);
        menu_dition->setObjectName(QStringLiteral("menu_dition"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        menuLangage = new QMenu(menuAffichage);
        menuLangage->setObjectName(QStringLiteral("menuLangage"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/MainFrame/Resources/language.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLangage->setIcon(icon17);
        menuTrier_par = new QMenu(menuAffichage);
        menuTrier_par->setObjectName(QStringLiteral("menuTrier_par"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/MainFrame/Resources/sort.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuTrier_par->setIcon(icon18);
        menuTaille = new QMenu(menuAffichage);
        menuTaille->setObjectName(QStringLiteral("menuTaille"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/MainFrame/Resources/size.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuTaille->setIcon(icon19);
        MainFrameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainFrameClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainFrameClass->addToolBar(Qt::BottomToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainFrameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral("background-color: #277570;"));
        MainFrameClass->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menu_dition->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menu->menuAction());
        menuFichier->addAction(actionNouveau);
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionFermer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionEnregistrer_sous);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menu_dition->addAction(actionAjouter_des_fichiers);
        menu_dition->addAction(actionExtraire_les_fichiers);
        menu_dition->addAction(actionSupprimer_les_fichiers);
        menu_dition->addAction(actionCl_de_cryptage);
        menu_dition->addAction(actionCrypter_les_fichiers);
        menu_dition->addSeparator();
        menu_dition->addAction(actionExtracteur_de_client);
        menu->addAction(action_propos);
        menu->addAction(actionQt);
        menuAffichage->addAction(menuTrier_par->menuAction());
        menuAffichage->addAction(menuTaille->menuAction());
        menuAffichage->addSeparator();
        menuAffichage->addAction(menuLangage->menuAction());
        menuAffichage->addAction(actionPlein_cran);
        menuLangage->addAction(actionFran_ais);
        menuLangage->addAction(actionEnglish);
        menuLangage->addAction(actionDeutsch);
        menuTrier_par->addAction(actionNom);
        menuTrier_par->addAction(actionType);
        menuTrier_par->addAction(actionDate);
        menuTrier_par->addAction(actionTaille_2);
        menuTaille->addAction(actionGrandes_ic_nes);
        menuTaille->addAction(actionMoyennes_ic_nes);
        menuTaille->addAction(actionPetites_ic_nes);
        menuTaille->addAction(actionListe);
        mainToolBar->addAction(actionNouveau);
        mainToolBar->addAction(actionOuvrir);
        mainToolBar->addAction(actionEnregistrer);
        mainToolBar->addAction(actionFermer);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAjouter_des_fichiers);
        mainToolBar->addAction(actionSupprimer_les_fichiers);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCl_de_cryptage);
        mainToolBar->addAction(actionCrypter_les_fichiers);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExtracteur_de_client);

        retranslateUi(MainFrameClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), MainFrameClass, SLOT(close()));

        QMetaObject::connectSlotsByName(MainFrameClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainFrameClass)
    {
        MainFrameClass->setWindowTitle(QApplication::translate("MainFrameClass", "ResEditor", 0));
        action_propos->setText(QApplication::translate("MainFrameClass", "\303\200 propos", 0));
        actionQt->setText(QApplication::translate("MainFrameClass", "Qt", 0));
        actionQuitter->setText(QApplication::translate("MainFrameClass", "Quitter", 0));
        actionPlein_cran->setText(QApplication::translate("MainFrameClass", "Plein \303\251cran", 0));
        actionFran_ais->setText(QApplication::translate("MainFrameClass", "Fran\303\247ais", 0));
        actionEnglish->setText(QApplication::translate("MainFrameClass", "English", 0));
        actionEnregistrer->setText(QApplication::translate("MainFrameClass", "Enregistrer", 0));
        actionEnregistrer_sous->setText(QApplication::translate("MainFrameClass", "Enregistrer sous...", 0));
        actionNouveau->setText(QApplication::translate("MainFrameClass", "Nouveau", 0));
        actionOuvrir->setText(QApplication::translate("MainFrameClass", "Ouvrir", 0));
        actionFermer->setText(QApplication::translate("MainFrameClass", "Fermer", 0));
        actionAjouter_des_fichiers->setText(QApplication::translate("MainFrameClass", "Ajouter des fichiers", 0));
        actionSupprimer_les_fichiers->setText(QApplication::translate("MainFrameClass", "Supprimer les fichiers", 0));
        actionCl_de_cryptage->setText(QApplication::translate("MainFrameClass", "Cl\303\251 de cryptage", 0));
        actionCrypter_les_fichiers->setText(QApplication::translate("MainFrameClass", "Crypter les fichiers", 0));
        actionExtraire_les_fichiers->setText(QApplication::translate("MainFrameClass", "Extraire les fichiers", 0));
        actionExtracteur_de_client->setText(QApplication::translate("MainFrameClass", "Extracteur de client", 0));
        actionNom->setText(QApplication::translate("MainFrameClass", "Nom", 0));
        actionType->setText(QApplication::translate("MainFrameClass", "Type", 0));
        actionDate->setText(QApplication::translate("MainFrameClass", "Date", 0));
        actionTaille_2->setText(QApplication::translate("MainFrameClass", "Taille", 0));
        actionGrandes_ic_nes->setText(QApplication::translate("MainFrameClass", "Grandes ic\303\264nes", 0));
        actionMoyennes_ic_nes->setText(QApplication::translate("MainFrameClass", "Moyennes ic\303\264nes", 0));
        actionPetites_ic_nes->setText(QApplication::translate("MainFrameClass", "Petites ic\303\264nes", 0));
        actionListe->setText(QApplication::translate("MainFrameClass", "Liste", 0));
        actionDeutsch->setText(QApplication::translate("MainFrameClass", "Deutsch", 0));
        menuFichier->setTitle(QApplication::translate("MainFrameClass", "Fichier", 0));
        menu_dition->setTitle(QApplication::translate("MainFrameClass", "\303\211dition", 0));
        menu->setTitle(QApplication::translate("MainFrameClass", "?", 0));
        menuAffichage->setTitle(QApplication::translate("MainFrameClass", "Affichage", 0));
        menuLangage->setTitle(QApplication::translate("MainFrameClass", "Langage", 0));
        menuTrier_par->setTitle(QApplication::translate("MainFrameClass", "Trier par", 0));
        menuTaille->setTitle(QApplication::translate("MainFrameClass", "Taille", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainFrameClass", "Barre d'outils", 0));
    } // retranslateUi

};

namespace Ui {
    class MainFrameClass: public Ui_MainFrameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFRAME_H
