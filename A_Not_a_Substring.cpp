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
// typedef stack<int> stInt;
typedef queue<int> qInt;

void solve()
{
    int n;
    string s;
    cin>>s;
    n=s.size();
    if( n==2 && s[0]=='(' && s[1]==')')
    {
        cout<<"NO"<<endl;
    }
    else if(n==1)
    {
        
    }
    else
    {
        cout<<"YES"<<endl;
        if((s[0]=='(' && s[1]==')') || (s[0]==')' && s[1]=='('))
        {
            for(int i=0;i<2*n;i++)
            {
                // cout<<"here"<<endl;
                if(i<n)
                {
                    cout<<'(';
                }
                else 
                {
                    cout<<')';
                }
            }
            cout<<endl;
        }
        else
        {
            // cout<<"here1"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"()";
            }
            cout<<endl;
        }
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