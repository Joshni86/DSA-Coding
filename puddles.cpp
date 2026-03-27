#include<iostream>
#include<vector>
#define MOD 100000007
using namespace std;
const int rd[4]={-1,0,0,1};
const int cd[4]={-1,0,0,1};
bool dfs(int R,int C, int row, int col,vector<string> &g)
{
    g[row][col]="#";
    bool room=true;
    if(row==0 || col==0 || row==R-1|| col==C-1)
    {
        room = false;
        for(int i=0;i<4;i++)
        {
            int ar=row+rd[i];
            int ac=col+cd[i];
            if(ar>=0 && ar<r && ac>=0 && ac<c)
            {
                int rslt=dfs(R,C,ar,ac,g);
                room =room && rslt;
            }
        }
    }
    return room;
}
int main()
{
    int R,C;
    cin>>R>>C;
    vector<string> g(R);
            int count=0;

    for(int i=0;i<R;i++)
    {
        cin>>g[i];
        for(int row=0;row<R;row++)
        {
            for(int col=0;col<C;col++)
            {
                if(g[row][col]==".")
                {
                    if(dfs(grid,row,col,R,C))
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout<<count;
}