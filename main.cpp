#include <QtCore/QCoreApplication>
#include "GamePadFunction.h"



int main(int argc, char **argv)
{
    QCoreApplication application(argc, argv);

    GamePadFunction monitor;

    return application.exec();
}