#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
ll range(vector<ll> &segt, ll idx,ll clt, ll crt, ll lt, ll rt)
{
    if(clt>=lt && crt<=rt)
    {
        return segt[idx];
    }
    if(crt<lt || clt>rt)
    {
        return 0;
    }
    return range(segt,idx*2,clt,(clt+ crt)/2,lt,rt)+range(segt,idx*2+1,((clt+ crt)/2)+1,crt,lt,rt);
}
void update(vector<ll> &segt,ll idx,ll diff)
{
    if(idx==1)
    {
        segt[idx]+=diff;
        return;
    }
    segt[idx]+=diff;
    update(segt,idx/2,diff);

}
int main()
{
    ll N,q;
    cin>>N>>q;
    ll tpow=0;
    while((1<<tpow)<N) tpow++;
    ll newN=(1<<tpow);
    vector<ll> segt(newN*2,0);
    for(int i=N;i<newN+N;i++)
    {
        cin>>segt[i];
    }
    for(int i=N-1;i>0;i--)
    {
        segt[i]=segt[2*i]+segt[2*i+1];
    }
    while(q-->0)
    {
        int option; cin>>option;
        if(option==1)
        {
            ll idx,tar;
            cin>>idx>>tar;
            idx=newN+idx-1;
            ll diff=tar-segt[idx];
            segt[idx]=tar;
            update(segt,idx/2,diff);
            
        }
        else if(option==2){
            ll lt,rt;
            cin>>lt>>rt;
            cout<<range(segt,1,1,newN,lt,rt)<<endl;
            
        }
       
    }
}