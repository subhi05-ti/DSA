#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int a[3][3],i,j;
     cout<<"enter element in array"<<endl;
    
     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
           cin>>a[i][j];
        }
       // cout<<endl;
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

    int min = INT_MAX;
    int  k=-1;
    for(i=0 ; i<3 ; i++) 
    {
        int sum = 0;
        for(j=0 ; j<3 ; j++)
        {
            sum = sum +a[j][i];
        }
        cout<<sum<<endl;     // row wise sum
        if(sum < min)        // finding the min value number
        {
            min = sum;
            k++;
        }
    }  
    cout<<"maximum value "<<min<<" and row number is "<<k; 

}
