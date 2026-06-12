// APPROACH 1 - USING POWER FUNCTION 

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n,ans;
//     cout<<"enter number"<<endl;
//     cin>>n;
//     for(int i=0 ; i<31 ; i++)
//     {
//         int ans = pow(2,i);
//         if(ans == n)
//         {
//             cout<<"yes";
//             break;
//         }
//         else
//          {
//              cout<<"no";
//          }
//     }
// }

// APPROACH 2 - USING WHILE LOOP

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,r;
//     cout<<"enter a number"<<endl;
//     cin>>n;
//     while(n>0 && n%2==0)
//     {
//         n = n/2;
//         // r = n % 2;
//         // n = n/2;
//         // cout<<r;
//     }
//     if(n==1)
//     {
//         cout<<"true";
//     }
//     else
//     cout<<"false";
   
// }

// APPROACH 3 - BY CHECHING THE NUMBER OF SET BIT

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,ans=0,i=1;
    cout<<"enter a number"<<endl;
    cin>>n;
   while(n!=0)
   {
     r = n%2;
    ans = ans+r *i;
     n = n/2;
     i = i*10;
   }
    cout<<ans;
    // r = 1%2;
    // cout<<r;
    int a[10];
    int s =0,e = 2;
    for(i=0 ; i<2 ; i++)
    {
        if()
    }
  
}