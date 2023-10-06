#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    int flag=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(count==5 && i==s.size()-2 && s[s.size()-2]==s[s.size()-1])
        {
            count++;
        }
        if(count>=6)
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
        if(s[i]==s[i+1])
        {
            count++;
           
        }
        else
        {
            count=0;
        }
        
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}