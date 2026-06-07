#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(i=1 ; i<5 ; i++)
    {
        if(a[i-1] > a[i])
        {
            count++;
        }
    }
    if(a[4]>a[0])
    {
        count++;
    }
    if(count<=1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

}