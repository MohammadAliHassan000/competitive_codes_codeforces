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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int diff=10000;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]<diff)
            {
                diff=arr[i+1]-arr[i];
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}