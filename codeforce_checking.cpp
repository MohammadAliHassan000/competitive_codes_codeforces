#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        int flag=0;
        string x="codeforces";
        for(int i=0;i<x.size();i++)
        {
            if(x[i]==c)
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