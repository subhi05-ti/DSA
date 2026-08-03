#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int> nums,int index, vector<vector<int>>& ans)
{
    if(index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for(int j=index ; j<nums.size() ; j++)
    {
        swap(nums[index],nums[j]);
        solve(nums,index+1 ,ans);

        // back traking
        //swap(nums[index],nums[j]);
    }
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    vector<vector<int>> ans;
    int index =0;
    solve(nums,index,ans);

    for(int i=0 ; i<ans.size() ; i++)
    {
        for(int j=0 ; j<ans[i].size() ; j++)
        {
             cout<<ans[i][j]<<" ";
        }
       cout<<endl;
       
    }
}