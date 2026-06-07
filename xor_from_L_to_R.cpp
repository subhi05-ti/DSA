#include<iostream>
using namespace std;

int xor_1_to_n(int n)
{
    if(n%4 == 1) return 1;
    else if(n%4 == 2) return n+1;
    else if(n%4 == 3) return 0;
    else return n;
}

int main()
{
    int l,r;
    cout<<"enter the starting and ending number"<<endl;
    cin>>l>>r;

    cout<<"the xor of all the numbers from "<<l<<" to "<<r<<" is "<<(xor_1_to_n(l-1) ^ xor_1_to_n(r));
}