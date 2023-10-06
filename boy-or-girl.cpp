#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int>m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    int count=m.size();
    
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}