#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string result;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'|| s[i]=='y' || s[i]=='Y')
        {
            continue;
        }
        else
        {
            result.append(".");
            char t=tolower(s[i]);
            string x(1, t);
            result.append(x);
        }
        
    }
    cout<<result<<endl;
    return 0;
}