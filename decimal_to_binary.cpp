// converting a decimal to binary
# include<iostream>
using namespace std;

string decimal_to_binary(int n)
{
    string result = "";
    while(n>0)
    {
        if(n%2 == 1 )
        {
            result += "1";
        }
        else
        {
            result += "0";
        }
        n = n/2;
    }
    return result;
}

int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    string ans = decimal_to_binary(n);

    // reversing
    int start = 0;
    int end = ans.length() - 1;
    while(start< end)
    {
        char temp = ans[start];
        ans[start] = ans[end];
        ans[end] = temp;
        start ++;
        end--;
    }
    cout<<ans;
}