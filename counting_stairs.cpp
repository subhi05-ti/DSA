// we have to print the diiferent no. of ways 
// in which we can climb the stairs(by 2 or by 1)

#include<iostream>
using namespace std;

int count_ways(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    else
    {
        return( count_ways(n-1) + count_ways(n-2));
    }
}

int main()
{
    int n;
    cout<<"enter number of stairs"<<endl;
    cin>>n;
     int ans = count_ways(n);
     cout<<"ways = "<<ans;
}