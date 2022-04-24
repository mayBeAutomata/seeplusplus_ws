/*Goal: create a function that searches an array for 
**a given value. 
*/

#include<iostream>
#include <iomanip>

int search(int *arr, int sized, int searchkeyd);

using namespace std;

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *arr, int sized, int searchkeyd)
{

    cout<<std::setw(5);
    for(int i=0; i<sized; i++)
    {

        // cout<<arr[i]<<" ";
        // cout<<"\n";

        if (arr[i] == searchkeyd)
        {
            return i;
        }
        else if (i == sized - 1)
        {
            return -1;
        }
        else
        {
            continue;
        }

    }

}
