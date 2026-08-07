// finding power set of the given set

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int> nums,int index,vector<int> output, vector<vector<int>>& ans)
{
    if(index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // EXCLUDING
    solve(nums,index+1,output,ans);

    // INCLUDING
    int element = nums[index];
    output.push_back(element);
    solve(nums,index+1,output,ans);
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    
    vector<vector<int>> ans;
    int index =0;
    vector<int> output;
    
    solve(nums,index,output,ans);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) 
        {
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }

    
}