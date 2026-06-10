// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[10],i,mini,maxi;
//     cout<<"enter element in array"<<endl;
//     for(i=0 ; i<10 ; i++)
//     {
//         cin>>a[i];
//     }
//     maxi =a[0],mini =a[0];
//     for(i=1 ; i<10 ; i++)
//     {
//         // if(max<a[i])
//         // {
//         //     max = a[i];
//         // }
//         // if(min>a[i])
//         // {
//         //     min = a[i];
//         // }

// // FUNTION TO FIND THE MAXIMUM AND MINIMUM

//         maxi = max(maxi,a[i]);
//         mini = min(mini,a[i]);
//     }
//     cout<<"maximum ="<<maxi<<endl;
//     cout<<"minimum = "<< mini;
// }

// USING FUNCTION 

// #include<iostream>
// using namespace std;

// int update(int a[],int n)
// {
//     cout<<"inside update";

//     a[0] =70;
//     a[4] = 90;
//     for(int i=0 ; i<5 ; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"going back to main"<<endl;


// }
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     // cout<<"enter element in array";
   
//     update(a,5);

//     for (int i=0 ; i<5 ; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int size,sum=0;
    cout<<"enter size of array";
    cin>>size;
    cout<<endl;
    cout<<"enter n=element in array"<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cin>>a[i];
        sum = sum+a[i];
    }
    cout<<sum;
    
}