/*Goal: practice writing functions with parameters and return values.*/

#include "lessonSix_2.hpp"

// void printEquation(int m1, int m2, int sum, char operation);

using namespace std;

int main()
{

    int m1 = 4;
    int m2 = 5;
    int total = sum(m1,m2);
    char sign = '+';

    printEquation(m1, m2, total, sign);

    return 0;

}