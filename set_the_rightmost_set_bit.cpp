// set the rightmost ith bit of a number 

// in optimized solution using xor and left shift

#include<iostream>
using namespace std;

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


int main()
{
    int n,i;
    cout<<"enter number"<<endl;
    cin>>n;

    string ans = decimal_to_binary(n);
    cout<<"binary form of the number is "<<ans<<endl;

        //  Main logic  //
    int result = n & (n-1);
    string final_ans = decimal_to_binary(result);
    cout<<"binary form after set the rightmost ith bit is "<<final_ans<<endl;
    
    

}