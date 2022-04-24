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

    int inpNumb = 0;
    int maxNumb = 0;
    int minNumb = 0;
    float temp = 0;

    for (int i = 0; i < 15; i++)
    {
        cout<< "Input a random number form 0 to 100"<<endl;
        cin>>inpNumb;
        if ((inpNumb>maxNumb) && (inpNumb < 101) && (inpNumb > -1))
        {
            cout<<"Input is more than the max number."<<endl;
            maxNumb = inpNumb;
            temp += inpNumb;
        }
        else if ((inpNumb<minNumb) && (inpNumb < 101) && (inpNumb > -1))
        {
            cout<<"Input is less than the min number."<<endl;
            minNumb = inpNumb;
            temp += inpNumb;
        }
        else if((inpNumb < 101) && (inpNumb > -1))
        {
            cout<<"Input is added."<<endl;
            temp += inpNumb;
        }
        else
        {
            cout<<"Invalid input not added."<<endl;
            i--;
            continue;
        }

    }

    temp /= 15.0;
    cout<<"The average is: "<< temp<<endl;
    cout<<"The max is: "<< maxNumb<<" and the minimum is: "<<minNumb<<endl;

}