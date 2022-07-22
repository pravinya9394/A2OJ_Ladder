#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=(((n%10)-1)*10);
        int cnt=0;
        while(n)
        {
            cnt++;
            n/=10;
        }
        for(int i=1;i<=cnt;i++)
        ans+=i;
        cout<<ans<<endl;
    }
    return 0;
}