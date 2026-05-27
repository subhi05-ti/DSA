// find the distinct element from the array where all the other elements occurs twice

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,1,2,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = 0;
    for(int i = 0 ; i<= size-1 ; i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<"the single element in the array is "<<ans;
}