#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_set<int>st;
    for(auto it:s)
    st.insert(it);
    if(st.size()%2==0)
    cout<<"CHAT WITH HER!";
    else 
    cout<<"IGNORE HIM!";
    return 0;
}