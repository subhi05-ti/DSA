#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    if((n & (n-1)) == 0)
    {
        cout<<"the number is a power of 2"<<endl;
    }
    else
    {
        cout<<"the number is not a power of 2"<<endl;
    }
}