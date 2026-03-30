#include<iostream>
using ll=long long;
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    cin>>arr[i];
    ll moves=0;
    for(int i=1;i<N;i++)
    {
        if(arr[i]<arr[i-1])
        {
            ll diff=arr[i-1]-arr[i];
            moves+=diff;
            arr[i]=arr[i-1];
        }
    }
    cout<<moves<<endl;
}