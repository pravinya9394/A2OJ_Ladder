#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <string>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <algorithm>
#include <set>
#include <map>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       cout<<2<<endl;
       int a=n,b=n-1;
       for(int i=1;i<n;i++)
       {
            cout<<a<<" "<<b<<endl;
            a=(a+b+1)/2;
            b--;
       }
    }
    return 0;
}