#include <bits/stdc++.h>
using namespace std;

int main(){
    int b,r;
    cin>>b>>r;
    
    cout<<min(b,r)<<" ";
    if(b-r>=0)
    {
        cout<<(b-r)/2<<endl;
    }
    else
    {
        cout<<(r-b)/2<<endl;
    }

    return 0;
}