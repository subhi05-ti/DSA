#include<iostream>
using namespace std;

int update(int **p2)
{
   // p2 = p2 + 1;         // NO CHANGE

    *p2 = *p2 +1;          // YES

    //**p2 = **p2 + 1;     // YES
}
int main()
{
    int i = 6;
    int *p = &i;
    int **p2 = &p;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl<<endl;

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl<<endl;

    update(p2);

    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;



}