#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    

    for(int i=0;i<n;i++)
    {
        
        int t1,t2,t3;
        cin>>t1;
        a+=t1;
        cin>>t2;
        b+=t2;
        cin>>t3;
        c+=t3;
    }
    if(a!=0 || b!=0 || c!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}