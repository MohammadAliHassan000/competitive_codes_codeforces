#include <bits/stdc++.h>
using namespace std;
void fibonacci(int a,int b,int n)
{
    if(n>0)
    {
        int c=a+b;
        a=b;
        b=c;
        n=n-1;
        cout<<c<<" ";
        fibonacci(a,b,n);
    }
    
}
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    fibonacci(a,b,n-2);
    return 0;
}