/* Mohammad Ali Hassan    */
/* Created 07-07-23 */
 
 
#include <bits/stdc++.h>
using namespace std;
 
// /********** pre-defined keywords ******************/
 
// #define IO                      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define pb                      push_back
// #define ppb                     pop_back
// #define upper(s)                transform(s.begin(), s.end(), s.begin(), ::toupper);
// #define lower(s)                transform(s.begin(), s.end(), s.begin(), ::tolower);
// #define Imax                    pow(10,9)
// #define sz(x)                   (ll)x.size()
// #define setbits                 __builtin_popcount
// #define ff                      first
// #define ss                      second
// #define setbitsll               __builtin_popcountll
// #define mp                      make_pair
// #define all(x)                  (x).begin(),(x).end()
 
// #define unordered_map           um;
// /***************** short-hands ********************/
 
typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;
typedef vector<ll> vll;
// typedef stack<ll> stll;
// typedef queue<ll> qll;
 
void solve()
{
    ll n ;
    cin>>n;
    vll v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll sum=0;
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]>0)
        {
            sum+=v[i];
            // cout<<"here1 "<<sum<<endl;
        }
        else if(v[i]==0)
        {
            continue;
        }
        else 
        {
            while(v[i]<=0 && i<n)
            {
                sum+=abs(v[i]);
                // cout<<"here2 "<<sum<<endl;
                i++;
            }
            i--;
            count++;
        }
    }
    cout<<sum<<" "<<count<<endl;
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