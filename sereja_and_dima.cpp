#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int s=0;
    int d=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    int flag=0;
    while(i<=j)
    {
        if(flag==0)
        {
            if(arr[i]>arr[j])
            {
                s+=arr[i];
                i++;
            }
            else
            {
                s+=arr[j];
                j--;
            }
            flag=1;
        }
        else
        {
            if(arr[i]>arr[j])
            {
                d+=arr[i];
                i++;
            }
            else
            {
                d+=arr[j];
                j--;
            }
            flag=0;
        }
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}