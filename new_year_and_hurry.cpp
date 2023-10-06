#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int timeL=240-k;
    int sum=0;
    int i;
    for(i=1;i<=n;i++)
    {
        if(sum+5*i>timeL)
        {
            break;
        }
        sum+=5*i;
    }
    cout<<min((i-1),n)<<endl;
    return 0;
}