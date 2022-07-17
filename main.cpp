#include "tictactoee.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TicTacToee w;
    w.show();
    return a.exec();
}
