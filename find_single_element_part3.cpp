// find the distinct element from the array where all the other elements occurs twice 
// and exactly two numbers occurs once


#include<iostream>
using namespace std;

int main()
{
    int arr[] = {9,1,2,1,2,3,11,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    long int xorr = 0;
    for(int i = 0 ; i<=size-1 ; i++)
    {
        xorr = xorr ^ arr[i];
    }

    int rightmost_set_bit = xorr &(xorr-1) ^ xorr;
    int b1 = 0, b2 = 0;

    for( int i = 0 ; i<=size-1 ; i++)
    {
        if(arr[i] & rightmost_set_bit )
        {
            b2 = b2 ^ arr[i];
        }
        else
        {
            b1 = b1 ^ arr[i];
        }
    }
    cout<<"the two single element in the array are "<<b1<<" and "<<b2;
   
}