#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int cnt=0;
    while(n)
    {
        int dig=n%10;
        if(dig==4||dig==7)
        cnt++;
        n/=10;
    }
    if(cnt==4||cnt==7)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}