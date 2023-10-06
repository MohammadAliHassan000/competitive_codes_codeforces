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

/***************** short-hands ********************/

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vInt;
typedef unordered_map<int,int> umInt;
typedef stack<int> stInt;
typedef queue<int> qInt;
 
void solve()
{
    vInt arr(4);
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(all(arr));
    int count=0;
    for(int i=1;i<4;i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
signed main()
{
    
    solve();
    return 0;
}