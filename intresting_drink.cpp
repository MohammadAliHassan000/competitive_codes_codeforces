#include <bits/stdc++.h>
using namespace std;

int main(){
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
    // cout<<"out of inp loop"<<endl;

    sort(a1,a1+n);
    // cout<<"a1 sorted"<<endl;
    for(int i=0;i<days;i++)
    {
        // cout<<"here1"<<endl;
        int l=0;
        int h=n-1;
        // cout<<"n "<<n;
        int count=0;
        
        while(l<h)
        {
            if(a1[0]>coins[i])
            {
                count=1;
                break;
            }
            else
            {
                // cout<<"here2"<<endl;
                int mid=(l+h)/2;
                // cout<<"l "<<l<<endl;
                // cout<<"h "<<h<<endl;
                // cout<<"value of mid "<<mid<<endl;
                if(a1[mid-1]<coins[i] && a1[mid+1]>coins[i])
                {
                    if(a1[mid]>coins[i])
                    {
                        count=mid;
                        break;
                    }
                    else if(a1[mid]<coins[i])
                    {
                        count=mid+1;
                        break;
                    }
                    else if(a1[mid]==coins[i])
                    {
                        count=mid+1;
                    }
                }
                if(mid>coins[i])
                {
                    h=mid;
                }
                else if(mid<coins[i])
                {
                    l=mid;
                }

            }
            
        }
        cout<<count<<endl;
    }


    return 0;
}