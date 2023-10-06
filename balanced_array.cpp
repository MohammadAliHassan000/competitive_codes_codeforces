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
        int sum=0;
        int sum2=0;
        if(n==2 || ((n/2)%2)!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            
            for(int i=0;i<n/2;i++)
            {
                arr[i]=2+(2*i);
            }

            arr[n/2]=1;
            for(int i=n/2+1;i<n;i++)
            {
                arr[i]=arr[i-1]+2;
            }
            arr[n-1]=arr[n-1]+(n/2);
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }


    }
    return 0;
}