#include <bits/stdc++.h>
using namespace std;
int nelement(int a)
{
    int count=0;
    while(a)
    {
        // cout<<"inside function "<<a<<endl;
        count++;
        // cout<<"count "<<count<<endl;
        a=a/10;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int psum=((x%10)-1)*10;
        // cout<<"psum "<<psum<<endl;
        int n=nelement(x);
        // cout<<"nelement "<<n<<endl;
        if(n==1)
        {
            cout<<psum+1<<endl;
        }
        else if(n==2)
        {
            cout<<psum+3<<endl;
        }
        else if(n==3)
        {
            cout<<psum+6<<endl;
        }
        if(n==4)
        {
            cout<<psum+10<<endl;
        }


    }
    return 0;
}