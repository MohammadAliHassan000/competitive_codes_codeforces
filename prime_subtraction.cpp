#include <bits/stdc++.h>
using namespace std;
void solve()
{
     long long a,b;
        cin>>a>>b;
        
        long long x;
        x=a-b;
        // cout<<x<<endl;
        if(x==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}