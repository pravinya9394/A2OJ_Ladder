#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        ans.push_back(k);
    }
    vector<pair<int,int>>res;
    for(int i=1;i<=n;i++)
    {
        res.push_back({ans[i-1],i});
    }
    sort(res.begin(),res.end());
    for(auto it:res)
    {
        cout<<it.second<<" ";
    }
    return 0;
}