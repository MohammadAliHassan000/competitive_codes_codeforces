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
        int arr[n+1];
        arr[0]=0;
        unordered_map<int,int>m;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(m[arr[i]]==1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}