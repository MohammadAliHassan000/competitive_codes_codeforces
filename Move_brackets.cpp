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
        string s;
        cin>>s;
        int count=0;
        int open=0;
        int close=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')
            {
                close++;
            }
            if(s[i]=='(')
            {
                open++;
            }
            if(open-close==0)
            {
                open=0;
                close=0;
            }
            if(close>0 && open==0)
            {
                count++;
                close=0;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}