#include<iostream>
#include<vector>
#include<algorithm>
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
    sort(ans.begin(),ans.end());
    if(ans[ans.size()-1]==1)
    cout<<"HARD";
    else
    cout<<"EASY";
    return 0;
}