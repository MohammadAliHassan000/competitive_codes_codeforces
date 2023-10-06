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
        int n0=0,n1=0,n2=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp%3==0)n0++;
            if(temp%3==2)n2++;
            if(temp%3==1)n1++;
        }
        n=n/3;
        int count=0;
        if(n0-n>0)
        {
            // cout<<"HERE"<<endl;
            n1+=n0-n;
            count+=abs(n0-n);
            // cout<<"COUNT "<<count<<endl;
        }
        else if(n0-n<0)
        {
            n2+(n0-n);
            count+=abs(n0-n);
        }
        if(n1-n>0)
        {
            n2+=n1-n;
            count+=abs(n1-n);
        }
        else if(n1-n<0)
        {
            n2+=(2*(n1-n));
            count+=abs(2*(n1-n));
        }
        cout<<count<<endl;

    }
    return 0;
}