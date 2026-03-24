#include<iostream>
#include<numeric>
using namespace std;
using ll = long long;
ll calc(ll m,ll sing,ll three,ll d1, ll d2)
{
    ll ltrs=(m/sing)*6;
    //subtract all 3 intersection
    ltrs-=(m/three)*4; //(6-2)
    ltrs-=((m/d1)-(m/three))*3;
    ltrs-=((m/d2)-(m/three))*3;
    return ltrs;
}
void solve()
{
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    ll lab=lcm(a,b),lac=lcm(a,c),lbc=lcm(b,c);
    ll lall=((a*b*c)/(gcd(a,b)*gcd(b,c)*gcd(a,c)))*gcd(a,gcd(b,c));
    cout<<calc(m,a,lall,lab,lac)<<" ";
    cout<<calc(m,b,lall,lab,lbc)<<" ";
    cout<<calc(m,c,lall,lbc,lac)<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        solve();
    }
    return 0;
}