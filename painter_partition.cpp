
#include<iostream>
using namespace std;

bool isPossibleSol(int a[],int n,int k, int mid)
{
    int painterCount = 1;
    int paintSum = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(paintSum +a[i]<=mid)
        {
            paintSum= paintSum + a[i];
        }
        else 
        {
            painterCount++;
            if(painterCount > k || a[i] > mid)
            {
                return false;
            }
            paintSum = a[i];
        }
    }
    return true;
}

int main()
{
    int n,k,ans;
    cout<<"enter the the number that you want to store in array"<<endl;
    cin>>n;

    int a[n],i;
    cout<<"enter element in array"<<endl;
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    int s=0,sum=0;
    for(i=0 ; i<n ; i++)
    {
        sum= sum + a[i];
    }
    int e = sum;
    //cout<<e;
    cout<<"enter the number of painter you want to paint the board"<<endl;
    cin>>k;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(isPossibleSol(a,n,k,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid +1;
        }
    }
    cout<<ans;
}
