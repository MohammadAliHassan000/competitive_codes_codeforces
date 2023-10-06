#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(n==k || n%k==0)
        {
            cout<<1<<endl;
        }
        else if(n<k)
        {
            // cout<<"here"<<endl;
            if(k%n==0)
            {
                cout<<k/n<<endl;
            }
            else
            {
                cout<<(k/n)+1<<endl;
            }
            
        }
        else
        {
            long long x=ceil(n/(k*1.0));
            cout<<ceil((x*k)/(n*1.0))<<endl;
        }
    }
    
    
    return 0;
}