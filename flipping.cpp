#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    vector<int> zi,oi;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0') zi.push_back(i+1);
        else oi.push_back(i+1);
    }
    if(n==zi.size())
    {
        cout<<"0"<<endl; return;
    }
    if(n==oi.size() && n%2!=0)
    {
        cout<<"-1"<<endl;
        return;
    }
    if(zi.size()%2==0 && oi.size()%2!=0)
    {
        cout<<"-1"<<endl;

    }
    if(zi.size()%2!=0)
    {
        cout<<zi.size()<<endl;
        for(int p:zi) cout<<p<<" ";
        cout<<endl; return;
    }
    if(oi.size()%2==0)
    {
        cout<<oi.size()<<endl;
        for(int p:oi) cout<<p<<" ";
        cout<<endl;
    }
}
int main()
{
    int t;
 cin>>t;
 while(t--)
 {
    solve();
 }
}