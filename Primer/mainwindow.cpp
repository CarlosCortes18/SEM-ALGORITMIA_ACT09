#include "mainwindow.h"
#include "./ui_mainwindow.h"

//INICIO NEURONA
Neurona::Neurona() // Constructor de la clase Neurona, inicializamos los valores para cada objeto que se creará
{
    id = red = green = blue = -1;
    voltaje = 0.0;
    posicion_x = posicion_y = 0;
    siguiente = NULL;
}

Neurona::~Neurona() //Destructor de la clase Neurona
{

}

void Neurona::agregarDato(int newId, float newVoltaje, int newPosicion_x, int newPosicion_y, int newRed, int newGreen, int newBlue)
{
    id = newId;
    voltaje = newVoltaje;
    posicion_x = newPosicion_x;
    posicion_y = newPosicion_y;
    red = newRed;
    green = newGreen;
    blue = newBlue;
}

QString Neurona::getId()
{
    return QString::number(id);
}

QString Neurona::getVoltaje()
{
    return QString::number(voltaje);
}

QString Neurona::getPosX()
{
    return QString::number(posicion_x);
}

QString Neurona::getPosY()
{
    return QString::number(posicion_y);
}

QString Neurona::getRed()
{
    return QString::number(red);
}

QString Neurona::getGreen()
{
    return QString::number(green);
}

QString Neurona::getBlue()
{
    return QString::number(blue);
}



//INICIO LISTA NEURONA

listaNeurona::listaNeurona()
{
    inicio = NULL;
    cont = 0;
}

listaNeurona::~listaNeurona()
{

}

bool listaNeurona::vacia()
{
    if(inicio == NULL)
        return true;
    return false;
}

int listaNeurona::cantidadNeuronas()
{
    return cont;
}

void listaNeurona::agregar_inicio(int newId, float newVoltaje, int newPosicion_x, int newPosicion_y, int newRed, int newGreen, int newBlue)
{
    Neurona *temp = new Neurona();
    temp->agregarDato(newId, newVoltaje, newPosicion_x, newPosicion_y, newRed, newGreen, newBlue);
    if(vacia())
    {
      inicio = temp;
    }
    else
    {
        temp->siguiente = inicio;
        inicio = temp;
    }
    cont++;
}

void listaNeurona::agregar_final(int newId, float newVoltaje, int newPosicion_x, int newPosicion_y, int newRed, int newGreen, int newBlue)
{
    Neurona *temp = new Neurona();
    temp->agregarDato(newId, newVoltaje, newPosicion_x, newPosicion_y, newRed, newGreen, newBlue);
    if(vacia())
    {
      inicio = temp;
    }
    else if(inicio->siguiente == NULL)
    {
        inicio->siguiente = temp;
    }
    else
    {
        Neurona *iter;
        iter = inicio;
        while(iter->siguiente != NULL)
        {
            iter = iter->siguiente;
        }
        iter->siguiente = temp;
    }
    cont++;
}

QString listaNeurona::mostrar()
{
    QString cadena;
    if(vacia())
    {
        cadena = "NO HAY NEURONAS";
    }
    else if(inicio->siguiente == NULL)
    {
        cadena = QString::fromUtf8("#1 ID: ") + inicio->getId() + QString::fromUtf8(", VOLTAJE: ") + inicio->getVoltaje() + QString::fromUtf8(", POSICION X: ") + inicio->getPosX() + QString::fromUtf8(", POSICION Y: ") + inicio->getPosY() + QString::fromUtf8(", RED: ") + inicio->getRed() + QString::fromUtf8(", GREEN: ") + inicio->getGreen() + QString::fromUtf8(", BLUE: ") + inicio->getBlue();
    }
    else
    {
        int i = 1;
        cadena = QString::fromUtf8("NEURONA #") + QString::number(i) + QString::fromUtf8(" ID: ") + inicio->getId() + QString::fromUtf8(", VOLTAJE: ") + inicio->getVoltaje() + QString::fromUtf8(", POSICION X: ") + inicio->getPosX() + QString::fromUtf8(", POSICION Y: ") + inicio->getPosY() + QString::fromUtf8(", RED: ") + inicio->getRed() + QString::fromUtf8(", GREEN: ") + inicio->getGreen() + QString::fromUtf8(", BLUE: ") + inicio->getBlue() + QString::fromUtf8("\n");
        Neurona *iter;
        iter = inicio;
        while(iter->siguiente != NULL)
        {
            i++;
            iter = iter->siguiente;
            cadena = cadena + QString::fromUtf8("NEURONA #") + QString::number(i) + QString::fromUtf8(" ID: ") + iter->getId() + QString::fromUtf8(", VOLTAJE: ") + iter->getVoltaje() + QString::fromUtf8(", POSICION X: ") + iter->getPosX() + QString::fromUtf8(", POSICION Y: ") + iter->getPosY() + QString::fromUtf8(", RED: ") + iter->getRed() + QString::fromUtf8(", GREEN: ") + iter->getGreen() + QString::fromUtf8(", BLUE: ") + iter->getBlue() + QString::fromUtf8("\n");
        }
    }
    return cadena;
}

