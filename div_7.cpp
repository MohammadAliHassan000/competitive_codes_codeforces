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
        int r=n%7;
        int res1=n-r;
        int f1=res1;

        int res2=n+(7-r);
        int f2=res2;
        int c1=0,c2=0;
        while(n>0)
        {
            int x=n%10;
            if(x!=res1%10)
            {
                c1++;
            }
            if(x!=res2%10)
            {
                c2++;
            }
            n=n/10;
            res1=res1/10;
            res2=res2/10;
        }
        if(c1>c2)
        {
            cout<<f2<<endl;
        }
        else 
        {
            cout<<f1<<endl;
        }

        
    }
    // cout<<377%7;
    return 0;
}