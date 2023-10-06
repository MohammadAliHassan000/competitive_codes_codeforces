#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,d;
        cin>>n>>c>>d;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]+1==arr[i+1])
            {
                continue;
            }
            else if(arr[i]+1!=arr[i+1])
            {
                int diff=arr[i+1]-arr[i]-1;
                if(d<(diff)*c)
                {
                    ans+=d;
                }
            }
        }
    }
    return 0;
}