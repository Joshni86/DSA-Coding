#include<iostream>
#include<vector>
using namespace std;
const int diff[]={0,-1,0,1,0};
void dfs(int r,int c, int row,int col, vector<vector<char>> &grid)
{
    grid[row][col]='#';
    for(int i=0;i<4;i++)
    {
        int ar=row+diff[i],ac=col+diff[i+1];
        if(ar>=0 && ar<r && ac>=0 && ac<c && grid[ar][ac]=='.')
        {
            dfs(r,c,ar,ac,grid);
        }
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<char>> grid(r,vector<char>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>grid[i][j];
        }
    }
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(grid[i][j]=='.')
            {
                count++;
                dfs(r,c,i,j,grid);
            }
        }
    }
    cout<<count;
}