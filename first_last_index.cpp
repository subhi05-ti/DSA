// finding first and last occurence of an element 
// using binary search

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
    cout<<"enter element to find the index"<<endl;
    cin>>n;
   int  s=0,e=9;
    int ans;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid] == n)
        {
            ans = mid;
            e = mid-1;
        }
        else if(a[mid]>n)
        {
            e = mid -1;
        }
        else
        {
            s = mid+1;
        }
    }
    cout<<"first index = "<<ans;
    s=0,e=9;
    //int ans;
     while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid] == n)
        {
            ans = mid;
            s = mid + 1;
           
        }
        else if(a[mid]>n)
        {
            e = mid -1;
        }
        else
        {
            s = mid+1;
        }
    }
    cout<<"last index = "<<ans;
   
}