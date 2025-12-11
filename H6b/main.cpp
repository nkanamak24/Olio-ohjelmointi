#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    ExampleClass ex;
    ex.startToWait();

    return 0; // Tässä ei tarvita app.exec(), koska kaikki tapahtuu synkronisesti
}
