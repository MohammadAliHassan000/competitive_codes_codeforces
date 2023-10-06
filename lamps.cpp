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
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].second;
            cin>>v[i].first;
            // cout<<"here"<<endl;
            // cout<<v[i].second<<" ";
            // cout<<v[i].first<<endl;
        }
        
        sort(v.begin(),v.end());
        v[n].second=0;
        v[n].first=0;
        cout<<endl;
        for(int i=0;i<=n;i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
            // cout<<"here1"<<endl;
        }
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(v[i].first!=v[i+1].first)
        //     {
        //         count+=v[i].second;
        //     }
        // }
        // cout<<count<<endl;

    }
    return 0;
}