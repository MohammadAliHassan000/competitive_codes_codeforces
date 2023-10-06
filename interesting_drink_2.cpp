#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    
    int days;
    cin>>days;
    int coins[days];
    for(int i=0;i<days;i++)
    {
        cin>>coins[i];
        
    }
    sort(a1,a1+n);

    // for(int i=0;i<n;i++)
    // {
    //     cout<<a1[i]<<" ";
    // }
    // cout<<endl;

    for(int i=0;i<days;i++)
    {
        int target=coins[i];
        int count=0;
        int l=0;
        int h=n-1;
        
        if(target<a1[0])
        {
            // cout<<"here1"<<endl;
            // cout<<"i is "<<i <<endl;

            count =0;
        }
        else if(target==a1[0])
        {
            count=1;
        }
        else if(target>=a1[n-1])
        {
            count=n;
        }
        else
        {
            while(l<h)
            {
                int mid=(l+h)/2;
                if((a1[mid-1]<target && a1[mid+1]>target) )
                {
                    if(a1[mid]>target)
                    {
                        count=mid;
                        break;
                    }
                    else if(a1[mid]<target)
                    {
                        count=mid+1;
                        break;
                    }
                    else if( a1[mid+1]==target)
                    {
                        count=mid+1+1;
                        break;
                    }
                    else if( a1[mid-1]==target)
                    {
                        count=mid;
                        break;
                    }
                    else if( a1[mid]==target)
                    {
                        count=mid+1;
                        break;
                    }
                }
                if(target<a1[mid])
                {
                    h=mid;
                }
                else if(target>a1[mid])
                {
                    l=mid;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}