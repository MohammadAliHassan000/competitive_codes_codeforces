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
bool isbigger(string s)
{
    for(int i=1;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    string s;
    cin>>s;
    if(isbigger(s))
    {
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
                cout<<s[i];
            }
            else
            {
                s[i]=toupper(s[i]);
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    else 
    {
        cout<<s<<endl;
    }
}
signed main()
{
    
    solve();
    return 0;
}