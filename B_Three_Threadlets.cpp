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
 
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min(a, min(b, c));
    int mx = max(a, max(b, c));
    int mid = (a + b + c) - (mn + mx);
    // cout << mn << " " << mid << " " << mx << endl;
    if(mx%mn!=0)
    {
        cout << "NO" << endl;
        // cout << "here1" << endl;
        return;
    }
    if(mid%mn!=0)
    {
        cout << "NO" << endl;
        // cout << "here2" << endl;
        return;
    }
    mx /= mn;
    mid /= mn;
    mx -= 1;
    mid -= 1;
    if(mx+mid>3)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    // cout << "here3" << endl;
}
signed main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}