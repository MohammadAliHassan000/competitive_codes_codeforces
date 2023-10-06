#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    unordered_map<string,int>m;
    int max=0;
    string winner;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        m[temp]++;
        if(m[temp]>max)
        {
            max=m[temp];
            winner=temp;
        }
    }
    for(auto &it:m)
    {
        if(it.second==max)
        {
            cout<<it.first<<endl;
            break;
        }
    }
    return 0;
}