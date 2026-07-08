// sorting 0s,1s and 2s using three counter approach

#include<iostream>
using namespace std;
int main()
{
    int a[8],i=0,j=0,e=7,c;
    cout<<"enter element in the array"<<endl;
    for( i=0 ; i<8 ; i++)
    {
        cin>>a[i];
    }
    i=0,j=0;
    while(j <= e)
    {
        if(a[j]==1)
        {
            j++;
            //cout<<"hello"<<endl;
        }
        else if(a[j]==0)
        {
            c = a[j];
            a[j] = a[i];
            a[i] =c;
            j++;
            i++;
            //cout<<"hii"<<endl;
        }
        else if(a[j]==2)
        {
            c = a[j];
            a[j] = a[e];
            a[e] = c;
            e--;
           // cout<<"hola"<<endl;
        }
    }
        for( i=0 ; i<8 ; i++)
        {
            cout<<a[i];
        }

}