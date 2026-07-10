#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n;
    cout<<"enter elements in array"<<endl;
    for(i=0 ; i<10 ; i++)
    {
        cin>>a[i];
    }
    cout<<"enter number"<<endl;
    cin>>n;
    int s=0,e=9;
    int ans;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(a[mid]==n)
        {
            ans = mid;
            e = mid-1;
        }
        else if(a[mid] > n)
        {
            e = mid -1;
        }
        else
        {
            s = mid +1;
        }
    }
    cout<<"first occurence = "<<ans<<endl;
    s=0,e=9;
    int ans1;
     while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(a[mid]==n)
        {
            ans1 = mid;
            s = mid+1;
        }
        else if(a[mid] > n)
        {
            e = mid -1;
        }
        else
        {
            s = mid +1;
        }
    }
    cout<<"last occurence = "<<ans1<<endl;
    int total_occurence = (ans1-ans) +1;
    cout<<"total number of occurence = "<<total_occurence;
}