/* Mohammad Ali Hassan    */
/* Created 07-07-23 */

#include <bits/stdc++.h>
using namespace std;

/********** pre-defined keywords ******************/

#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pb push_back
#define ppb pop_back
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define Imax pow(10, 9)
#define sz(x) (int)x.size()
#define setbits __builtin_popcount
#define ff first
#define ss second
#define setbitsll __builtin_popcountll
#define mp make_pair
#define all(x) (x).begin(), (x).end()

#define unordered_map um;
/***************** short-hands ********************/

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vInt;
typedef stack<int> stInt;
typedef queue<int> qInt;

void solve()
{

    ll n, k, a;
    cin >> n >> k >> a;
    ll x = n - k;
    ll s1 = ((n * (n + 1)) / 2) - ((x * (x + 1)) / 2);
    ll s2 = (k * (k + 1)) / 2;
    // cout << s1 << " " << s2 << endl;
    if (s1 < a || s2 > a)
    {
        cout << "NO" << endl;
        // cout << "here" << endl;
    }
    else
        cout << "YES" << endl;
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