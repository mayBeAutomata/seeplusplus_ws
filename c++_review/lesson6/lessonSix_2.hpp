#include <iostream>

//void printEquation(int m1, int m2, int sum, char operation);
//int sum(int m1, int m2);

using namespace std;

void printEquation(int m1, int m2, int sum, char operation)
{

    // print the equation 'm1 operation  m2 = result'  
    cout<<m1<<' '<<operation<<' '<<m2<<" = "<<sum<<endl;

}

int sum(int m1, int m2)
{

    // add two integers and return the sum
    return m1+m2;

}