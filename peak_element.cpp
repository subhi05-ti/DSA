// Finding peak element in mountain array using binary search

#include<iostream>
using namespace std;
int main()
{
    int a[7],i;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<7 ; i++)
    {
        cin>>a[i];
    }
    int s=0 ,e=6;
    int ans;


    // while(s <= e)
    // {
    //     int mid = s + (e-s)/2;
    //     //int mid = (s+e)/2;
    //     if((a[mid] > a[mid-1]) && (a[mid] > a[mid+1]))
    //     {
    //         ans = a[mid];
    //         break;
    //     }
    //     else if(a[mid] > a[mid+1])
    //     {
    //         e = mid-1;
            
    //     }
    //     else if(a[mid] < a[mid+1])
    //     {
    //         s = mid + 1;
    //     }
    //     else if(a[mid] < a[mid-1])
    //     {

    //         e = mid -1;
    //     }
       
    // }
    // cout<<ans;
    int index;
    while(s<e)
    {
        int mid = s+(e-s)/2;
        if (a[mid] < a[mid+1])
        {
            s = mid +1;
            ans = a[s];
            index = s;

        }
        else
        {
            e = mid;
        }
        
    }
    cout<<"peak element = "<<ans<<endl;
    cout<<"index = "<<s;
    int sum1=0,sum2=0;
    for(i=0 ; i<s ; i++)
    {
        sum1 = sum1+a[i];
    }
    for(i=s+1 ; i<7 ; i++)
    {
        sum2 = sum2+a[i];
    }
    if(sum1 == sum2)
    {
        cout<<"pivot element"<<endl;
    }
    else
    {
        cout<<"not";
    }
    
}