#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int x=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            x = x^arr[i] ;
        }
        int res=x;
        // cout<<"x "<<x<<endl;
        int arr1[n];
        for(int i=0;i<n;i++)
        {
           arr1[i]=x^arr[i];
        }
        int y=0;
        for(int i=0;i<n;i++)
        {
            y=y^arr1[i];
        }
        if(y==0)
        {
            cout<<res<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
        
    }
    return 0;
}