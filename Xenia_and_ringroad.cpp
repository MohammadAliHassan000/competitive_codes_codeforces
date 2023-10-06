#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n,m;
    cin>>n>>m;
    long long arr[m];
    for(long long i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    long long house=1;
    long long time=0;
    for(long long i=0;i<m;i++)
    {
        
        if(arr[i]>house)
        {
            time+=arr[i]-house;
            house=arr[i];
        }
        else if(arr[i]<house)
        {
            time+=(n-house+1)+(arr[i]-1);
            house=arr[i];
        }
    }
    cout<<time<<endl;
    return 0;
}