/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers, 
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution. 
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    float in1, in2;
    char sign;
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    cout << "first number entered is: "<<in1<<endl;
    cout << "enter first numbe." <<endl;
    std::cin>>in2;
    cout << "second number entered is: "<<in1<<endl;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    cin>>sign;
    
    switch(sign)
    {
        
        case('+'):
        {
            cout<< "The sum of the inputs is :"<< in1+in2<<endl;
            break;
        }
        case('-'):
        {
            cout<< "The difference btw the inputs is :"<< in1-in2<<endl;
            break;
        }
        case('*'):
        {
            cout<< "The product of the inputs is :"<< in1*in2<<endl;
            break;
        }
        case('/'):
        {
            cout<< "The inputs divided is :"<< in1/in2<<endl;
            break;
        }
        default:
            std::cout<<"Invalid selection.\n";
    }
    
    return 0;
    
}