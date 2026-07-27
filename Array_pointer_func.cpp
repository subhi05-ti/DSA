#include<iostream>
using namespace std;

//int getsum(int a[],int n)  // internally it *a

int getsum(int *a ,int n)
{
    cout<<"size of array "<<sizeof(a)<<endl;

    int sum = 0;
    for(int i =0 ; i<n ; i++)
    {
        sum +=a[i];
    }
    return sum;
}
int main()
{
    int a[5] = {9,6,3,80,2};

    //cout<<"sum = "<<getsum(a,5)<<endl;

    cout<<getsum(a+3,2);      // valid statement
}