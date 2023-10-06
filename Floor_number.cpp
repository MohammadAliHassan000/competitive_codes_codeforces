#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n<=2)
        {
            cout<<1<<endl;
        }
        else
        {
            float temp=((n-2)*1.0)/x;
            cout<<ceil(temp)+1<<endl;
        }
    }
    return 0;
}