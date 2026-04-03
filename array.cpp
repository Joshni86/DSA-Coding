#include<iostream>
#include<vector>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &i:arr)
    {
        cin>>i;
    }
    for(int i=0;i<n;i++)
    {
        int sm=0,lg=0;
        for(int oi=i+1;oi<n;oi++)
        {
            if(arr[i]>arr[oi]) lg++;
            else if(arr[i]<arr[oi]) sm++;
        }
        cout<<max(lg,sm)<<" ";
    }
    cout<<endl;
}
int main()
{int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}