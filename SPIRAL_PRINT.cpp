#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j;
    int total = 3*3;
    int count =0;
    int srow = 0;
    int scol = 0;
    int erow = 2;
    int ecol = 2;
    cout<<"enter number in matrix"<<endl;
     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
           cin>>a[i][j];
        }
    }

    // printing in matrix form
     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
           cout<<" "<<a[i][j];
        }
        cout<<endl;
    }

    while(count < total)
    {
        // printing first row
        for(i=scol ; i<=ecol && count <total ; i++)
        {
            cout<<" "<<a[srow][i];
            count++;
        }
        srow++;

        // printing ending column
        for(i=srow ; i<=erow && count<total ; i++)
        {
            cout<<" "<<a[i][ecol];
            count++;
        }
        ecol--;

        // printing ending row
        for(i=ecol ; i>=scol && count<total ; i--)
        {
            cout<<" "<<a[erow][i];
            count++;
        }
        erow--;

        //printing starting column
        for(i=erow ; i>=srow && count<total ; i--)
        {
            cout<<" "<<a[i][scol];
            count++;
        }
        scol++;
    }
}