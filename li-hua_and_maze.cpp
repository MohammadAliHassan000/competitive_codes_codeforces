#include <bits/stdc++.h>
using namespace std;
long long helper(long long x1,long long y1,long long m,long long n)
{
    long long count=0;
        if(x1-1>0 )
        {

            count++;
        }
        if(y1+1<=m )
        {
            count++;
        }
        if(x1+1<=n )
        {
            count++;
        }
        if(y1-1>0 )
        {
            count++;
        }
        return count;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<min(helper(x1,y1,m,n),helper(x2,y2,m,n))<<endl;
    }
    return 0;
}