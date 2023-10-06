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
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
            if(arr[i]==1)
            {
                if(count>maxi)
                {
                    maxi=count;
                }
                count=0;
            }
        }
        cout<<max(maxi,count)<<endl;
    }
    return 0;
}