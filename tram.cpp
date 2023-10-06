#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int res=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        res-=a;
        res+=b;
        if (max<res)
        {
            max=res;
        }
    }
    cout<<max<<endl;
    return 0;
}