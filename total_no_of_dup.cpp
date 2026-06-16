
#include<iostream>
using namespace std;
int main()
{
    int a[6],i,j;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<6 ; i++)
    {
        cin>>a[i];
    }
    for(i=0 ; i<6 ; i++)
    {
        for(j=i+1 ; j<6 ; j++)
        {
            if(a[i] == a[j])
            {
                cout<<a[j]<<" ";
            }
        }
    }
}