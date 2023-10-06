#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int begin=pow(10,(n-1));
    int end=pow(10,n)-1;
    int flag=0;
    for(int i=begin;i<=end;i++)
    {
        if(i%t==0)
        {
            cout<<i<<endl;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }

    return 0;
}