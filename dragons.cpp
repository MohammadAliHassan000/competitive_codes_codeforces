#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    
    int health[n];
    int bonus[n];
    for(int i=0;i<n;i++)
    {
        cin>>health[i]>>bonus[i];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        pair<int ,int> p=make_pair(health[i],bonus[i]);
        v.push_back(p);
    }
    sort(v.begin(),v.end());

    
    vector<pair<int,int>>::iterator it;
    int flag=0;
    for(it=v.begin();it!=v.end();it++)
    {
        // cout<<(*it).first<<" "<<(*it).second<<endl;
        // cout<<"it= "<<(*it).first<<endl;
        // cout<<"s= "<<s<<endl;
        if((*it).first>=s)
        {

            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        
        else
        {
            s+=(*it).second;
        }
        
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }

    return 0;
}