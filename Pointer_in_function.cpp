#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<p<<endl;
    cout<<*p<<endl;

}

int updata(int *p)
{
    // p =p+1;
    // cout<<"inside "<<p<<endl;

    *p = *p +1;
}
int main()
{
    int value = 8;
    int *p = &value;
    //print(&value);

    //OR

    //print(p);
   //  cout<<"before "<<p<<endl;

    updata(p);
     //cout<<"after "<<p<<endl;

    cout<<*p<<endl;

  

}