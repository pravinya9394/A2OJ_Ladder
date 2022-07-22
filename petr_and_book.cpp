#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    int cnt=0;
    for(int i=1;i<=7;i++)
    {
        int k;
        cin>>k;
        ans.emplace_back(k);
    }
    int i;
    for(i=1;i<=7;i++)
    {
        if(n<=0)
        break;
        n-=ans[i-1];
        // cnt++;-*
    }
    cout<<(i-1)%7;
    return 0;
}