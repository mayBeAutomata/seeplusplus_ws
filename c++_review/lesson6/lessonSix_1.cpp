/* GOAL: Practice writing functions
** Write a function called printProduct that prints the results of the multiplication 
** of two integers. 
*/
#include <iostream>
#include "lessonSix_1.hpp"

// int printProduct(int);
using namespace std;

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;
    
    // printProduct(m1, m2, product);
    printProduct(product);

    return 0;
}


