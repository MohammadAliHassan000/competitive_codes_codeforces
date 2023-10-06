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

    int count=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1])
        {
            swap(arr[i],arr[i-1]);
            i--;
        }
        else if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            i--;
        }
        else 
        {
            i++;
            count++;
        }

    }
    cout<<count<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}