// sorting 0s,1s and 2s using cout approach

#include<iostream>
using namespace std;
int main()
{
    int a[8],i;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<8 ; i++)
    {
        cin>>a[i];
    }
    int c_zero = 0,c_one = 0 , c_two = 0;
    for(i=0 ; i<8 ; i++)
    {
        if(a[i] == 0)
        {
            c_zero++;
        }
        if(a[i]==1)
        {
            c_one++;
        }
        if(a[i]==2)
        {
            c_two++;
        }
    }
    for(i=0 ; i<c_zero ; i++)
    {
        a[i] = 0;
    }
    for(i= c_zero ; i< (c_zero + c_one) ; i++)
    {
        a[i] = 1;
    }
    for(i= (c_zero + c_one); i<8 ; i++)
    {
        a[i] = 2;
    }
    for(i=0 ; i<8 ; i++)
    {
        cout<<a[i];
    }
}