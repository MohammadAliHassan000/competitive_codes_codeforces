#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        long long x=s/n;
        long long flag=0;
        if(s<n)
        {
            if(s>b)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else if(s>((n*a)+b))
        {
            cout<<"NO"<<endl;
        }
        else if((n*x)+b>=s)
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