// finding the square root of a number using binary search

#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout<<"enter number "<<endl;
    cin>>n;
    int s = 0, e =n/2;
    long long int ans;
    while(s<=e)
    {
        long long int mid = (s+e)/2;
        long long int sqr = mid*mid;
        if(sqr == n)
        {
            cout<<mid<<endl;
            break;
        }
        else if(sqr<n)
        {
            ans = mid;
            s = mid+1;
           
           
        }
        else
        {
            e = mid-1;
        }

    }
    cout<<ans;
}