#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int a=max(x,y);
        int b=min(x,y);
        int flag=0;
        int count=0;
        while(a<=n && b<=n)
        {
            if(flag==0)
            {
                b+=a;
                count++;
                flag=1;
            }
            else
            {
                a+=b;
                count++;
                flag=0;
            }
            // cout<<a<<" "<<b<<endl;
        }
        cout<<count<<endl;
    }
    return 0;
}