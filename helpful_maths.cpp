#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    
    int n=(s.size())/2;
    for(int i=n;i<s.size();i++)
    {
        
        if(i!=(s.size()-1))
        {
            cout<<s[i]<<"+";
           
        }
        else
        {
            cout<<s[i];
            
        }
        
    }
    cout<<endl;
    return 0;
}