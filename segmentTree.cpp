#include<iostream>
#include<vector>
using namespace std;
// create an array of size n*2
// first populate from nth index - all the array values
// then start from n-1 value and start filling (2i+(2i+1))
int find(vector<int> &segt,int nodeIdx,int clt,int crt,int lt, int rt)
{
    if(clt>=lt && crt<=rt)
    {
        return segt[nodeIdx];
    }
    if(crt<lt || clt>rt)
    {
        return 0;
    }
    return find(segt,nodeIdx*2,clt,(clt+crt)/2,lt,rt)+find(segt,(nodeIdx*2)+1,((clt+crt)/2)+1,crt,lt,rt);
}

void update(vector<int> &segt, int nodeIdx, int value)
{
    if(nodeIdx==1)
    {
        segt[nodeIdx]+=value;
        return;
    }
    segt[nodeIdx]+=value;
    update(segt,nodeIdx/2,value);

}
int main()
{
    int N;
    cin>>N;
    //for different numbers that is not in the power of 2^n, u need to change n to power of 2
    int tpow=0;
    while((1<<tpow)<N) tpow++;
    int newN=(1<<tpow);
    vector<int> segementTree(2*newN,0);
    for(int i=newN;i<newN+N;i++)
    {
        cin>>segementTree[i];
    }
    //sum for upper layers
    for(int i=newN-1;i>0;i--)
    {
        segementTree[i]=segementTree[2*i]+segementTree[2*i+1];
    }
    N=newN;
    // int lt,rt;
    // cin>>lt>>rt;
    // cout<<find(segementTree,1,1,N,lt,rt)<<" ";
    //update
    int targetIndex,targetValue;
    cin>>targetIndex>>targetValue;
    targetIndex=N+targetIndex-1;
    int difference=targetValue-segementTree[targetIndex];
    segementTree[targetIndex]=targetValue;
    update(segementTree,targetIndex/2,difference);
    for(int i=1;i<N*2;i++)
    {
        cout<<segementTree[i]<<" ";
    }
    // cin>>lt>>rt;
    // cout<<find(segementTree,1,1,N,lt,rt)<<" ";
  
   //get the queries - which are range of indices nd we shd return the sum of element in the range by traversing from top of the tree - but why?(cue dramatic penguin scenes of BUT WHYYYY) bcuz tree makes the things logN instead of N
    // int q;
    // cin>>q;
    // while(q--)
    // {
    //     int lt,rt; cin>>lt>>rt;
    //     cout<<find(segementTree,1,1,N,lt,rt)<<" ";
    // }

    return 0;
}