#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    // n is odd, first letter is b - invalid
    if(s[0]=='b' && (n&1))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int i=(n&1)?1:0;
    for(;i<n;i+=2)
    {
        if (s[i] == s[i + 1] && s[i] != '?'){
            cout<<"NO"<<endl;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}