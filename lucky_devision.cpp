#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v={444,447,474,477,744,747,774,777,44,47,77,74,4,7};
    int flag=0;
    for(int i=0;i<14;i++)
    {
        if(n%v[i]==0)
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}