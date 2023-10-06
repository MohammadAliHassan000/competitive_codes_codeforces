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
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    if (s1 == s2)
    {
        cout << 0 << endl;
    }
    else
    {
        int n1 = s1.size();
        int n2 = s2.size();
        int res = (max(n1, n2) - 2) * 9;
        int a = int(s1[0] - '0');
        int b = int(s1[n1 - 1] - '0');
        int c = int(s2[0] - '0');
        int d = int(s2[n2 - 1] - '0');
        int e = int(s1[n2 - 2] - '0');
        int f = int(s2[n2 - 2] - '0');
        // cout<<res<<endl;
        if (e != f)
        {
            res += abs(a - c);
            res += max(b,d);
        }
        else
        {
            res += abs(a - c);
            res += abs(b - d);
        }

        cout << res << endl;
    }
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