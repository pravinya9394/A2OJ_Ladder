#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<(a<c?1:-1)<<" ";
        cout<<(c<a*b?b:-1)<<endl;
    }
    return 0;
}