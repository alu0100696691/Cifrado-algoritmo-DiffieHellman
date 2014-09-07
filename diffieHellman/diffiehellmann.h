#ifndef DIFFIEHELLMANN_H
#define DIFFIEHELLMANN_H

#include <QMainWindow>
#include <QDebug>
#include <QtCore/qmath.h>
#include <math.h>
#include <QMessageBox>

namespace Ui {
class DiffieHellmann;
}

class DiffieHellmann : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit DiffieHellmann(QWidget *parent = 0);
    ~DiffieHellmann();
    unsigned int expoRapido(QString nalpha,QString secreto);   //Algoritmo de Exponenciación Rápida
    unsigned int expoRapido2(QString alph,QString secreto);
    int isPrimo(int num);  //saber si un numero es primo o no

    
private slots:
    void on_exit_clicked();

    void on_ejecutar_clicked();

private:
    Ui::DiffieHellmann *ui;
    QString p,alpha,xa,xb; //xa y xb (numeros secretos)
    unsigned int ya,yb,ka,kb; //ya y yb: operaciones x^secreto(mod p)  ;   ka y kb: claves secretas
    int primo;  //si primo = 0 significa que no es primo
};

#endif // DIFFIEHELLMANN_H
