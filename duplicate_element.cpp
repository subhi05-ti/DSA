//  FINDING DUPLICATE ELEMENT21

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5],i,j,f=0,temp;
//     cout<<"enter element in array"<<endl;
//     for(i=0 ; i<5 ; i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0 ; i<5 ; i++)
//     {
//         for(j=i+1 ; j<5 ; j++)
//         {
//             if(a[i]==a[j])
//             {
//                 temp = a[i];
//                f=1;
//             }
          
//         }
//     }
   
//     if(f==1)
//     {
//         cout<<"found element "<<temp;
//     }
// }

// number shuold be <=10 then only valid

#include<iostream>
using namespace std;
int main()
{
    int a[5],i,ans=0;
    cout<<"enter element in array";
    for(i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    for(i=0 ; i<5 ; i++)
    {
        ans = ans^a[i];
    }
    for(i=1 ; i<5 ; i++)
    {
        ans = ans^i;
    }
    cout<<ans;
}