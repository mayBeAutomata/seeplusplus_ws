/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
** infinite loops :
**      for( ; ;){  std::cout<<"This for loop will run forever\n"; }
**      while(1){   std::cout<<"This while loop will run forever\n" ;
}
*/

#include <iostream>
#include<sstream>

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;
    
    do
    {
        
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;
        std::cout<<guess<<"\n";
        if(guess > target)
            std::cout<<"Your guess is too high\n";
        else if((guess < target) && (guess != -1))
            std::cout<<"Your guess is too low\n";
        else if(guess == -1)
            std::cout<<"You didn't guess the target! Goodbye!!!\n";
        else
            std::cout<<"You guessed the target!\n";
        
        
    } while ((guess != target) && (guess != -1));
            
    return 0;
}
