#include<iostream>
using namespace std;
int main()
{
int a[5],i,ans=0;
cout<<"enter element in array"<<endl;
for(i=0 ; i<5 ; i++)
{
    cin>>a[i];
}
for(i=0 ; i<5 ; i++)
{
    ans= ans^a[i];
}
cout<<"unique element = "<<ans;
}