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
        string res;
        char c=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==c)
            {
                res+=c;
                c=s[i+1];
                i++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}