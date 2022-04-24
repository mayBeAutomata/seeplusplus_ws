#include <iostream>

using namespace std;

class tictactoe
{
    /* data */
    string name;
    string gameSpace[4][4];



public:
    tictactoe(/* args */);
    void setName(string nameIn);
    int cellAvailable(int size, string tile);
    void printGrid();

    // check for grid ful
    // return available grids
    // play tile
    // 

    ~tictactoe();
};

tictactoe::tictactoe(/* args */)
{

    for (int i; i < 4; i++)
    {
        for (int j; j < 4; j++)
        {
            gameSpace[i][j] = "-";
        }
    }

}

void tictactoe::setName(string nameIn)
{

    name = nameIn;

}

int tictactoe::cellAvailable(int size, string tile)
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

void tictactoe::printGrid()
{

    for (int i; i < 4; i++)
    {
        for (int j; j < 4; j++)
        {

            cout << gameSpace[i][j] << "\t";
        
        }

        cout<<endl;

    }

}

tictactoe::~tictactoe()
{
}

