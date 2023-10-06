#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag=0;
        for(int i=1;i<(s.size()/2);i++)
        {
            if(s[i]!=s[i-1])
            {
                flag=1;
                break;
            }
        }  
        if(flag==0)
        {
            cout<<"NO"<<endl;
        } 
        else 
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}