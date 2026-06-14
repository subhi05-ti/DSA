// ROTATING THE ARRAY FROM THE GIVEN POSITION

#include<iostream>
using namespace std;
int main()
{
    int a[4],i,k;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<4 ; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"enter the value of k from which u want to rotate the array"<<endl;
    cin>>k;
    int temp[4];
    for(i=0 ; i<4 ; i++)
    {
        temp[i] = a[i];
    }
    for(i=0 ; i<4 ; i++)
    {
        temp[(i+k)%4] = a[i];
    }
    for(i=0 ; i<4 ; i++)
    {
        a[i] = temp[i];
    }
    for(i=0 ; i<4 ; i++)
    {
        cout<<a[i]<<" ";
    }

}