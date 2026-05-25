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
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    string ans = decimal_to_binary(n);
    cout<<ans;

    int count = 0;
    int size = ans.length()-1;
    for(int i = 0; i<= size ; i++)
    {
        if(ans[i] == '1')
        {
            count++;
        }
    }
    cout<<"number of set bit"<<count;
}

// OPTIMIZED SOLUTION

// while(n!=0)
// {
//     n = n & (n-1);
//     count ++;
// }