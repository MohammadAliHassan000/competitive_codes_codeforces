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
        int sum=int (s[0]-'0');
        for(int i=1;i<n;i++)
        {
            if(sum>0 && s[i]=='1')
            {
                cout<<'-';
                sum-=1;
                
            }
            else if (sum>=0 && s[i]=='0')
            {
                cout<<'+';
                
            }
            else 
            {
                
                cout<<'+';
                sum+=1;
                
            }
        }
        cout<<endl;
    }
    return 0;
}