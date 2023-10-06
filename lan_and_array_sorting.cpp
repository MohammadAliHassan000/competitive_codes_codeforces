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
        int  asc=1;
        int  dsc=1;
        int flag=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<arr[i-1] && i!=0)
            {
                asc=0;
            }
            if(arr[i]>arr[i-1] && i!=0)
            {
                dsc=0;
            }
        }
        if(asc)
        {
            cout<<"YES"<<endl;
            flag=1;
        }
        else if(n<=2)
        {
            cout<<"NO"<<endl;
            flag=1;
        }
        else if(dsc)
        {
            cout<<"YES"<<endl;
            flag=1;
        }
        else
        {
            for(int i=0;i<n;i+=3)
            {
                if(arr[i]>arr[i+1] || arr[i+2]>arr[i+1])
                {
                    // cout<<"arr[i]"<<arr[i]<<endl;
                    // cout<<"arr[i+1]"<<arr[i+1]<<endl;
                    // cout<<"arr[i+2]"<<arr[i+2]<<endl;
                    // cout<<"here"<<endl;
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}