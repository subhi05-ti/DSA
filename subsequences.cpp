// finding power set of the given string 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(string s,int index,string output, vector<string>& ans)
{
    if(index >= s.length())
    {
        ans.push_back(output);
        return;
    }

    // EXCLUDING
    solve(s,index+1,output,ans);

    // INCLUDING
    char element = s[index];
    output.push_back(element);
    solve(s,index+1,output,ans);
}

int main()
{
    string s = "abc";
    // for(int i=0 ; i<s.length() ; i++)
    // {
    //     char ch =s[i];
    //      nums.push_back(ch);
    // }
   
   
    // nums.push_back('a');
    // nums.push_back('b');
    // nums.push_back('c');
    
    vector<string> ans;
    int index =0;
    string output;
    
    solve(s,index,output,ans);

    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
        // for (int j = 0; j < ans[i].size(); j++) 
        // {
        //     cout << ans[i][j] << " ";
        // }
        cout<<endl;
    }

    
}