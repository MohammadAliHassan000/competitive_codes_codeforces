#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int m=max(max(a,b),max(b,c));
        int x=abs(a-m);
        int y=abs(b-m);
        int z=abs(c-m);
        int res=n-(x+y+z);
        if(res%3==0 && res>=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}