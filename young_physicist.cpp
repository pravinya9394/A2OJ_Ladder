#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int ans[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ans[i][j];
        }
    }
    int x=0;
    int y=0;
    int z=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==0)
                x+=ans[i][j];
            else if(j==1)
                y+=ans[i][j];
            else
                z+=ans[i][j];
        }
    }
    if(x==0&&y==0&&z==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}