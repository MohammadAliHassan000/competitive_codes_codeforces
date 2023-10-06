#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ne=0,no=0;
        int min=pow(10,9);
        // cout<<"min "<<min<<endl;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=min)
            {
                min=arr[i];
            }
            if(arr[i]%2==0)
            {
                ne++;
            }
            else 
            {
                no++;
            }

        }
        
        if(ne==0 || no==0)
        {
            cout<<"YES"<<endl;
        }
        else if(min%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}