// counting number of prime number present in the given range

#include<iostream>
using namespace std;

 bool isprime(int num)
{
    if(num<=1)
    {
        return false;
    }
    else
    {
        for(int i=2 ; i<num ; i++)
        {
            if(num%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int count = 0;
    for(int i=2 ; i<n ; i++)
    {
        if(isprime(i))
        {
            count++;
        }
    }
    cout<<count;
}