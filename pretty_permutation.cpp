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
        for(int i=1;i<=n;i+=2)
        {
            cout<<i+1<<" ";
            if(i==n-2 && n%2!=0)
            {
                cout<<n<<" ";
                cout<<n-2<<" ";
                break;
            }
            cout<<i<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}