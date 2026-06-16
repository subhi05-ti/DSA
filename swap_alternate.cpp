#include<iostream>
using namespace std;
int main()
{
    int a[10],i;
    cout<<"enter number in array"<<endl;
    for(i=0 ; i<9 ; i++)
    {
        cin>>a[i];
    }
    int temp;
    for(i=0 ; i<9 ; i=i+2)
    {
        if(i+1 < 9)
        {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        }
    }
    for(i=0 ; i<9 ; i++)
    {
        cout<<a[i]<<endl;
    }
}