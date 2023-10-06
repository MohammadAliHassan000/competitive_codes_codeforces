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
        int arr[n];
        unordered_map<int,int>m2;
        for(int i=0;i<n;i++)
        {
            // cout<<"here"<<endl;
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            // cout<<"here1"<<endl;
            int x;
            cin>>x;
            m2[x]++;
        }
        for(int i=0;i<n;i++)
        {
            // cout<<"here2"<<endl;
            if(m2[arr[i]]==1)
            {
                count++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}