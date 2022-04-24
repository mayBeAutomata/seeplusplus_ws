#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);
    int findSmaller(int input_array[], int size);
    float findSmaller(float input_array[], int size);
    char findSmaller(char input_array[], int size);

};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{

    if(input1 < input2)
    {
        if (input1 < input3)
        {
            return input1;

        }
        else
        {
            if (input3 < input2)
            {
                return input3;
            }
        }
    }
    return input2;

}

float Compare::findSmaller(float input1, float input2, float input3)
{

    if(input1 < input2)
    {
        if (input1 < input3)
        {
            return input1;

        }
        else
        {
            if (input3 < input2)
            {
                return input3;
            }
        }
    }
    return input2;

}

char Compare::findSmaller(char input1, char input2, char input3)
{

    if(input1 < input2)
    {
        if (input1 < input3)
        {
            return input1;

        }
        else
        {
            if (input3 < input2)
            {
                return input3;
            }
        }
    }
    return input2;

}

int Compare::findSmaller(int input_array[], int size)
{

    int temp = input_array[0];
    //int idx = 0;
    for (int i = 0; i< size; i++)
    {
        if (input_array[i]<temp)
        {
            temp = input_array[i];
            //idx = i;
        }
    }

    //return input_array[idx];
    return temp;

}

float Compare::findSmaller(float input_array[], int size)
{

    float temp = input_array[0];
    //int idx = 0;
    for (int i = 0; i< size; i++)
    {
        if (input_array[i]<temp)
        {
            temp = input_array[i];
            //idx = i;
        }
    }

    //return input_array[idx];
    return temp;

}

char Compare::findSmaller(char input_array[], int size)
{

    char temp = input_array[0];
    //int idx = 0;
    for (int i = 0; i< size; i++)
    {
        if (input_array[i]<temp)
        {
            temp = input_array[i];
            //idx = i;
        }
    }

    //return input_array[idx];
    return temp;

}