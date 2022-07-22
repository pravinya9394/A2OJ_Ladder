#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n+=1;
    while(1)
    {
        set<int>st;
        string s=to_string(n);
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }
        if(s.size()==st.size())
        {
            cout<<s;
            return 0;
        }
        n+=1;
    }    
    return 0;
}