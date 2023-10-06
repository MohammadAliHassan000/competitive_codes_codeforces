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

        unordered_map<char,int>m;
        int max=0;
        for(int i=0;i<4;i++)
        {
            m[s[i]]++;
            if(max<m[s[i]])
            {
                max=m[s[i]];
            }
        }
        // cout<<max<<endl;
        if (max==1)
        {
            cout<<4<<endl;
        }
        else if(max==2)
        {
            cout<<4<<endl;
        }
        else if(max==3)
        {
            cout<<6<<endl;
        }
        else if(max==4)
        {
            cout<<-1<<endl;
        }
         
    }
    return 0;
}