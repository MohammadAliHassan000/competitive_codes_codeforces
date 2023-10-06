#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int res=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp<=h)
        {
            res+=1;
        }
        else 
        {
            res+=2;
        }
    }
    cout<<res<<endl;
    return 0;
}