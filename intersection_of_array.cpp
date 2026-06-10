#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],i,j;
    cout<<"enter first array"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    cout<<"enter second array"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        cin>>b[i];
    }
    for( i = 0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                b[j] = 0;
                break;
            }
        }
    }
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[6],b[4],i=0,j=0;
//     cout<<"enter element in first array"<<endl;
//     for(i=0 ; i<6 ; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"enter secomd array"<<endl;
//     for(j=0 ; j<4 ; j++)
//     {
//         cin>>b[j];
//     }
//     cout<<"hello";
//     while(i<6 && j<4)
//     {
//         if(a[i]< b[j])
//         {
//             i++;
//             cout<<"one";
//         }
//         else if(a[i] == b[j])
//         {
//             cout<<b[j]<<" ";
//             cout<<"vfvrbgb";
//             i++;
//             j++;
//         }
//         else 
//         {
//             j++;
//             cout<<"three";
//         }
//     }
//     cout<<"hiii";
// }










