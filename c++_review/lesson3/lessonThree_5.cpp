/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

using namespace std;

int main()
{
    float inputnumber, sum = 0;
    
    for (int i=0; i<5;i++)
    {
        cout<< "\ninput random number :";
        cin>> inputnumber;
        cout<< " "<<inputnumber;
        sum += inputnumber;
    }
    cout<< "The sum is "<<sum<<" and average is: "<<sum/5.0;
    
    return 0;
}