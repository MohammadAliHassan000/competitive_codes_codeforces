#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n,k;
    cin>>n>>k;
    long long  temp;
    if(n%2==0)
    {
        temp=n/2;
        // cout<<"here1"<<endl;
    }
    else 
    {
        temp=n/2+1;
        // cout<<"here2"<<endl;
    }
    if(k<=temp)
    {
        cout<<1+(2*(k-1));
        // cout<<"here2"<<endl;
    }
    else 
    {
        cout<<(2*(k-temp));
        // cout<<"here2"<<endl;
    }
    return 0;
}