#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int f=0;
    for(int i=2 ; i<=n/2 ; i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"not prime"<<endl;
    }
    else
    {
        cout<<" prime"<<endl;
    }
}