#include <bits/stdc++.h>
using namespace std;

long long Ndecimal(long long x)
{
    long long temp=1;
    long long i=1;
    while(temp*2<=x)
    {
        temp=pow(2,i);
        i++;
    }
    return temp;
}

int main(){
    long long x;
    cin>>x;
    int count=0;
    int t1=x;

    while(t1>=1)
    {
        int temp=Ndecimal(t1);
        t1=t1-temp;
        count++;
    }
    
    if(t1==1)
    {
        cout<<count+1<<endl;
    }
    else
    {
        cout<<count<<endl;
    }
    

    return 0;
}