/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

#include "lessonSeven_6.hpp"


int main()
{
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    const int SIZE = 4;
    Dog roster[SIZE];

    roster[0].setName("Rambo");
    roster[1].setName("ScoobyDo");
    roster[2].setName("Hustler");
    roster[3].setName("ScrabbyDo");


    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}
