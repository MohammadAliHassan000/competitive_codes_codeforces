#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=3;i<=n;i++)
        {
            int sum=0;
            for(int j=2;j<n;j++)
            {
                sum+=i*(pow(2,(j-1)));
                // cout<<"sum "<<sum<<endl;
                // cout<<"i "<<i<<endl;
                // cout<<"j "<<j<<endl;
                if(sum==n)
                {
                    // cout<<"i "<<i<<endl;
                    // cout<<"j "<<j<<endl;
                    cout<<j<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}