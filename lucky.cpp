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
        int x=stoi(s);
        int s1=0;
        int s2=0;
        for(int i=0;i<6;i++)
        {
            int temp=x%10;
            x=x/10;
            if(i<3)
            {
                s1+=temp;
            }
            else
            {
                s2+=temp;
            }
        }
        if(s1==s2)
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