/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

/********** pre-defined keywords ******************/

#define IO                      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb                      push_back
#define ppb                     pop_back
#define upper(s)                transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s)                transform(s.begin(), s.end(), s.begin(), ::tolower);
#define Imax                    pow(10,9)
#define sz(x)                   (int)x.size()
#define setbits                 __builtin_popcount
#define ff                      first
#define ss                      second
#define setbitsll               __builtin_popcountll
#define mp                      make_pair
#define all(x)                  (x).begin(),(x).end()

#define unordered_map           um;
/***************** short-hands ********************/

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vInt;
typedef stack<int> stInt;
typedef queue<int> qInt;

bool helper(vInt v)
{
    int n=v.size();
    int x=min(3,n);
    int ce=0;
    int co=0;
    for(int i=0;i<x;i++)
    {
        if(v[i]%2==0)ce++;
        else co++;
    }
    if(co>ce)
    {
        return false;
    }
    else 
    {
        return true;
    }
}

void solve()
{
    int n;
    cin>>n;
    vInt v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(helper(v))
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2!=0)
            {
                cout<<i+1<<endl;
                return ;
            }
        }
    }
    else
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
            {
                cout<<i+1<<endl;
                return ;
            }
        }
    }
}
signed main()
{
    
    solve();
    return 0;
}