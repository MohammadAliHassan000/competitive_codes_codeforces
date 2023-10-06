#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string helper="abcdefghijklmnopqrstuvwxyz";
        int x=0;
        for(int i=0;i<b;i++)
        {
            cout<<helper[i];
            if(i==b-1 && n>0)
            {
                i=-1;
            }
            
            n--;
            if(n==0)
            {
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}