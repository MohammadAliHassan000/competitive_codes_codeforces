#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    unordered_map<string ,string>mp;
    for(int i=0;i<m;i++)
    {
        string t1;
        string t2;
        cin>>t1>>t2;
        mp[t1]=t2;
    }
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string temp;
        getline(cin, temp);
        v.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].length()<=mp[v[i]].length())
        {
            cout<<v[i]<<" ";
        }
        else
        {
            cout<<mp[v[i]];
        }
    }
    cout<<endl;
    


    return 0;
}