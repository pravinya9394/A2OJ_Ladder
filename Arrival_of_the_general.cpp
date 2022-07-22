#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int min_val=110;
    int max_val=0;
    int maxi=0;
    int mini=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a>max_val)
        {
            max_val=a;
            maxi=i;
        }
        if(a<=min_val)
        {
            min_val=a;
            mini=i;
        }
    }
    if(maxi>mini)
    cout<<(maxi-1)+(n-mini)-1;
    else
    cout<<(maxi-1)+(n-mini);
    return 0;
}