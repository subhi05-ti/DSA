// set the ith bit of a number 

#include<iostream>
using namespace std;

// Brute Force Solution

string decimal_to_binary(int n)
{
    string result = "";
    while (n>0)
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

string set_ith_bit(string n, int i)
{
    int size  = n.length() - 1;
    for(int j = size ; j>=0 ; j--)
    {
        if (j == i)
        {
            n[i] = '1';
        }
    }
    return n;
}

int main()
{
    int n,i;
    cout<<"enter number"<<endl;
    cin>>n;

    string ans = decimal_to_binary(n);
    cout<<"binary form of the number is "<<ans<<endl;

    cout<<"enter the bit to be set"<<endl;
    cin>>i;

    string result = set_ith_bit(ans,i);
    cout<<"binary form after setting the ith bit is "<<result<<endl;

}

// OPTIMIZED SOLUTION

// using left shift operator
    // int result_num = n | (1 << i);
    // string final_ans = decimal_to_binary(result_num);
    // cout<<"binary form after setting the ith bit is "<<final_ans<<endl;
