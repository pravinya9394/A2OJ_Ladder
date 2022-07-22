#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                char k;
                cin>>k;
                if(j==c-1)
                {
                    if(k=='R')
                    ans++;
                }
                if(i==r-1)
                {
                    if(k=='D')
                    ans++;
                }
            }
        } 
        cout<<ans<<endl;
    }
    return 0;
}