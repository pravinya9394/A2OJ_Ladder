#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        int turn;
        cin>>a>>b>>n;
        int tot=0;
        if(a>b)
        turn =1;
        else 
        turn=0;
        while(a<=n&&b<=n)
        {
            if(turn%2==0)
            {
                a+=b;
                turn++;
                tot++;
            }
            else
            {
                b+=a;
                turn++;
                tot++;
            }
        }
        cout<<tot<<endl;
    }
    return 0;
}