#include<iostream>
using namespace std;

int sum(int *arr,int n)                   // or (int arr[])
{
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"array is "<<endl;
     for(int i=0 ; i<n ; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    int ans = sum(arr,n);
    cout<<ans;
}