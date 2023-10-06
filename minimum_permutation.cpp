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
        int ind1;
        int ind2;
        int maxN=0;
        int maxi;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                ind1=i;
            }
            else if(arr[i]==2)
            {
                ind2=i;
            }
            if(arr[i]>maxN)
            {
                maxN=arr[i];
                maxi=i;
            }
        }
        // cout<<(ind1+1!=ind2)<<endl;
        // cout<<(ind2+1!=ind1)<<endl;
        if((maxi>ind1 && maxi<ind2) || (maxi>ind2 && maxi<ind1))
        {
            // cout<<"here1"<<endl;
            cout<<maxi+1<<" ";
            cout<<maxi+1<<endl;
        }
        
        else if(((ind1+1)!=ind2 && (ind2+1)!=ind1))
        {
            // cout<<"here2"<<endl;
            cout<<min(ind1+1+1,ind2+2)<<" ";
            cout<<maxi+1<<endl;
        }
        else
        {
            // cout<<"here3"<<endl;
            if(maxi>ind1)
            {
                // cout<<"here4"<<endl;
                cout<<(max(ind1,ind2))+1<<" ";
                cout<<maxi+1<<endl;
            }
            else 
            {
                // cout<<"here5"<<endl;
                cout<<(min(ind1,ind2))+1<<" ";
                cout<<maxi+1<<endl;
            }
        }

    }
    return 0;
}