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
        int arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        cout<<arr[0]<<" ";
        for(int i=0;i<n-2;i++)
        {
            cout<<min(arr[i],arr[i+1])<<" ";
        }
        cout<<arr[n-2]<<" ";
        cout<<endl;
    }
    return 0;
}