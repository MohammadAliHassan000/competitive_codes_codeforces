/* Mohammad Ali Hassan    */
/* Created 07-07-23 */
 
 
#include <bits/stdc++.h>
using namespace std;
 
/********** pre-defined keywords ******************/
 
#define IO                      ios_base::sync_with_stdio(false);cin.tie(Nll);cout.tie(Nll)
#define pb                      push_back
#define ppb                     pop_back
#define upper(s)                transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s)                transform(s.begin(), s.end(), s.begin(), ::tolower);
#define Imax                    pow(10,9)
#define sz(x)                   (ll)x.size()
#define setbits                 __builtin_popcount
#define ff                      first
#define ss                      second
#define setbitsll               __builtin_popcountll
#define mp                      make_pair
#define all(x)                  (x).begin(),(x).end()
 
#define unordered_map           um;
/***************** short-hands ********************/
 
typedef long long ll;
// typedef unsigned long long ll;
// typedef long double lld;
// typedef vector<ll> vll;
// typedef stack<ll> stll;
// typedef queue<ll> qll;
 
bool helper(ll i,ll n)
{
    // cout<<"n "<<n<<endl;
    ll x=i;
    i=i*(i+1)+1;
    while(i<=sqrt(n));
    {
        
        // cout<<"i "<<i<<endl;
        if(i==n)
        {
            return true;
        }
        i=(i*x)+1;
    }
    return false;
}
void solve()
{
    ll n;
    cin>>n;
    if(n<7)
    {
        cout<<"NO"<<endl;
        return;
    }
    ll h=n;
    n=n-1;
    for(ll i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            // cout<<"i b "<<i<<endl;
            // if(h%i!=0)
            // {
            //     continue;
            // }
            if(helper(i,h))
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        else continue;
    }
    cout<<"NO"<<endl;
    return ;
    
 
}
signed main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}