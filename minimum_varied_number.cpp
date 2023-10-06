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
        if(n<9)
        {
            cout<<n<<endl;
        }
        else
        {
            n-=9;
            int x=8;
            long long res=9;
            int i=1;
            while(n>0)
            {
                if(n>x)
                {
                    res=res+x*pow(10,i);
                }
                else 
                {
                    res=res+n*pow(10,i);
                }
                
                n=n-x;
                x-=1;
                i++;
            }
            cout<<res<<endl;
        }
        
    }
    return 0;
}