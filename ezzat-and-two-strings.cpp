#include <bits/stdc++.h>
#include <iomanip>
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
        double sum=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        
        sum=sum-arr[n-1];
        // cout<<sum<<endl;
        double x=arr[n-1]+(sum/(n-1));
        cout<<fixed<<setprecision(9)<<x<<endl;
    }
    return 0;
}