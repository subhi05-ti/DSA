#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,k,key;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<10 ; i++)
    {
        cin>>a[i];
    }
    cout<<"enter key element"<<endl;
    cin>>key;
    for(i=0 ; i<10 ; i++)
    {
        for(j=i+1 ; j<10 ;j++)
        {
            for(k=j+1 ; k<10 ; k++)
            {
                if(a[i]+a[j]+a[k]==key)
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
            }
        }
    }
}