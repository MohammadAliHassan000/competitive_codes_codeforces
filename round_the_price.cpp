#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m;
        cin>>m;
        long long res=m;
        long long count=0;
        while(m>0)
        {
            
            if(m/10==0 && m==0)
            {
                // cout<<"here it was"<<endl;
                continue;
            }
            m=m/10;
            // cout<<"m is "<<m<<endl;
            count++;
            
        }
        // cout<<"count is "<<count<<endl;
        res-=pow(10,count-1);
        cout<<res<<endl;
    }
    return 0;
}