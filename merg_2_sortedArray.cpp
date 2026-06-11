#include<iostream>
using namespace std;

 void merg(int a[],int n,int b[],int m ,int c[])
 {
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while(i<n)
    {
        c[k++] = a[i++];
    }
     while(j<m)
    {
        c[k++] = b[j++];
    }
 }
 void printing(int ans[],int n)
 {
    for(int i=0 ; i<n ; i++)
    {
        cout<<ans[i]<<" ";
    }
 }
int main()
{
    int a[5], b[3] ,i,j;
    int c[8]={0};
    cout<<"enter first array"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }

    cout<<"enter second array"<<endl;
    for(j=0 ; j<3 ; j++)
    {
        cin>>a[j];
    }
    cout<<endl;
    merg(a,5,b,3,c);
    printing(c,8);
    return 0;
}