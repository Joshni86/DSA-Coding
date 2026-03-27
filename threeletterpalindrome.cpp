#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> left(26,0),right(26,0);
    
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        right[s[i]-'a']+=1;
    }
    for(int i=0;i<s.length();i++)
    {
        right[s[i]-'a']--;
        for(int i='a';i<='z';i++) // if we iterate n, it will be O(n^2), but now it's O(n*26);
        {
            if(left[i-'a']>0 && right[i-'a']>0)
            count+=(left[i-'a']*right[i-'a']);
        }
        left[s[i]-'a']++;
    }
    cout<<count;
}