#include "tictactoee.h"
#include "ui_tictactoee.h"

TicTacToee::TicTacToee(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToee)
{
    ui->setupUi(this);
}

TicTacToee::~TicTacToee()
{
    delete ui;
}

int TicTacToee::playerTurn(int buttonIndex){

    counter ++;
    int modulus =counter%2;
    if (modulus ==1){
        ui->player_label->setText("Player 2 ");
    clickedButton[buttonIndex]=1;
    return 1;
    }
    else {
        ui->player_label->setText("Player 1 ");
        clickedButton[buttonIndex]=2;
        return 2;
    }
}


void TicTacToee::on_pushbutton1_clicked()
{
    if(clickedButton[0]==0){
        int player =playerTurn(0);
        if(player==1){
            ui->pushbutton1->setText("X");
        }else if(player==2){
             ui->pushbutton1->setText("O");
        }
    }
     checkwinner();
}

void TicTacToee::on_pushbutton2_clicked()
{
    if(clickedButton[1]==0){
        int player =playerTurn(1);
        if(player==1){
            ui->pushbutton2->setText("X");
        }else if(player==2){
             ui->pushbutton2->setText("O");
        }
    }
     checkwinner();
}

void TicTacToee::on_pushbutton3_clicked()
{
    if(clickedButton[2]==0){
        int player =playerTurn(2);
        if(player==1){
            ui->pushbutton3->setText("X");
        }else if(player==2){
             ui->pushbutton3->setText("O");
        }
    }
     checkwinner();
}

void TicTacToee::on_pushbutton4_clicked()
{
    if(clickedButton[3]==0){
        int player =playerTurn(3);
        if(player==1){
            ui->pushbutton4->setText("X");
        }else if(player==2){
             ui->pushbutton4->setText("O");
        }
    }
     checkwinner();
}

void TicTacToee::on_pushBupushbutton5ton5_clicked()
{
    if(clickedButton[4]==0){
        int player =playerTurn(4);
        if(player==1){
            ui->pushBupushbutton5ton5->setText("X");
        }else if(player==2){
             ui->pushBupushbutton5ton5->setText("O");
        }
    }
      checkwinner();
}

void TicTacToee::on_pushbutton6_clicked()
{
    if(clickedButton[5]==0){
        int player =playerTurn(5);
        if(player==1){
            ui->pushbutton6->setText("X");
        }else if(player==2){
             ui->pushbutton6->setText("O");
        }
    }
      checkwinner();
}

void TicTacToee::on_pushbuttonn7_clicked()
{
    if(clickedButton[6]==0){
        int player =playerTurn(6);
        if(player==1){
            ui->pushbuttonn7->setText("X");
        }else if(player==2){
             ui->pushbuttonn7->setText("O");
        }
    }
      checkwinner();
}

void TicTacToee::on_pushButton8_clicked()
{
    if(clickedButton[7]==0){
        int player =playerTurn(7);
        if(player==1){
            ui->pushButton8->setText("X");
        }else if(player==2){
             ui->pushButton8->setText("O");
        }
    }
      checkwinner();
}

void TicTacToee::on_pushbutton9_clicked()
{
    if(clickedButton[8]==0){
        int player =playerTurn(8);
        if(player==1){
            ui->pushbutton9->setText("X");
        }else if(player==2){
             ui->pushbutton9->setText("O");
        }
    }
      checkwinner();
}

void TicTacToee:: checkwinner(){


for (int i=0;i<8;i++){

    if ((clickedButton[wincombs[i][0]]==1)&&(clickedButton[wincombs[i][1]]==1)&&(clickedButton[wincombs[i][2]]==1))
  {
             ui->winnerlabel->setText(" The Winner is player 1");
    }
        if ((clickedButton [wincombs[i][0]]==2)&&(clickedButton [wincombs[i][1]]==2)&&(clickedButton [wincombs[i][2]]==2))
      {
                   ui->winnerlabel->setText(" The Winner is player 2");
        }
}
}
