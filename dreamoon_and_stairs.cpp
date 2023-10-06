#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int x=(n+1)/2;
    while(x%m!=0)
    {
        x++;
    }
    if(x>n)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
    return 0;
}