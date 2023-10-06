#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    sum=k*((w*(w+1))/2);
    if(sum-n>=0)
    {
        cout<<sum-n<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}