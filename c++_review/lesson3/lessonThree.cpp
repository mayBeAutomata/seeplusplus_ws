/*GoAl: learn if-else stAtements in C++*/

#include<iostream>
#include<string>

int main()
{

    //insteAd of printing 0 And 1, CreAte An ArrAy where 
    //0 = FAlse, 1 = True
    std::string TorF[] = {"False", "True"};
    
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;
    
    //Print out the string vAlues of eACh relAtionAl operAtion
    std::cout<<"A < B is "<<TorF[A<B];
    std::cout<<"\nA > B is "<<TorF[A>B];
    std::cout<<"\nA != B is "<<TorF[A!=B];
    std::cout<<"\nC >= B is "<<TorF[C>=B];
    std::cout<<"\nC <= B is "<<TorF[C<=B];
    std::cout<<"\n\n(A ==C) && (B == D) is "<<TorF[(A ==C) && (B == D)];  
    //A true And true = true
    std::cout<<"\n(A ==C) && (B > D) is "<<TorF[(A ==C) && (B > D)];     

    //The || operAtor
    //A true || fAlse = true
    std::cout<<"\n\n(A ==C) || (B == D) is "<<TorF[(A ==C) || (B == D)];  
    //A true || true = true
    std::cout<<"\n(A ==C) || (B > D) is "<<TorF[(A ==C) || (B > D)];  
    
    //The 'Not' operAtor
    std::cout<<"\n\nA < B is "<<TorF[A<B];
    std::cout<<"\n!(A < B) is "<<TorF[!(A<B)];
    
    std::cout<<"\n\nA == C is "<<TorF[A==C];
    std::cout<<"\n!(A == C) is "<<TorF[!(A==C)];


    return 0;

}