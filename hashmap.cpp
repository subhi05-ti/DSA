#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }

    // precompilation of hash
    // int hash[13] = {0};
    // for(int i =0 ; i<n ; i++)
    // {
    //     hash[arr[i]]++;   
    // }
    map<int,int> mpp;
    for(int i = 0 ; i<n ;i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout<<"enter number of queries"<<endl;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        //cout<<hash[num]<<endl;
        cout<<mpp[num]<<endl;
    }
}