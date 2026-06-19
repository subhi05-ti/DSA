// Searching element in matrixx

#include<iostream>
using namespace std;

bool ispresent(int a[][3],int n, int i,int j)
{
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            if(a[i][j]==n)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
     int a[3][3];
    int i,j,n;
    cout<<"enter value in matrix"<<endl;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
     cout<<"enter number for searching in the matrix"<<endl;
     cin>>n;

   if(ispresent(a,n,3,3)){
        cout<<" element present";
    }
    else
    {
        cout<<"not present";
    }

}