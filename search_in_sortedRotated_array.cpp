// searching a number in a reverse sorted array

#include<iostream>
using namespace std;
int main()
{
    int a[5],i,s=0,e=4,n;
    cout<<"enter elements in array"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(a[mid] >= a[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
    }
    cout<<s<<endl;
    cout<<"enter number for searching"<<endl;
    cin>>n;
     int l = 0,h = s-1;
    e=4;
    if(n >= a[s] && n <=a[e])
    {
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(a[mid] == n)
            {
                cout<<"element found at index = "<<mid;
                break;
            }
            else if(a[mid]<n)
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
           
        }
       
    }
    
    else     //(a[l]<= n <= a[h])
   {
    //cout<<l<<" "<<h;
   
    while(l<=h)
    {
       
        int mid = (l+h)/2;
        if(a[mid]==n)
        {
            cout<<"element found at index = "<<mid;
            break;
        }
        else if(a[mid]<n)
        {
            h = mid+1;
        }
        else
        {
            l =mid-1;
        }
         
    }
   
   }
}