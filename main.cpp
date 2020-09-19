#include <QCoreApplication>
#include "compressor.h"
#include "zip_compressor.h"
#include "peazip_compressor.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Compressor *p = new Compressor(new ZIP_Compressor());
    p->compress();
    cout <<endl;
    cout <<"-----------"<<endl;
    Compressor *p2 = new Compressor(new PeaZip_Compressor());
    p2->compress();

    return a.exec();
}
