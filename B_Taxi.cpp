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
    int n;
    cin>>n;
    int n1=0,n2=0,n3=0,n4=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==1)
        {
            n1++;
        }
        if(temp==2)
        {
            n2++;
        }
        if(temp==3)
        {
            n3++;
        }
        if(temp==4)
        {
            n4++;
        }
    }
    int count=0;
    count+=n4;
    n4=0;
    count+=n3;
    n1-=n3;
    n3=0;
    count+=n2/2;
    n2=n2%2;
    if(n2>0)
    {
        count++;
        n1-=2;
    }

    if(n1>0)
    {
        count+=n1/4;
        n1%=4;
    }
    if(n1>0)
    {
        count++;
    }
    cout<<count<<endl;
    
}
signed main()
{
    
    solve();
    return 0;
}