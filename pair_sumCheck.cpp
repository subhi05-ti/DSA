#include<iostream>
using namespace std;
int main()
{
    int a[5],i,key;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key element"<<endl;
    cin>>key;
    for(i=0 ; i<5 ; i++)
    {
        for(int j=i+1 ; j<5 ; j++)
        {
            if(a[i]+a[j]==key)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
}