#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        stack<int>st;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(st.top()=='(' && s[i]==')')
            {
                st.pop();
            }
            else if(st.top()=='(' && s[i]=='(')
            {
                st.pop();
            }
            else if(st.top()=='(' && s[i]=='?')
            {
                st.pop();
            }
            else if(st.top()==')')
            {
                flag=1;
                break;
            }
            else if(st.top()=='?')
            {
                st.push('(');
            }
        }
        if(flag==0 && st.empty())
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