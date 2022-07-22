#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>ans;
    for(auto it:s)
    {
        if(it=='1'||it=='2'||it=='3')
        {
            ans.push_back(it);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
        if(i!=ans.size()-1)
        cout<<'+';
    }
    return 0;
}