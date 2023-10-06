#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i]>>arr3[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr1[i]+arr2[i]+arr3[i]>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}