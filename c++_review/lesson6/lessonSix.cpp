/*

    retVariableType  functionName(parameter1, parameter2, ...,parameterN)
    {
        statement(s);
    }

*/

#include <iostream>
void printMessage();    //note, this is placed BEFORE main()

using namespace std;

int main()
{
    printMessage();
    
    return 0;
}

//note, the definition is conventionally placed after main
void printMessage()
{
    cout<<"This is my first c++ function"<<endl;
}