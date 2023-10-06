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
        int count=1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }

        for(int i=0;i<n;i++)
        {
            if( i!=0 && arr[i]==arr[i-1] )
            {
                count++;
            }
        }

        if(count==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {   sort(arr,arr+n);
            cout<<"YES"<<endl<<arr[n-1]<<" "<<arr[0]<<" ";
            for(int i=1;i<n-1;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }

    }
    return 0;
}