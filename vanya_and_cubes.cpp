#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=2;
    int ans=1;
    int res=0;
    while(n>0)
    {
        n-=(ans);
        ans+=cnt;
        cnt++;
        res++;
        if(n<ans)
        break;
    }
    cout<<res;
    return 0;
}