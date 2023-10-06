#include <bits/stdc++.h>
using namespace std;

int main(){
    int y,w;

    cin>>y>>w;
    int num=7-max(y,w);
    // cout<<"num "<<num<<endl;
    
    int den=6;
    // cout<<"den "<<den<<endl;
    if(6%num==0)
    {
        den=6/num;
        num=1;
    }
    else if(num%2==0)
    {
        den=6/2;
        num=num/2;
    }
    else if(num%3==0)
    {
        den=6/3;
        num=num/3;
    }


    cout<<num<<"/"<<den;
    

    return 0;
}