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
        string s;
        cin>>s;
        // cout<<"here1"<<endl;
        unordered_map<string ,int>m;
        // cout<<"here2"<<endl;
        for(int i=0;i<n-1;i++)
        {
            // cout<<"here3"<<endl;
            m[s.substr(i,2)]++;
        }
        // cout<<"here4"<<endl;
        cout<<m.size()<<endl;
    }
    return 0;
} 