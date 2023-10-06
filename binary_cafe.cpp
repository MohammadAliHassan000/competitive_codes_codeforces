#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long x=log2(n);
        if(x<k) 
        {
            cout<<n+1<<endl;
        }
        else
        {
            cout<<(int)pow(2,k)<<endl;
        }



    }
    return 0;
}