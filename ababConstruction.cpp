#include<iostream>
#include<cstring>
using namespace std;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    // n is odd, first letter is b - invalid
    if(s[0]=='b' && (n&1))
    {
        cout<<"NO"<<endl;
        return;
    }
    int i=(n&1)?1:0;
    for(;i+1<n;i+=2)
    {
        if (s[i] == s[i + 1] && s[i] != '?'){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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