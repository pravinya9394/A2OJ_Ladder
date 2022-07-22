#include<iostream>
using namespace std;
int main()
{
    int ans[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>ans[i][j];
        }
    }
    int i,j;
    bool flag=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ans[i][j]==1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    cout<<abs(i-2)+abs(j-2);
    return 0;
}