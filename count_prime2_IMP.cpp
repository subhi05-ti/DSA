//  BY USING SIEVE OF ERATOSTHENES METHOD 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    vector<int> prime(n+1, true);
    prime[0] = prime[1] = false;
    int count =0;
    for(int i=2 ; i<n ; i++)
    {
        if(prime[i])
        {
            count++;

            for(int j= 2*i ; j<n ; j = j+i)
            {
                prime[j] = 0;
            }
        }
    }
    cout<<count;
}