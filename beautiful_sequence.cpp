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
        int flag=0;
        // cout<<"here1"<<endl;
        for(int i=0;i<n;i++)
        {
            // cout<<"here2"<<endl;
            if(arr[i]==i+1)
            {
                // cout<<"here3"<<endl;
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
            else if(arr[i]<=i)
            {
                // cout<<"here4"<<endl;
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}