#include<iostream>
using namespace std;
int main()
{
    int a[10],mid,s=0,e=9;
    cout<<"enter element in array"<<endl;
    for(int i=0; i<10 ; i++)
    {
        cin>>a[i];
    }
    int n;
    cout<<"enter number for searching"<<endl;
    cin>>n;
    while(s<=e)
    {
        // IN SOME CASES THE VALUE OF MID EXCEED THE INT LIMIT SO 
       // mid = (s+e)/2;

       // INSTEAD OF THIS WE GONNA DO

       mid = s +(e-s)/2;
        if(n == a[mid])
        {
            cout<<"element found at index = "<<mid;
            break;
        }
        else if(n>a[mid])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
}