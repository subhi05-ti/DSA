// finding the row and column wise sum

#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,sum;
    cout<<"enter element in array"<<endl;
    
     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
           cin>>a[i][j];
        }
       // cout<<endl;
    }
     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
           cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
   
    for(i=0 ; i<3 ; i++)
    {
        int sum=0;
        for(j=0 ; j<3 ; j++)
        {
            sum = sum +a[j][i];     // a[i][j] for row sum
        }
        cout<<sum<<endl;

       
    }
   
}