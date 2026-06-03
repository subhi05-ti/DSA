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
    int start_num,goal_num;
    cout<<"enter start number"<<endl;
    cin>>start_num;

    cout<<"enter goal number"<<endl;
    cin>>goal_num;

    int result = start_num ^ goal_num;
    int count = 0;
    while(result !=0)
    {
        result = result & (result -1);
        count++;
    }
    cout<<"number of bit flip required to convert " <<start_num << " to "<<goal_num <<" is "<<count;

   
}