void listaNeurona::guardar(string ruta)
{
    string newRuta = ruta;
    if(!vacia())
    {
        ofstream archivo(newRuta);
            if(archivo.is_open())
            {
                Neurona *tempG;
                tempG = inicio;
                while(tempG != NULL)
                {
                    archivo << tempG->getId().toStdString() << std::endl;
                    archivo << tempG->getVoltaje().toStdString() << std::endl;
                    archivo << tempG->getPosX().toStdString() << std::endl;
                    archivo << tempG->getPosY().toStdString() << std::endl;
                    archivo << tempG->getRed().toStdString() << std::endl;
                    archivo << tempG->getGreen().toStdString() << std::endl;
                    archivo << tempG->getBlue().toStdString() << std::endl;
                    tempG = tempG->siguiente;
                }
                archivo.close();
            }
            else
            {
                //AQUI VA UN POP UP! DE QUE HUBO ERROR EN APERTURA DE ARCHIVO
            }
    }
}

void listaNeurona::recuperar(string ruta)
{
    string newRuta = ruta;
    ifstream archivo(ruta);
    if(archivo.is_open())
    {
        string id;
        string voltaje;
        string posX;
        string posY;
        string red;
        string green;
        string blue;
        getline(archivo,id);
        while(id !="")
        {
            getline(archivo,voltaje);
            getline(archivo,posX);
            getline(archivo,posY);
            getline(archivo,red);
            getline(archivo,green);
            getline(archivo,blue);
            std::cout << "ID: " << id << std::endl;
            std::cout << "Voltaje: " << voltaje << std::endl;
            std::cout << "Posicion X: " << posX << std::endl;
            std::cout << "Psocion Y: " << posY << std::endl;
            std::cout << "Red: " << red << std::endl;
            std::cout << "Green: " << green << std::endl;
            std::cout << "Blue: " << blue << std::endl;
            Neurona *temp = new Neurona();
            int newInt = stoi(id);
            std::stringstream out;
            out << std::fixed << std::setprecision(2) << std::stof(voltaje);
            float newVoltaje = std::stof(out.str());
            int newPosX = stoi(posX);
            int newPosY = stoi(posY);
            int newRed = stoi(red);
            int newGreen = stoi(green);
            int newBlue = stoi(blue);
            temp->agregarDato(newInt, newVoltaje, newPosX, newPosY, newRed, newGreen, newBlue);
            cont++;
            if(vacia())
            {
                inicio = temp;
            }
            else if(inicio->siguiente == NULL)
            {
                inicio->siguiente = temp;
            }
            else
            {
                Neurona *iter;
                iter = inicio;
                while(iter->siguiente != NULL)
                {
                    iter = iter->siguiente;
                }
                iter->siguiente = temp;
            }
            getline(archivo,id);
        }
        archivo.close();
    }
    else
    {
        //AQUI VA UN POP UP! DE QUE HUBO ERROR EN APERTURA DE ARCHIVO
    }
}

QString listaNeurona::devolverNeurona(int i)
{
    Neurona *iter;
    iter = inicio;
    int limite = i;
    int contador = 1;
    if(limite == 0)
    {

    }
    else if(limite == 1)
    {
        iter = iter->siguiente;
    }
    else
    {
        while(contador < limite)
        {
            iter = iter->siguiente;
            contador++;
        }
        iter = iter->siguiente;
    }
    QString cadena = iter->getId() + "." + iter->getVoltaje() + "." + iter->getPosX() + "." + iter->getPosY() + "." + iter->getRed() + "." + iter->getGreen() + "." + iter->getBlue();
    return cadena;
}
//FINAL DE LISTA
listaNeurona LN;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_insertarInicio_clicked()
{
    QString id = ui->datoId->text();
    QString voltaje = ui->datoVoltaje->text();
    QString posicion_x = ui->datoPosicionX->text();
    QString posicion_y = ui->datoPosicionY->text();
    QString red = ui->datoRed->text();
    QString green = ui->datoGreen->text();
    QString blue = ui->datoBlue->text();
    LN.agregar_inicio(id.toInt(), voltaje.toFloat(), posicion_x.toInt(), posicion_y.toInt(), red.toInt(), green.toInt(), blue.toInt());
    ui->datoId->clear();
    ui->datoVoltaje->clear();
    ui->datoPosicionX->clear();
    ui->datoPosicionY->clear();
    ui->datoRed->clear();
    ui->datoGreen->clear();
    ui->datoBlue->clear();
}

void MainWindow::on_insertarFinal_clicked()
{
    QString id = ui->datoId->text();
    QString voltaje = ui->datoVoltaje->text();
    QString posicion_x = ui->datoPosicionX->text();
    QString posicion_y = ui->datoPosicionY->text();
    QString red = ui->datoRed->text();
    QString green = ui->datoGreen->text();
    QString blue = ui->datoBlue->text();
    LN.agregar_final(id.toInt(), voltaje.toFloat(), posicion_x.toInt(), posicion_y.toInt(), red.toInt(), green.toInt(), blue.toInt());
    ui->datoId->clear();
    ui->datoVoltaje->clear();
    ui->datoPosicionX->clear();
    ui->datoPosicionY->clear();
    ui->datoRed->clear();
    ui->datoGreen->clear();
    ui->datoBlue->clear();
}


