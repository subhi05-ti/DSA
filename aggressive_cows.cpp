// Aggressive cow problem 

// We need to assign the cows to the stall such that :
// minimum distance bw any two of them is large as possible.

#include<iostream>
using namespace std;

bool isPossibleSol(int a[],int n,int k,int mid)
{
    int cowCount = 1;
    int shadeDiff = 0;


    // for(int i=0 ; i<n ; i++)
    // {
    //     // if(shadeDiff - a[i] <= mid)
    //     if(a[i] - shadeDiff >=k)
    //     {
    //         shadeDiff = shadeDiff - a[i];
    //     }
    //     else 
    //     {
    //         cowCount++;
    //         if(cowCount > k || a[i] > mid)
    //         {
    //             return false;
    //         }
    //         shadeDiff = a[i];
    //     }
    // }
    // return true;


    for(int i= 0 ; i<n ; i++)
    {
        if(a[i] - shadeDiff >= mid)
        {
            cowCount++;
            if(cowCount == k)
            {
                return true;
            }
            shadeDiff = a[i];
        }
    }
    return false;
}

int main()
{
    int n,k,ans;
     cout<<"enter the the number that u want to store in array"<<endl;
     cin>>n;
     int a[n],i;
     cout<<"enter value in arry"<<endl;
     for(i=0 ; i<n ; i++)
     {
        cin>>a[i];
     }
    cout<<"enter the number of shades"<<endl;
    cin>>k;
    int s=0;
    int min,max;
    max = a[0];
    min = a[0];
    for(i=1 ; i<n ; i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
        if(min>a[i])
        {
            min = a[i];
        }
    }
    //  cout<<max<<endl;
    // cout<<min<<endl;
    int e = (max - min);
    //cout<<e<<endl;

    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(isPossibleSol(a,n,k,mid))
        {
            ans = mid;
            s = mid +1;
        }
        else
        {
            e = mid -1;
        }
    }
    cout<<ans;

}