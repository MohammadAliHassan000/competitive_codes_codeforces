#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[4];
        int m1=0;
        int m2=0;
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        if(min(arr[2],arr[3])>arr[0] && min(arr[2],arr[3])>arr[1] || min(arr[0],arr[1])>arr[2] && min(arr[0],arr[1])>arr[3])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}