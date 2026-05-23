// we have to find (x^n) % m

#include<iostream>
using namespace std;
int main()
{
    int x,n,m;
    cout<<"enter x,n,m"<<endl;
    cin>>x>>n>>m;
    int res=1;
    int finalRes = 1;
    if(n%2==0)
    {
        for(int i=1 ; i<=n/2 ; i++)
        {
            res = res * x;
        }
         finalRes = (res*res)%m;
    }
    else
    {
        for(int i=1 ; i<=n/2 ; i++)
        {
            res = res *n;
        }
        finalRes = ((res*res)*n)%m;
    }
    cout<<finalRes;

}
