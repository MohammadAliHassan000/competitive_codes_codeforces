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
        char s1=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]<s1)
            {
                s1=s[i];
            }
        }
        // cout<<"s "<<s<<endl;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==s1)
            {
                s.erase(i,1);
                break;
            }
        }
        // cout<<"s "<<s<<endl;
        string x(1, s1);
        // cout<<"x "<<x<<endl; 
        string res=x.append(s);
        // cout<<"res "<<res<<endl;
        cout<<res<<endl;

    }
    return 0;
}