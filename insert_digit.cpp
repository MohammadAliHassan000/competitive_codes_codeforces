#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        
       
        cin>>n>>d;
        string s1=to_string(d);
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(d==0)
            {
                s.insert(n,s1);
                break;
            }
            if(int(s[i]-'0')<d)
            {
                s.insert(i,s1);
                flag=1;
                break;
            }
            if(i==n-1 && flag==0)
            {
                s.insert(n,s1);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}