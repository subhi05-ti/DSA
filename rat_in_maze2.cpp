#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<vector<int> >& mat,vector<string>& ans,int row,int col,
           int n, vector<vector<int> > visited,string s)
{
    
    if(row ==n-1 && col ==n-1)
    {
        ans.push_back(s);
        return;
    }

    else{
        visited[row][col]=1;
        }
         if(( row+1<n) && visited[row+1][col]==0 && mat[row+1][col]==1){
            solve(mat,ans,row+1,col,n,visited,s+"D");                              //DOWN
        }
         if((col-1>=0)  && visited[row][col-1]==0 && mat[row][col-1]==1){
            solve(mat,ans,row,col-1,n,visited,s+"L");                               //LEFT
        }
         if((col+1<n) && visited[row][col+1]==0 && mat[row][col+1]==1){
            solve(mat,ans,row,col+1,n,visited,s+"R");                               //RIGHT
        }
        if((row-1>=0 ) && visited[row-1][col]==0 && mat[row-1][col]==1){
            solve(mat,ans,row-1,col,n,visited,s+"U");                               //UP
        }
        visited[row][col]=0;
}

int main()
{
     vector<vector<int> > mat = { { 1, 0, 0, 0 },
                                  { 1, 1, 0, 1 },
                                  { 1, 1, 0, 0 },
                                  { 0, 1, 1, 1 } };
    vector<string> ans;
    // if(mat[0][0] ==0)
    // {
    //     cout<<ans;
    // }
    int n =mat.size();
    // cout<<n;
    int src_x = 0;
    int src_y = 0;
    vector<vector<int> > visited = mat;
     for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
           visited[i][j] = 0;
        }
    }
    string s = "";
    solve(mat,ans,src_x,src_y,n,visited,s);
    sort(ans.begin(),ans.end());
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
}