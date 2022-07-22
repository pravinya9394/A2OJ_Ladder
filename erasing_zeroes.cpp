#include<iostream>
using namespace std;
int main()
{
    // NOT WORKING
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,j;
        for(i=s.size()-1;i>0;i--)
        {
            if(s[i]=='1'&&s[i-1]=='0')
            break;
        }
        for(j=i-1;j>=0;j--)
        {
            if(s[j]=='1')
            break;
        }
        cout<<(i-j)-1<<endl;
    }
    return 0;
}