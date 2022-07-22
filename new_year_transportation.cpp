#include<iostream>
#include<set>
using namespace std;
int arr[1234567];
int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=1;i<n;i++)
    cin>>arr[i];
    int x=1;
    while(x<t)
    x+=arr[x];
    cout<<(x==t?"YES":"NO");
    return 0;
}