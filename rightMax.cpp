// //round 188 div2
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void solve()
// {
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;i++)
//     {
//         int tempInput;
//         cin>>tempInput;
//         arr.push_back(tempInput);
//     }
//     int count=0;
//     while(arr.size()>0)
//     {
//         int index=0,max=-1;
//         //find max element
//         for(int i=0;i<arr.size();i++)
//         {
//             if(max<=arr[i])
//             {
//                 max=arr[i];
//                 index=i;
//             }
//         }
//         for(int i=index;i<arr.size();i+=0)
//         {
//             arr.erase(arr.begin()+i);
//         }
//         count++;
//     }
//     cout<<count<<endl;
// }

//the above is bruteforce
#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int noOfOperations=1,curr_max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(curr_max<=arr[i])
        {
            curr_max=arr[i];
            noOfOperations++;
        }
    }
    cout<<noOfOperations<<endl;
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





