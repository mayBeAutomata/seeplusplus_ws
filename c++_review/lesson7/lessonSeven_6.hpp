/*The header file for main.cpp*/

#include<iostream>
#include "lessonSeven_6_Dog.cpp"

using namespace std;


    
void printRoster(Dog roster[], int size);
void printRoster(Dog roster[], int size)
{
    cout<<"Printing Dog Names"<<endl;

    for (int i = 0; i<size; i++)
    {

        roster[i].printInfo();
        cout<<"\n";

        //cout <<"Dog's Name: "<< roster[i] << endl;

    }

    cout<<"\nEnd of list!";

}
