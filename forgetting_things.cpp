#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if((a==9 && b==1))
    {
        cout<<9<<" "<<10<<endl;
    }
    else if(b-a==1)
    {
        cout<<min(a,b)<<9<<9<<" "<<max(a,b)<<0<<0<<endl;
    }
    else if(b-a==0)
    {
        cout<<a<<1<<2<<" "<<b<<1<<3<<endl;
    }
    else 
    {
        cout<<-1<<endl;
    }
    return 0;
}