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
    sort(arr,arr+n);
    int flag=0;
    for(int i=0;i<n-2;i++)
    {
        int a=arr[i];
        int b=arr[i+1];
        int c=arr[i+2];
        if(a<b+c && b<a+c && c<a+b)
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}