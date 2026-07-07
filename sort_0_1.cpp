// sorting 0s and 1s in n time complexity

#include<iostream>
using namespace std;
int main()
{
    int a[8],s=0 , e=7;
    cout<<"enter element in array"<<endl;
    for(int i=0 ; i<8 ; i++)
    {
        cin>>a[i];
    }
    while(s<=e)
    {
        if(a[s]==0)
        {
            s++;
           // e--;
        }
        else if(a[s]!=0 && a[e]!=1)
        {
            int c = a[s];
            a[s] = a[e];
            a[e] = c;
            s++;
            e--;
        }
        else
        {
            e--;
        }
    }
    for(int i=0 ; i<8 ; i++)
    {
        cout<<a[i];
    }
}