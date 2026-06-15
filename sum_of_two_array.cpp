#include<iostream>
using namespace std;
int main()
{
    int a[1],b[4],i,j;

    // when j>i;
    int ans[4] = {0};

    //when j!>i then do normal i.e a[i] = sum
    cout<<"enter number in first array"<<endl;
    for(i=0 ; i<1 ; i++)
    {
        cin>>a[i];
    }
     cout<<"enter number second array"<<endl;
    for(j=0 ; j<4 ; j++)
    {
        cin>>b[j];
    }
    i=0,j=3;
    int sum=0,carry=0;
    while(i>=0 && j>=0)
    {
        sum = a[i]+b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        a[i] = sum;
        i--;
        j--;
    }
    while(i>=0)
    {
        sum = a[i]+carry;
        carry = sum/10;
        sum = sum%10;
        a[i] = sum;
        i--;
        j--;
    }
    while(j>=0)
    {
        sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        //b[j] = sum;
        
        // only  when j>i
        ans[j] = sum;
        j--;
    }
    while(carry!=0)
    {
        sum = carry;
        carry = sum/10;
        sum = sum%10;
        a[i] = sum;
    }
    for(j=0 ; j<4 ; j++)
    {
        cout<<ans[j]<<" ";
    }
}