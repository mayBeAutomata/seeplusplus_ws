/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int givenInt = 32;
    float givenFloat = 64.212;
    double givenDouble = 4.76545;
    std::string givenString = "Hey look at me! I know pointers!";
    char givenChar = '*';
    
    cout<<"Integer Value: "<<givenInt<< endl;
    cout<<"Float Value: "<< givenFloat<<endl;
    cout<<"Double Value: "<< givenDouble<<endl;
    cout<<"String Value: "<< givenString<<endl;
    cout<<"Char Value: "<< (char)givenChar<<endl;

    cout<<"Integer Address: "<<&givenInt<<endl;
    cout<<"Float Address: "<<&givenFloat<<endl;
    cout<<"Double Address: "<<&givenDouble<<endl;
    cout<<"String Address: "<<&givenString<<endl;
    cout<<"Char Address: "<<(void *)&givenChar<<endl;

    return 0;
}