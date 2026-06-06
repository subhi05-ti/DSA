// toggle the ith bit of a number 

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

    cout<<"enter the bit to be set"<<endl;
    cin>>i;

        //  Main logic  //
    int result = n ^ (1 << i);
    string final_ans = decimal_to_binary(result);
    cout<<"binary form after toggling the ith bit is "<<final_ans<<endl;
    
    

}