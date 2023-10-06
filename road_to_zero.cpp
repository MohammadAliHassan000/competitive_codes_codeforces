#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
        long long z=min(x,y);
        long long val;
        if(2*a<b)
        {
            val=2*a;
        }
        else
        {
            val=b;
        }
        long long initial=val*z;
        long long diff=max(x,y)-min(x,y);
        long long prod=diff*a;
        long long result=initial+prod;
        cout<<result<<endl;


    }
    return 0;
}