#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2,7,9,11,19};
    cout<<"address of 0th index = "<<arr<<endl;

    // by using & sign
    cout<<" Address of 0th index = "<<&arr[0]<<endl;
    cout<<"value at 0th index = "<<arr[0]<<endl;

    // some more experiment

    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr)-1<<endl;

    cout<<*(arr)+4.8<<endl;
    cout<<*(arr)*3<<endl;
    cout<<*(arr+2)<<endl;

    // a[i] = *(ar+i);
    // OR i[ar] = *(i+ar)   both are same

    int i=4;
    cout<<i[arr]<<endl;

    cout<<"printing size -->"<<endl;
    int temp[10] = {0};

    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];

    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    // 2
    int a[5] = {9,7,6,4,2};
    cout<<&a[0]<<endl;

    int *p = &a[0];
    cout<<&p<<endl;

   //  ERROR  a = a+1;
   // cout<<a;

   // instead
   
   cout<<p<<endl;
   p = p+1;
   cout<<p<<endl;


}