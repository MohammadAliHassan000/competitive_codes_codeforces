#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    
    int x=(n/m)*b;
    int z=(n%m)*a;
    int s=min(x+z,x+b);
    cout<<min(s,a*n);
    
    return 0;
}