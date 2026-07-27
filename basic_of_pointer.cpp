#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    cout<<n<<endl;
    cout<<"address = "<<&n<<endl;       // printing the address
    int *p = &n;                        // copying the address of n into a pointer
    cout<<p<<endl;
    cout<<*p<<endl;                           // printing the value
    (*p)++;
    cout<<*p<<endl;

    double d = 5.7;
    double *p1 = &d;
    cout<<"value of d "<<*p1<<endl;
    cout<<"address of d = "<<p1<<endl;
    
    cout<<"size of = "<<sizeof(d)<<endl;
    cout<<"size of pointer = "<<sizeof(*p1)<<endl;
    cout<<"size of = "<<sizeof(n)<<endl;
}