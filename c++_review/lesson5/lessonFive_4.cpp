/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

using namespace std;

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    int vec [4] = {2, 2, 2, 2};
    int mat [4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int dp [4] = {};

    for (int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            dp[i] += vec[i] * mat[i][j];
        }
    }

    for (int k = 0; k<4; k++)
    {
        cout<<"dot product["<<k<<"] = "<<dp[k]<<endl;
    }

    
    return 0;
}