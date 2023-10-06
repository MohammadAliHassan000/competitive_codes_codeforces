#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v(n*m);
        for(int i=0;i<n*m;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int mx1=v[m*n-1];
        int mx2=v[m*n-2];
        int mn1=v[0];
        int mn2=v[1];
        int sum1=(n * m - min(n, m))*(mx1-mn1);
        int sum2=max((mx1-mn2),(mx2-mn1))*(min(m,n)-1);
        cout<<sum1+sum2<<endl;
         

    }
    return 0;
}