#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool is_safe(int x,int y,int n,vector<vector<int> > visited,vector<vector<int> > maze)
{
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0,maze[x][y]==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int> >& maze,vector<string>& ans,int src_x,int src_y,
          int n, vector<vector<int> > visited,string path)
{
    
    if(src_x ==n-1 && src_y ==n-1)
    {
        ans.push_back(path);
        return;
    }

    visited[src_x][src_y] = 1;

    // for down
    int newx = src_x+1;
    int newy = src_y;
    if(is_safe(newx,newy,n,visited,maze))
    {
        path.push_back('D');
        solve(maze,ans,src_x,src_y,n,visited,path);
        path.pop_back();
    }

     // for up
    newx = src_x-1;
    newy = src_y;
    if(is_safe(newx,newy,n,visited,maze))
    {
         path.push_back('U');
         cout<<path;
        solve(maze,ans,src_x,src_y,n,visited,path);
        path.pop_back();
    }

     // for left
     newx = src_x;
    newy = src_y-1;
    if(is_safe(newx,newy,n,visited,maze))
    {
         path.push_back('L');
         cout<<path;
        solve(maze,ans,src_x,src_y,n,visited,path);
        path.pop_back();
    }

     // for right
     newx = src_x;
     newy = src_y+1;
    if(is_safe(newx,newy,n,visited,maze))
    {
         path.push_back('R');
        solve(maze,ans,src_x,src_y,n,visited,path);
        path.pop_back();
    }

    visited[src_x][src_y] = 0;
}
int main()
{
     vector<vector<int> > maze = { { 1, 0, 0, 0 },
                                  { 1, 1, 0, 1 },
                                  { 1, 1, 0, 0 },
                                  { 0, 1, 1, 1 } };
    vector<string> ans;
    // if(maze[0][0] ==0)
    // {
    //     return ans;
    // }
    int n =maze.size();
    cout<<n;
    int src_x = 0;
    int src_y = 0;
    vector<vector<int> > visited = maze;
     for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
           visited[i][j] = 0;
        }
    }
    string path = " ";
    solve(maze,ans,src_x,src_y,n,visited,path);
    sort(ans.begin(),ans.end());
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
}