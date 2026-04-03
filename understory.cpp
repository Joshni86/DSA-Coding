#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
#define ll as long long int
void solve()
{
    int Q;
    cin>>Q;
    priority_queue<int,vector<int>,greater<>> minh;
    while(Q--)
    {
        int qt,h;
        cin>>qt>>h;
        if(qt==1)
        {
            minh.push(h);
        }
        else{
            while(!minh.empty() && minh.top()<=h)
            {
                minh.pop();
            }
        }
        cout<<minh.size()<<endl;
    }
}
int main()
{
    solve();
}