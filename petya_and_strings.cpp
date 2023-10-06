#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int flag=0;
    for(int i=0;i<s1.size();i++)
    {
        s1[i]=toupper(s1[i]);
        s2[i]=toupper(s2[i]);
    }
    
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]<s2[i])
        {
            flag=1;
            cout<<-1<<endl;
            break;
        }
        else if(s1[i]>s2[i])
        {
            flag=1;
            cout<<1<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<0<<endl;
    }

    return 0;
}