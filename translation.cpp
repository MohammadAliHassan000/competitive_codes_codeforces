#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s>>t;
    int i=0;
    int j=s.size()-1;
    int flag=0;
    while(i<s.size())
    {
        if(s[i]!=t[j])
        {
            flag=1;
            cout<<"NO"<<endl;
            break;
        }
        i++;
        j--;
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }

    return 0;
}