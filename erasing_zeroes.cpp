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
        int flag=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1' && flag==0)
            {
                flag=1;
            }
            else if(s[i]=='0' && flag==1)
            {
                count++;
            }
        }
        int c2=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                c2++;
            }
            if(s[i]=='1')
            {
                break;
            }
        }
        if(count-c2<0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<count-c2<<endl;
        }
        
    }
    return 0;
}