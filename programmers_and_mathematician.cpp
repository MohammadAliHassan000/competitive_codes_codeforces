#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if((a+b)/4>min(a,b))
        {
            cout<<min(a,b)<<endl;
        }
        else
        {
            cout<<(a+b)/4<<endl;
        }
    }
    return 0;
}