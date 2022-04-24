/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector
    int length = 4;
    int matrix [4][4] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int vector [4] = {2,4,6,8};
    int dotproduct [4] = {};

    for(int i=0; i<length;i++)
        for(int j=0;j<length;j++)
            std::cout<<"array2Dim["<<i<<"]["<<j<<"] = " << matrix[i][j]<<"\n";







    
    //std::cout <<"\t"<< matrix[2][1];
    return 0;
}