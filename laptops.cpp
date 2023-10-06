#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // vector<pair<int,int>>v;
    // for(int i=0;i<n;i++)
    // {

    // }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b || a<b)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Poor Alex"<<endl;
    }
    else 
    {
        cout<<"Happy Alex"<<endl;
    }
    return 0;
}