#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        
        vector<long long >v;
        long long x=0;
        int i=0;
        while(x<=n)
        {
            x+=pow(2,i);
            v.push_back(x);
            // cout<<v[i]<<" ";
            i++;
        }
        // cout<<endl;

        for(int i=1;i<v.size();i++)
        {
            if(n%v[i]==0)
            {
                cout<<n/v[i]<<endl;
                break;
            }
        }
    }
    return 0;
}