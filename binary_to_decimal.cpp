#include<iostream>
using namespace std;

int decimal_to_binary(string n)
{
    int size = n.length()-1;
    int ans = 0;
    int pow = 1;
    for (int i = size ; i>=0 ; i--)
    {
        if(n[i] == '1')
        {
            ans = ans + pow;
        }
        pow = pow *2;
    }
    return ans;
}

int main()
{
    string n;
    cout<<"enter a binary number"<<endl;
    cin>>n;
    int ans = decimal_to_binary(n);
    cout<<ans;
}