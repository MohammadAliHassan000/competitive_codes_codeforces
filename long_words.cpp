#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }

    
    for(int i=0;i<n;i++)
    {
        int size=v[i].size();
        string s1=v[i];

        if(size>10)
        {
            cout<<s1[0];
            cout<<size-2;
            cout<<s1[size-1];
        }
        else
        {
            cout<<s1;
        }
        cout<<endl;
        
    }

    return 0;
}