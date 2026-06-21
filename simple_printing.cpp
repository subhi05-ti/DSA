#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int i,j;
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

        // taking second array for the sum of two array

    int b[3][3];
    cout<<"enter value in matrix"<<endl;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cin>>b[i][j];
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<" "<<b[i][j];
        }
        cout<<endl;
    }

    int c[3][3];
     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<" "<<c[i][j];
        }
        cout<<endl;
    }

}