#include "diffiehellmann.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DiffieHellmann w;
    w.show();
    
    return a.exec();
}
