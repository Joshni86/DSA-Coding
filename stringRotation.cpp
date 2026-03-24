#include<set>
#include<iostream>
using namespace std;
void solve()
{
    int n,seqlen=1,blocks=0,maxseqlen=1;
    string s;
    cin>>n>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            seqlen++;
        }
        else{
            maxseqlen=max(maxseqlen,seqlen);
            seqlen=1;
            blocks++;
        }

    }
    maxseqlen=max(maxseqlen,seqlen);
    blocks++;
    if(s[0]!=s[n-1] && maxseqlen>1)
    {
        blocks++;
    }
    cout<<blocks<<endl;
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