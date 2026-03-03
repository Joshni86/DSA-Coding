#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin>>n;
    vector<tuple<int,int,int>> reindeer(n);
    ll remwt=0LL,pullpow=0LL;
    for(int i=0;i<n;i++)
    {
        int w,s;
        cin>>w>>s;
        reindeer[i]=make_tuple(w+s,s,w);
        remwt+=w;
    }
    sort(reindeer.begin(),reindeer.end(),greater<tuple<int,int,int>>());
    int ans=n;
    for(int i=0;i<n && pullpow<remwt;i++)
    {
        ans--;
        remwt-=get<2>(reindeer[i]);
        pullpow+=get<1>(reindeer[i]);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}