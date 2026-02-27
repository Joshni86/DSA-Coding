#include<iostream>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int ctr=1;ctr<(1<<n);ctr++)
    {
        for(int sh=0;sh<n;sh++)
        {
            if((ctr&(1<<sh))!=0)
            {
                cout<<s[sh];
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
}