#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int flag=0;
        for(int i=0;i<n.size();i++)
        {
            if(int(n[i])%2==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<-1<<endl;
        }
        
        else if(int(n[n.size()-1])%2==0)
        {
            cout<<0<<endl;
        }
        else if(int(n[0])%2==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}