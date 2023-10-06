#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=0;
    int count=0;
    int count0=0;
    int arr[n];
    for(int i=0;i<n ;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            flag=1;
            count0++;
        }
        if(arr[i]==5)
        {
            count++;
        }
    }
    if(flag==1)
    {
        if(count<9 )
        {
            cout<<0<<endl;
        }
        else
        {
            int temp=(count/9)*9;
            for(int i=0;i<temp;i++)
            {
                cout<<5;
            }
            for(int i=0;i<count0;i++)
            {
                cout<<0;
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}