void MainWindow::on_mostrarNeuronas_clicked()
{
    ui->mallaMostrar->clear();
    ui->mallaMostrar->insertPlainText(LN.mostrar());
}


void MainWindow::on_actionAbrir_triggered()
{
    QString Filename = QFileDialog::getOpenFileName(this,"Abrir archivo", ".","archivos (*.txt)");
    std::string file=Filename.toStdString();
    LN.recuperar(file);
}


void MainWindow::on_actionGuardar_triggered()
{
    QString Filename = QFileDialog::getSaveFileName(this,"Guardar archivo", ".","archivos (*.txt)");
    std::string file=Filename.toStdString();
    LN.guardar(file);
}


void MainWindow::on_BotonMostrardelatabla_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setColumnCount(7);
    QStringList headers = {"ID", "VOLTAJE", "POSICIÓN X", "POSICIÓN Y", "RED", "GREEN", "BLUE"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(LN.cantidadNeuronas());
    for(int i=0;i<LN.cantidadNeuronas();i++) //Aqui crearemos el QTableWidget
    {
        QStringList list = LN.devolverNeurona(i).split(".");
        QTableWidgetItem *id = new QTableWidgetItem(list[0]);
        QTableWidgetItem *v = new QTableWidgetItem(list[1]);
        QTableWidgetItem *x = new QTableWidgetItem(list[2]);
        QTableWidgetItem *y = new QTableWidgetItem(list[3]);
        QTableWidgetItem *r = new QTableWidgetItem(list[4]);
        QTableWidgetItem *g = new QTableWidgetItem(list[5]);
        QTableWidgetItem *b = new QTableWidgetItem(list[6]);
        //Mostrar en la TableWidget
        ui->tableWidget->setItem(i,0,id);
        ui->tableWidget->setItem(i,1,v);
        ui->tableWidget->setItem(i,2,x);
        ui->tableWidget->setItem(i,3,y);
        ui->tableWidget->setItem(i,4,r);
        ui->tableWidget->setItem(i,5,g);
        ui->tableWidget->setItem(i,6,b);
    }
}


void MainWindow::on_BotonBuscardelatabla_clicked()
{
    int cantidadN;
    cantidadN = LN.cantidadNeuronas();
    ui->tableWidget->clearContents();
    QString idLineEdit = ui->idBusqueda->text(); //Valor añadido por el usuario
    ui->tableWidget->setColumnCount(7);
    QStringList headers = {"ID", "VOLTAJE", "POSICIÓN X", "POSICIÓN Y", "RED", "GREEN", "BLUE"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(cantidadN);
    int row;
    row = 0;
    for(int i=0;i<cantidadN;i++) //Aqui crearemos el QTableWidget
    {
        QStringList list = LN.devolverNeurona(i).split(".");
        QTableWidgetItem *id = new QTableWidgetItem(list[0]);
        QTableWidgetItem *v = new QTableWidgetItem(list[1]);
        QTableWidgetItem *x = new QTableWidgetItem(list[2]);
        QTableWidgetItem *y = new QTableWidgetItem(list[3]);
        QTableWidgetItem *r = new QTableWidgetItem(list[4]);
        QTableWidgetItem *g = new QTableWidgetItem(list[5]);
        QTableWidgetItem *b = new QTableWidgetItem(list[6]);
        //Mostrar en la TableWidget
        if(list[0] == idLineEdit)
        {
            ui->tableWidget->setItem(row,0,id);
            ui->tableWidget->setItem(row,1,v);
            ui->tableWidget->setItem(row,2,x);
            ui->tableWidget->setItem(row,3,y);
            ui->tableWidget->setItem(row,4,r);
            ui->tableWidget->setItem(row,5,g);
            ui->tableWidget->setItem(row,6,b);
            row++;
        }
    }
    ui->idBusqueda->clear();
}

void MainWindow::on_dibujar_clicked()
{
    /*QPen pen; //Creamos el objeto para pintar lineas
    pen.setWidth(2); //Seleccionamos el tamaño
    QColor color(20,200,50); //Creamos un color
    pen.setColor(color); //Le asignamos el color al objeto pen
    escena.addEllipse(100,100, 50, 50,pen);
    ui->graphicsView->setScene(&escena);
    */

    QPen pen;
    pen.setWidth(2);
    int cantidadN = LN.cantidadNeuronas();
    for(int i=0;i<cantidadN;i++)
    {
        QStringList list = LN.devolverNeurona(i).split(".");
        QColor color(list[4].toInt() ,list[5].toInt() ,list[6].toInt()); //Creamos un color con los datos de la neurona
        pen.setColor(color);
        escena.addEllipse(list[2].toInt(), list[3].toInt(), list[1].toFloat(), list[1].toFloat(), pen);
        ui->graphicsView->setScene(&escena);
    }
}


void MainWindow::on_limpiar_clicked()
{
    escena.clear();
}

