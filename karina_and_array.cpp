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
        long long max1=-1*(pow(10,15));
        int m=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max1)
            {
                max1=arr[i];
                m=i;
            }
        }
        // cout<<"m "<<m<<endl;
        long long res=-1*(pow(10,15));
        for(int i=0;i<n;i++)
        {
            if(i==m)
            {
                continue;
            }
            if(res<max1*arr[i])
            {
                res=max1*arr[i];
                // cout<<"res"<<res<<endl;
            }
        }
        cout<<res<<endl;

    }
    return 0;
}