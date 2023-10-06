#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=0;
        for(long long i=1;i<=n/2;i++)
        {
            sum+=8*i*i;
        }
        cout<<sum<<endl;
    }
    return 0;
}