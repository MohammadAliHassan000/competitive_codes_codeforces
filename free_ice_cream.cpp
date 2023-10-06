#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,x;
    cin>>n>>x;
    char sign[n];
    long long arr[n];
    for(long long i=0;i<n;i++)
    {
        cin>>sign[i]>>arr[i];
    }
    
    long long c=0;
    for(long long i=0;i<n;i++)
    {
        if(sign[i]=='+')
        {
            x+=arr[i];
        }
        else if(sign[i]=='-')
        {
            if(arr[i]>x)
            {
                c++;
            }
            else
            {
                x-=arr[i];
            }
        }
    }
    cout<<x<<" "<<c<<endl;
    return 0;
}