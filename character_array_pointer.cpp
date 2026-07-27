#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {9,8,7,6,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];
    cout<<c<<endl;
    cout<<*c<<endl;
}