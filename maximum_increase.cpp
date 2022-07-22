#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        ans.push_back(k);
    }
    int maxi=0;
    int cnt=0;
    for(int i=0;i<ans.size()-1;i++)
    {
        if(ans[i+1]>ans[i])
        cnt++;
        else 
        cnt=0;
        maxi=max(maxi,cnt);
    }
    cout<<maxi+1;
    return 0;
}