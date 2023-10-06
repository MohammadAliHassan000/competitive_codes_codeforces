#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    int n;
    cin>>n;
    
    map<string,int>m;
    while(cin>>s)
    {
        if(m[s])
        {
            cout<<s<<m[s]<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
           
        }
         m[s]++;
    }

    return 0;
}