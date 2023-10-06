#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n*m];
        for(int i=0;i<n*m;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int a=min(m,n)-1;
        int b=max(m,n)-1;
        int c=arr[m*n-1];
        int d=arr[0];
        int e=arr[1];
        int sum1=(d-c)*b;
        int sum2=(e-c)*a;
        int final=(m*n-a-b-1)*(arr[0]+c)+sum1+sum2;
        cout<<final<<endl;

    }
    return 0;
}