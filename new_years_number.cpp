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
        int x=n/10;
        int y=x/10;
        int z=y/10;
        
        if((n%10==1  || n%10==2) && ((x%10)%2==0 && x%10!=0) && (y%10==0) && (z%10)%4==0 && (z%10)!=0)
        {
            
            cout<<"YES"<<endl;   
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}