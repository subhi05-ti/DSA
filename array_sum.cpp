// calculating the sum of array

#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int sum1 = 0;
    if(n<=0)
    {
        return 0;
    }
    else
    {
       //return sum(arr,n-1)+arr[n-1];
       
       return arr[0]+ sum(arr+1,n-1);
    }
}

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n ; i++)
    {
        cin>>arr[i];
    }
    int ans = sum(arr,n);
    cout<<ans;

}