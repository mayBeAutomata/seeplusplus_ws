/*header file for main.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

Gameboard::Gameboard()
{
    for (int i = 0; i<4;i++){
        for (int j = 0; j<4; j++)
        {
            gameSpace[i][j] = '-';
        }
    }
    
}

//TODO: complete the class definition
// i is row, j(second []) is column
void Gameboard::setGameSpace(int row,int column, char value) //x,y,or '-' in each game square
{
    
    gameSpace[row][column] = value;
    
}

char Gameboard::getGameSpace(int row,int column)
{
    
    return gameSpace[row][column];
    
}

int Gameboard::fourInRow()
{
    
    for (int i = 0; i<4;i++){
        for (int j = 0; j<3; j++)
        {
            if ( gameSpace[i][j] == gameSpace[i][j+1])
            {
                return 1;
            }
        }
    }
    
    return 0;
}

void Gameboard::printInfo()
{
    
    for (int i = 0; i<4;i++){
        for (int j = 0; j<4; j++)
        {
            
            cout << gameSpace[i][j] <<"\t";

        }
        cout<<endl;
    }
    
}