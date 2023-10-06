#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>v;
    long long sum=0;
    int j=0;
    for(int i=1;i<b;i++)
    {
        
        v.push_back(i);
        if(i<n)
        {
            sum+=i;
        }
        if(j==n-2)
        {
            break;
        }
        j++;
    }
    reverse(v.begin(), v.end());
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // cout<<sum<<endl;
    vector<int>v1;
    if(b-a<sum)
    {
        cout<<-1<<endl;
    }
    else 
    {
        cout<<a<<" ";
        for(int i=0;i<n-2;i++)
        {
            cout<<a+v[i]<<" ";
        }
        cout<<b<<endl;
    }
    
    
    
}
signed main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}