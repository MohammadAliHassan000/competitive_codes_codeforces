#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n-b>a)
    {
        cout<<b+1<<endl;
    }
    else if(n-b==a)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<n-a<<endl;
    }
    
    return 0;
}