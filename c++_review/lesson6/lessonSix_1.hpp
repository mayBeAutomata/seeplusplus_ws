/* The function declaration can be omitted in the header file.
 **As long as the function is defined before it is used, 
 **the declaration is optional.
**It is often considered good practice to list the declarations
**at the top of the header file. 
*/

 #include <iostream>

// void printProduct(int prod);

using namespace std;

int printProduct(int prod)
{
    //int prod = product;
    //std::cout<<"m1 * m2 = "<<prod<<"\n";
    cout<<"m1 * m2 = "<<prod<<endl;
    return 0;
}