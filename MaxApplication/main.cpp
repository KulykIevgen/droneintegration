#include <QCoreApplication>
#include <iostream>

#include "maxfinder.h"

int main(void)
{
    //QCoreApplication a(argc, argv);
    std::cout << MaxFinder::findMax(1,0) << std::endl;
    //return a.exec();
}
