#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h;
        cin>>n>>h;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int sum=arr[n-2]+arr[n-1];
        int ans=h/sum;
        int a=h%sum;
        if(h<=arr[n-1])
        {
            cout<<1<<endl;
        }
        else if(a==0)
        {
            cout<<ans*2<<endl;
        }
        else if(a>arr[n-1])
        {
            cout<<(ans*2)+2<<endl;
        }
        else
        {
            cout<<(ans*2)+1<<endl;
        }
        
        
    
    
    
    }
    return 0;
}