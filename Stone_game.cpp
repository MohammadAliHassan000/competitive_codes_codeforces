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
        int m,p,mi=1000,ma=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(mi>arr[i])
            {
                mi=arr[i];
                m=i;
            }
            if(ma<arr[i])
            {
                ma=arr[i];
                p=i;
            }
        }
        int a=min((max(m,p)+1),n-min(m,p));
        int a1=min(m+1,p+1);
        int a2=min(n-m,n-p);
        cout<<min(a,(a1+a2))<<endl;

    }
    return 0;
}