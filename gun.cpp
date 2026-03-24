// (h-1)/sum of all attack points - reloading rounds
// reloading time - rr*(n+k)
// rl
//calculate csum and csumswap - https://codeforces.com/contest/2192/problem/C
// csum will be greate when all bullets are used or everythin is in desc order
// h=h-(rr*sum)
//rb na right bigger
#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
void solve()
{
    int n;
    ll h,k,sum=0;
    cin>>n>>h>>k;
    vector<int> arr(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ll rr=(h-1)/sum;
    ll ans=rr*(n+k);
    h-=rr*sum;
    int lmin=1000000005;
    vector<int> rb(n+1,0);
    for(int i=n-1;i>=1;i--)
    {
        rb[i]=max(rb[i+1],arr[i+1]);
    }
    sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=arr[i];
        lmin=min(lmin,arr[i]);
        if(sum>=h || (sum-lmin+rb[i])>=h)
        {
            ans+=i;
            break;
        }
    }
    cout<<ans<<endl;
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