#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // s=tolower(s);
    string ans="";
    for(auto it:s)
    {
        if(tolower(it)=='a'||tolower(it)=='o'||tolower(it)=='y'||tolower(it)=='e'||tolower(it)=='u'||tolower(it)=='i')
        {
            continue;
        }
        else
        {
            ans.push_back('.');
            ans.push_back(tolower(it));
        }
    }
    cout<<ans;
    return 0;
}