#include "diffiehellmann.h"
#include "ui_diffiehellmann.h"

DiffieHellmann::DiffieHellmann(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DiffieHellmann)
{
    ui->setupUi(this);
}

DiffieHellmann::~DiffieHellmann()
{
    delete ui;
}

void DiffieHellmann::on_exit_clicked()
{
    close();
}

void DiffieHellmann::on_ejecutar_clicked()
{
    QMessageBox msgBox;  //ventanas de informacion
    //limpiamos buffer
    p.clear();
    alpha.clear();
    xa.clear();
    xb.clear();
    ka = 0;
    kb = 0;
    ya = 0;
    yb = 0;


    //recogemos datos del usuario
    p = ui->pw->text();
    alpha = ui->alphaw->text();
    xa = ui->xaw->text();
    xb = ui->xbw->text();

    //comprobaciones
    primo =isPrimo(p.toInt());   //comprobamos que p sea un numero primo
    if(primo == 0){
        msgBox.information(this,"RECUERDE","El numero p tiene que ser un numero primo.");
        msgBox.exec();
        p.clear();
        p = " ";
    }

    else if(alpha.toInt()>p.toInt()){  //comprobamos que alpha sea menor a p
        msgBox.information(this,"RECUERDE","El numero alpha no puede ser mayor a p.");
        msgBox.exec();
        alpha.clear();
        alpha = " ";
    }

    else if(!p.isEmpty() && !alpha.isEmpty() && !xa.isEmpty() && !xb.isEmpty()){  //comprobamos que no estan vacias las casillas de entrada datos

        //ejecutamos el Algoritmo de Exponenciación Rápida
        ya=expoRapido2(alpha,xa);
        yb=expoRapido2(alpha,xb);
        ka=expoRapido2(QString::number(yb),xa);
        kb=expoRapido2(QString::number(ya),xb);

        ui->yaw->setText(QString::number(ya));
        ui->ybw->setText(QString::number(yb));
        ui->kaw->setText(QString::number(ka));
        ui->kbw->setText(QString::number(kb));

    }
    else {
        msgBox.information(this,"RECUERDE","Ninguna casilla no puede estar vacia.");
        msgBox.exec();
    }
    if(ka!=kb){
        msgBox.information(this,"ATENCION","CLAVE SECRETA DISTINTAS!!!");
        msgBox.exec();
    }

}

unsigned int DiffieHellmann::expoRapido(QString alph,QString secreto)
{

    int yx = 1;
    QString binario;
    binario = QString::number(secreto.toInt(),2);  //calculamos numero secreto en binario

    int *tabla=new int[binario.length()];  //tabla para guardar operaciones exponenciacion rapida
    tabla[0]=alph.toInt();
    for(int i=1;i<binario.length();i++){  //generamos la tabla
        tabla[i] = int(pow(tabla[i-1],2))%p.toInt();
    }

    for(int i=(binario.length()-1),j=0;i>=0;i--,j++) {  //calculamos yx
        if(binario[i] == '1') {
            yx*=tabla[j];
        }

    }
    yx=yx%p.toInt();
    return yx;

}

unsigned int DiffieHellmann::expoRapido2(QString alph,QString secreto)  //modular
{

  int res = 1,alp,m;
  m=secreto.toInt();  //valor secreto
  alp = alph.toInt()%p.toInt();  //alpha

  for (int i = 1;m>0;i++){
    if ((m%2)!=0){  //si es impar
      res = (res*alp)%p.toInt();
      m=m-1;
    }
    alp = (alp*alp)%p.toInt();  //si es par

    qDebug() << i << alp << m << res;
    m = m/2;


  }

  return res;
}


int DiffieHellmann::isPrimo(int num){
    int resto=0,nc=0;
    for(int i=1;i<=num;i++){
        resto=num%i;
        if(resto==0){
            nc++;
        }
    }
    if(nc==2){
        return 1;  //es primo
    }
    else{
        return 0;  //no es primo
    }
    nc=0;
}































