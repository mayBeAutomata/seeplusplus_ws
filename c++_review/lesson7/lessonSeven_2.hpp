/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/



#include <iostream>

using namespace std;

class Cat
{
    
    string name;
    string breed;
    int age;
    
public:

    Cat(); //declaring the constructor
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
    ~Cat();
    
};

//defining the constructor
Cat::Cat()
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown"; //the initial value of the breed
    age = 99; //the initial value of the age
}

Cat::~Cat()
{
    cout<<"\nDeleting the cat";
}

void Cat::setName(string nameIn)
{
    
    name = nameIn;
    
}

void Cat::setBreed(string breedIn)
{
    
    breed = breedIn;
    
}

void Cat::setAge(int ageIn)
{
    
    age = ageIn;
    
}

string Cat::getName()
{
    
    return name;
    
}

string Cat::getBreed()
{
    
    return breed;
    
}

int Cat::getAge()
{
    
    return age;
    
}

void Cat::printInfo()
{
    
    cout<<"Name :"<< name <<" | Breed :"<< breed <<" | Age :" << age <<endl;
    
}