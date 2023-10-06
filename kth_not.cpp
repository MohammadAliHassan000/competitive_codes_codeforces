#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int temp=k;
        int res=k;
        while(temp/n>0)
        {
            res+=temp/n;
            temp=(temp/n)+(temp%n);
        }
        cout<<res<<endl;
    }
    return 0;
}