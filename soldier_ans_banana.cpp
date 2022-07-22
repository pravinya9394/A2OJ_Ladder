#include<iostream>
using namespace std;
int main()
{
    long long int k,n,w;
    cin>>k>>n>>w;
    long long int ans=0;
    for(int i=1;i<=w;i++)
    {
        ans+=(k*i);
    }

    cout<<((ans-n)>0?ans-n:0);
    return 0;
}
