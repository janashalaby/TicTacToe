#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TicTacToee; }
QT_END_NAMESPACE

class TicTacToee : public QMainWindow
{
    Q_OBJECT

public:
    TicTacToee(QWidget *parent = nullptr);
    ~TicTacToee();

private slots:
    void on_pushBupushbutton5ton5_clicked();

    void on_pushbutton1_clicked();

    void on_pushbutton2_clicked();

    void on_pushbutton3_clicked();

    void on_pushbutton4_clicked();

    void on_pushbutton6_clicked();

    void on_pushbuttonn7_clicked();

    void on_pushButton8_clicked();

    void on_pushbutton9_clicked();

private:
    Ui::TicTacToee *ui;
    int counter=0;
    int clickedButton[9]={0,0,0,0,0,0,0,0,0};
    int playerTurn(int buttonIndex);
    int wincombs[8][3]={{1,2,0}, {0,3,6} , {6,7,8} , {2,5,8} , {0,4,8} , {2,4,6} , {1,4,7} , {3,4,5}};
   void checkwinner();
};
#endif // TICTACTOE_H
