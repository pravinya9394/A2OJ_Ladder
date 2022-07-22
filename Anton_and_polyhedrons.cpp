#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>ans;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        ans.push_back(s);
    }
    int res=0;
    for(auto it:ans)
    {
        if(it=="Tetrahedron")
        res+=4;
        else if(it=="Cube")
        res+=6;
        else if(it=="Octahedron")
        res+=8;
        else if(it=="Dodecahedron")
        res+=12;
        else if(it=="Icosahedron")
        res+=20;
    }
    cout<<res;
    return 0;
}