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
        int min=100000001;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(arr[i]-min);
        }

        cout<<sum<<endl;
    }
    return 0;
}