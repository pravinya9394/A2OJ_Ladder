#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            int k;
            cin>>k;
            if(j==0)
            sum-=k;
            else
            sum+=k;
            maxi=max(maxi,sum);
        }
    }
    cout<<maxi;
}