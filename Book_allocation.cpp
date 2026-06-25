// Book allocation problem 
// we have to allocate books to m number of student such that the maximum 
// number of pages assigned to a student is minimum.

#include<iostream>
using namespace std;

bool isPossibleSol(int a[],int n,int m,int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(pageSum +a[i]<=mid)
        {
            pageSum = pageSum + a[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || a[i]> mid)
            {
                return false;
            }
            pageSum = a[i];
        }
    }
    return true;
}
int main()
{
     int n,m,ans;
     cout<<"enter the the number that u want to store in array"<<endl;
     cin>>n;
     int a[n],i;
     cout<<"enter value in arry"<<endl;
     for(i=0 ; i<n ; i++)
     {
        cin>>a[i];
     }

    int s=0,sum=0;
    for(i=0 ; i<n ; i++)
    {
        sum = sum+a[i];
    }
    int e = sum;

    cout<<"enter the number of student among which books has to be allocated"<<endl;
    cin>>m;

    while(s<=e)
    {
        int mid = s +(e-s)/2;
        if(isPossibleSol(a,n,m,mid))
        {
          ans = mid;
          e = mid-1;  
        }
        else
        {
            s = mid+1;
        }
    }
    cout<<ans;
}