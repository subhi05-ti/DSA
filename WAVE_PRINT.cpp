// printing the matrix in wave form

#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j;
    cout<<"enter element"<<endl;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cin>>a[i][j];
        }
        
    }

    // printing the element

     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }

    for(j=0 ; j<3 ; j++)
    {
        if(j%2==0)                  // for even index
        {
            for(i=0 ; i<3 ; i++)
            {
                cout<<" "<< a[i][j];
            }
        }
        else
        {
            for(i=2 ; i>=0 ; i--)           // for odd index
            {
                cout<<" "<<a[i][j];
            }
        }
    }
    
}