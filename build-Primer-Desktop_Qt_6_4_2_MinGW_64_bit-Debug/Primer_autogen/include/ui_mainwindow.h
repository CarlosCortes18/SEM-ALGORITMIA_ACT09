/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label;
    QPlainTextEdit *mallaMostrar;
    QLabel *label_2;
    QLineEdit *datoId;
    QLabel *label_3;
    QLineEdit *datoVoltaje;
    QLabel *label_4;
    QLineEdit *datoPosicionX;
    QLabel *label_5;
    QLineEdit *datoPosicionY;
    QLabel *label_6;
    QLineEdit *datoRed;
    QLabel *label_7;
    QLineEdit *datoGreen;
    QLabel *label_8;
    QLineEdit *datoBlue;
    QPushButton *mostrarNeuronas;
    QPushButton *insertarInicio;
    QPushButton *insertarFinal;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QPushButton *BotonMostrardelatabla;
    QPushButton *BotonBuscardelatabla;
    QLineEdit *idBusqueda;
    QWidget *tab_3;
    QPushButton *dibujar;
    QPushButton *limpiar;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(805, 351);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(tab);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 3);

        mallaMostrar = new QPlainTextEdit(tab);
        mallaMostrar->setObjectName("mallaMostrar");

        gridLayout->addWidget(mallaMostrar, 0, 4, 8, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        datoId = new QLineEdit(tab);
        datoId->setObjectName("datoId");

        gridLayout->addWidget(datoId, 1, 2, 1, 2);

        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        datoVoltaje = new QLineEdit(tab);
        datoVoltaje->setObjectName("datoVoltaje");

        gridLayout->addWidget(datoVoltaje, 2, 2, 1, 2);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        datoPosicionX = new QLineEdit(tab);
        datoPosicionX->setObjectName("datoPosicionX");

        gridLayout->addWidget(datoPosicionX, 3, 2, 1, 2);

        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        datoPosicionY = new QLineEdit(tab);
        datoPosicionY->setObjectName("datoPosicionY");

        gridLayout->addWidget(datoPosicionY, 4, 2, 1, 2);

        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 2);

        datoRed = new QLineEdit(tab);
        datoRed->setObjectName("datoRed");

        gridLayout->addWidget(datoRed, 5, 2, 1, 2);

        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        datoGreen = new QLineEdit(tab);
        datoGreen->setObjectName("datoGreen");

        gridLayout->addWidget(datoGreen, 6, 2, 1, 2);

        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 7, 0, 1, 2);

        datoBlue = new QLineEdit(tab);
        datoBlue->setObjectName("datoBlue");

        gridLayout->addWidget(datoBlue, 7, 2, 1, 2);

        mostrarNeuronas = new QPushButton(tab);
        mostrarNeuronas->setObjectName("mostrarNeuronas");

        gridLayout->addWidget(mostrarNeuronas, 8, 4, 1, 1);

        insertarInicio = new QPushButton(tab);
        insertarInicio->setObjectName("insertarInicio");

        gridLayout->addWidget(insertarInicio, 8, 0, 1, 2);

        insertarFinal = new QPushButton(tab);
        insertarFinal->setObjectName("insertarFinal");

        gridLayout->addWidget(insertarFinal, 8, 2, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tab_2->setEnabled(true);
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(220, 10, 521, 231));
        BotonMostrardelatabla = new QPushButton(tab_2);
        BotonMostrardelatabla->setObjectName("BotonMostrardelatabla");
        BotonMostrardelatabla->setGeometry(QRect(20, 50, 171, 31));
        BotonBuscardelatabla = new QPushButton(tab_2);
        BotonBuscardelatabla->setObjectName("BotonBuscardelatabla");
        BotonBuscardelatabla->setGeometry(QRect(20, 140, 171, 31));
        idBusqueda = new QLineEdit(tab_2);
        idBusqueda->setObjectName("idBusqueda");
        idBusqueda->setGeometry(QRect(20, 190, 171, 31));
        idBusqueda->setClearButtonEnabled(false);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        dibujar = new QPushButton(tab_3);
        dibujar->setObjectName("dibujar");
        dibujar->setGeometry(QRect(170, 220, 75, 24));
        limpiar = new QPushButton(tab_3);
        limpiar->setObjectName("limpiar");
        limpiar->setGeometry(QRect(300, 220, 75, 24));
        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(150, 10, 256, 192));
        tabWidget->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 805, 22));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "NEURONAS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Voltaje:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n Y:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Red:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Green:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Blue:", nullptr));
        mostrarNeuronas->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        insertarInicio->setText(QCoreApplication::translate("MainWindow", "Insertar Inicio", nullptr));
        insertarFinal->setText(QCoreApplication::translate("MainWindow", "Insertar Final", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        BotonMostrardelatabla->setText(QCoreApplication::translate("MainWindow", "Mostrar de la tabla", nullptr));
        BotonBuscardelatabla->setText(QCoreApplication::translate("MainWindow", "Buscar por ID", nullptr));
        idBusqueda->setPlaceholderText(QCoreApplication::translate("MainWindow", " ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        dibujar->setText(QCoreApplication::translate("MainWindow", "Dibujar", nullptr));
        limpiar->setText(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Gr\303\241fica", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
