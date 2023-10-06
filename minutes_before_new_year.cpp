#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        m+=(h*60);
        m=1440-m;
        cout<<m<<endl;
    }
    return 0;
}