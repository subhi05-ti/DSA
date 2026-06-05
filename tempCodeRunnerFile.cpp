// check if the ith bit is set or not

#include<iostream>
using namespace std;

string decimal_to_binary(int n)
{
    string result = "";
    while(n>0)
    {
        if(n%2 == 1)
        {
            result += "1";
        }
        else
        {
            result += "0";
        }
         n = n/2;
    }
     // reversing
    int start = 0;
    int end = result.length() - 1;
    while(start< end)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
        start ++;
        end--;
    }
    return result;
}

int main()
{
    int n,i;
    cout<<"enter a number"<<endl;
    cin>>n;
    string ans = decimal_to_binary(n);
    cout<<"enter the value of i"<<endl;
    cin>>i;
    int size = ans.length() -1;
    for(int j = size; j>=0; j--)
    {
      if( j == i)
      {
        if(ans[j] == '1')
        {
            cout<<"the ith bit is set"<<endl;
            break;
        }
        else{
            cout<<"the ith bit is not set"<<endl;
            break;
        }
      }
       
        
    }
}