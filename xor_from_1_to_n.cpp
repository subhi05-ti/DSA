// find the xor of all the numbers from 1 to n

#include<iostream>
using namespace std;

int xor_1_to_n(int n)
{
    if(n%4 ==1) return 1;
    else if(n%4 == 2) return n+1;
    else if(n%4 == 3) return 0;
    else return n; 
}

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    // Brute Force Solution
    int result = 0;
    for(int i = 1 ; i<=n ; i++)
    {
        result = result ^ i;
    }
    cout<<result;

    // Optimal Solution
    cout<<xor_1_to_n(n);

}