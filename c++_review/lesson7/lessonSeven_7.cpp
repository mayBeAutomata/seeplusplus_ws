#include <iostream>
#include "lessonSeven_7_class.cpp"

using namespace std;

int main()
{
    string random_name,x,y;


    tictactoe x_player;
    tictactoe o_player;

    cout << "Enter player 1's name(x user): " << endl;
    cin >> random_name;
    x_player.setName(random_name);

    cout << "Enter player 2's name(o user): " << endl;
    cin >> random_name;
    o_player.setName(random_name);

    


    return 0;
}