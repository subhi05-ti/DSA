#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int subset = 1<<3;     // 2^n
    for(int i = 0; i<subset ; i++)
    {
        for(int j =0; j<=size-1 ; j++)
        {
            if(i &(1<<j)!=0)
            {
                cout<<arr[j]<<endl;
            }
        }
    }
}