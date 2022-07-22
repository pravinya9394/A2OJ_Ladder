#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int ans1,ans2,ans3;
    ans1=abs(y-x)+abs(z-x);
    ans2=abs(x-y)+abs(z-y);
    ans3=abs(x-z)+abs(y-z);
    cout<<min(ans1,min(ans2,ans3));
    return 0;
}