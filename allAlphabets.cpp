#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(char c:s)
    {
        flag=flag|(1<<(ch-'a'));
    }
    cout<<((flag==((1<<26)-1))?"yes":"no");
}