#include<iostream>
using namespace std;
int main()
{
    int i =5;
    int *p = &i;
    int **p2 = &p;

    cout<<"value of i "<<i<<endl;
    cout<<"address of i "<<&i<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<"value of p2 "<<*p2<<endl;

    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

}