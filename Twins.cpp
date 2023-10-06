#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + n, greater<int>());
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int sum[n];
    sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+arr[i];
    }

    int i=0;
    while(sum[n-1]-sum[i]>=sum[i])
    {
        i++;
    }
    cout<<i+1<<endl;
    

    return 0;
}