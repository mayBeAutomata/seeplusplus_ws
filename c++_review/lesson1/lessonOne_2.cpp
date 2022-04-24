#include <iostream>

using namespace std;



int main(){



    /* a constant is variable whose value doesn't change during runtime.
    use 'const' */ 
    const int varName2 = 100;
    int varName = 23;

    // enum type_name { value1, value2, value3, .  . } object_names;
    enum shenkes { nhyii, merryben, elder, bk, ini, biggyg, lolz};

    shenkes BEST;
    BEST = nhyii;

    if (BEST == nhyii){

        cout<<"Was the one.\n";

    }

    cout << "Here's my birthday, "<<varName<<" and i'll live till i'm "<<varName2<<"years\n";
    
    // you can use 'endl' instead of '\n' for nextline.
    cout << "The holding variable has a type: "<<sizeof(varName)<<endl;
    
    return 0;

}