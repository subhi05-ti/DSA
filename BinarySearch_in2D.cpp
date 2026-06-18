#include<iostream>
using namespace std;
int main()
{
    int a[3][4],i,j,n;
    cout<<"enter element in matrix"<<endl;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<4 ; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<4 ; j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"enter element for searching"<<endl;
    cin>>n;
    int s =0, e =11;
    while(s<=e)
    {
        int mid = (s+e)/2;
        int x = mid/4;
        int y = mid%4;
        int element = a[x][y];
        if(element==n)
        {
            cout<<"element found "<<x<<y<<endl;
            break;
        }
        else if(element < n)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
}