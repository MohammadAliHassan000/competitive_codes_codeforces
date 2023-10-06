#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>d)
            {
                count++;
            }
        }
        if(count>0)
        {
            sort(arr,arr+n);
            if(arr[0]+arr[1]<=d)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}