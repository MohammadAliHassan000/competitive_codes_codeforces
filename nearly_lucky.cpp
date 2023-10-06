#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int c1=0;
    while(n>0)
    {
        if((n%10==4 || n%10==7)  )
        {
            c1++;
        }
        
        n=n/10;
    }
    if(c1==4 || c1==7)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}