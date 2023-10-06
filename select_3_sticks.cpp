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
        sort(arr,arr+n);
        int min=pow(10,9);
        for(int i=0;i<n-2;i++)
        {
            int a=arr[i];
            int b=arr[i+1];
            int c=arr[i+2];
            int res=((b-a)+(c-b));
            if(min>=res)
            {
                min=res;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}