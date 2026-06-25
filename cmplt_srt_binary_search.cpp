// finding the complete square root of a number using binary search

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int s = 0, e = n/2, tempsol;
    while(s<=e)
    {
    long long int mid = s + (e-s)/2;
    long long srt = mid*mid;
    if(srt == n)
    {
        cout<<mid;
    }
    else if(srt<n)
    {
        tempsol = mid;
        s = mid+1;
    }
    else
    {
        e = mid-1;
    }
    }
    cout<<tempsol<<endl;

    // finding the precise square root

    double factor = 1;
    int precise = 3;
    double ans = tempsol;
    cout<<ans<<endl;
    for(int i=0 ;i<precise ; i++ )
    {
        factor = factor/10;
        for(double j=ans ; j*j<n ; j= j+factor)
        {
            ans = j;
        }
    
    cout<<ans;

 }
