#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    // unordered_map<int ,int>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);

    int a=arr[0];
    int b=arr[n-1];
    int result=b-a;
    for(int i=0;i<m-n+1;i++)
    {
        result=min((arr[i+(n-1)]-arr[i]),result);
    }
    cout<<result;
    
    

    return 0;
}