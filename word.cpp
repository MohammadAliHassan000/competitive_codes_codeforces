#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}