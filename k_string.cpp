#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
int k,c[500];
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    for(auto it:s)
    {
        c[it]++;
    }
    for(int i='a';i<='z';i++)
    {
        if(c[i]%k)
        {
            cout<<-1;
            return 0;
        }
    }
    for(int i=1;i<=k;i++)
    {
        for(int j='a';j<='z';j++)
        {
            for(int l=1;l<=c[j]/k;l++)
            cout<<(char)j;
        }
    }
    return 0;
}