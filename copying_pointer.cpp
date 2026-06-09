#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    int *p = &n;
    cout<<"before = "<<n<<endl;
    (*p)++;
    cout<<"after = "<<n<<endl;

    // creating anoter pointer and copying one pointer to another

    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    *p = *p+1;
    cout<<*p<<endl;

    p = p+1;   // no eror p address will increased by 4 incase of int
    cout<<p<<endl;
}