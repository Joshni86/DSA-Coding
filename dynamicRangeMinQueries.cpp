#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll=long long;
void update(vector<ll> &segt, ll idx)
{
    if(idx==1)
    {
        segt[idx]=min(segt[idx*2],segt[idx*2+1]);
        return;
    }
    segt[idx]=min(segt[idx*2],segt[idx*2+1]);
    update(segt,idx/2);
}
ll find(vector<ll> &segt,ll idx,ll clt,ll crt, ll lt,ll rt)
{
    if(clt>=lt && crt<=rt)
    {
        return segt[idx];
    }
    if(clt>rt || crt<lt) return 1000000005;
    return min(find(segt,idx*2,clt,(crt+clt)/2,lt,rt),find(segt,idx*2+1,((crt+clt)/2)+1,crt,lt,rt));
}
int main()
{
    ll N,Q;
    cin>>N>>Q;
    ll tpow=0;
    while((1<<tpow)<N) tpow++;
    ll newN=(1<<tpow);
    vector<ll> segementTree(2*newN,1000000005);
        for(ll i=newN;i<newN+N;i++)
    {
        cin>>segementTree[i];
    }
    for(ll i=newN-1;i>0;i--)
    {
        segementTree[i]=min(segementTree[2*i],segementTree[2*i+1]);
    }
    while(Q--)
    {
        ll option;cin>>option;
        if(option==1)
        {
            ll idx,tar; cin>>idx>>tar;
            idx=newN+idx-1;
            segementTree[idx]=tar;
            update(segementTree,idx/2);
        }
        else if(option==2)
        {
            ll lt,rt; cin>>lt>>rt;
            cout<<find(segementTree,1,1,newN,lt,rt)<<endl;
        }
    }

}