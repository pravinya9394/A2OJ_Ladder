#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=1;
    string ans="";
    for(int i=0;i<s.size();i+=cnt)
    {
        ans.push_back(s[i]);
        cnt++;
    }
    cout<<ans;
    return 0;
}