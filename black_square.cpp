#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int n=s.length();
    int result=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            result+=a;
        }
        else if(s[i]=='2')
        {
            result+=b;
        }
        else if(s[i]=='3')
        {
            result+=c;
        }
        else if(s[i]=='4')
        {
            result+=d;
        }
    }
    cout<<result;
    return 0;
}