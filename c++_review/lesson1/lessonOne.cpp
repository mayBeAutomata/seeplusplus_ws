/* '#' indicates preprocessor directives in c++, 'include' means add directives of given library 'iostream'. 
 '<>' look for this file in directory where all standard libraries are stored.
 '""' look in current directory first, then look in directory where all std libraries are stored. 
*/
#include <iostream> //"iostream"

int main(){
    // 'std' is used to indicate command cout is from std library.
    std::cout << "Hello Sombuntu, lets become Robot-ish!!\n";
    return 0;
}