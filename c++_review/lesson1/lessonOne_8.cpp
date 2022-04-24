/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include "lessonOne_8.hpp"

int main()
{

    string name1, name2, address1, address2, numb1, numb2, iage1, iage2;
    int age1, age2;

    cout<<"User 1, tell me your name.";
    getline(cin, name1);
    cout<<"User 1, tell me your address.";
    getline(cin, address1);
    cout<<"User 1, tell me your phone number.";
    getline(cin, numb1);
    cout<<"User 1, tell me your age.";
    getline(cin, iage1);
    stringstream(iage1) >> age1;
    cout<<"User 2, tell me your name.";
    getline(cin, name2);
    cout<<"User 2, tell me your address.";
    getline(cin, address2);
    cout<<"User 2, tell me your phone number.";
    getline(cin, numb2);
    cout<<"User 2, tell me your age.";
    getline(cin, iage2);
    stringstream(iage2) >> age2;



    cout<<"\n\nHello "<<name1<<endl;
    cout<<"\t\t"<<address1<<endl;
    cout<<"\t\t"<<numb1<<endl;
    cout<<"\t\t"<<age1<<" years"<<endl;
    cout<<"\nHello "<<name2<<endl;
    cout<<"\t\t"<<address2<<endl;
    cout<<"\t\t"<<numb2<<endl;
    cout<<"\t\t"<<age2<<" years"<<endl;
    return 0;

}