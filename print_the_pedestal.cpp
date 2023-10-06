#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x=n/3;
        if(n%3==0)
        {
            cout<<x<<" "<<x+1<<" "<<x-1<<endl;
        }
        else if(n%3==1)
        {
            cout<<x<<" "<<x+2<<" "<<x-1<<endl;
        }
        else
        {
            cout<<x+1<<" "<<x+2<<" "<<x-1<<endl;
        }
        
    }
    return 0;
}