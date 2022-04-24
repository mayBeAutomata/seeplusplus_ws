/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;

int main()
{

    int numberList [11] = {};

    int inpNumb = 0;
    float temp = 0;

    for (int i = 0; i < 10; i++)
    {
        
        cout<< "Input a random number form 0 to 100"<<endl;
        cin>>numberList[i];
        
    }

    for (int i = 0; i < 10; i++)
    {
        
        cout<< "numbers are: "<<numberList[i];
        
    

    return 0;

}