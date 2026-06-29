#include<iostream>
using namespace std;
int main()
{
    int a[5],i,s=0,e=4;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(a[mid] <= a[0])
        {
            e = mid;
        }
        else
        {
            s = mid+1;
        }
    }
    cout<<s;
}