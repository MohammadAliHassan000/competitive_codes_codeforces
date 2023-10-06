#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,m1,a;
    cin>>n1>>m1>>a;
    int n2=n1;
    int m2=m1;

    int count=0;
    while(n1>0 || m1>0 || n2>0 ||m2>0)
    {
        if(n1>a && m1>a )
        {
            count++;
            n1--;
            m1--;
        }
        
    }
    cout<<count;
    return 0;
}