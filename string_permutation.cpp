#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(string s ,int index ,vector<string>& ans)
{
    if(index >=s.length())
    {
        swap(s[index],s[index]);
        ans.push_back(s);
        return;
    }

    for(int j=index ; j<s.length() ; j++)
    {
        swap(s[index], s[j]);
        solve(s,index+1,ans);

        // backtraking
        swap(s[index], s[j]);
    }
}

int main()
{
    string s = "abc";
    vector<string> ans;
    int index = 0;
   // string output;
    solve(s,index,ans);

    for(int i =0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}