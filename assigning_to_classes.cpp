#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=0;i<2*n;i++)
        {
            int k;
            cin>>k;
            ans.emplace_back(k);
        }
        sort(ans.begin(),ans.end());
        cout<<abs(ans[ans.size()/2-1]-ans[ans.size()/2])<<endl;
    }
    return 0;
}