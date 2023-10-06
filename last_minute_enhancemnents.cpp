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
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;

            if(m[x]==0)
            {
                m[x]++;
            }
            else if(m[x+1]==0)
            {
                m[x+1]++;
            }

        }
        cout<<m.size()<<endl;

    }
    return 0;
}