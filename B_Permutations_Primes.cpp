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

void reverse(vInt &v){
     int n=v.size();
     int start = 0 , end = n-1;
     while(start < end){
          int temp = v[start];
          v[start] = v[end];
          v[end] = temp;
          start += 1;
          end -= 1;
     }
}

bool isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vInt v(n);
    vInt prime;
    vInt com;
    for(int i=1;i<=n;i++)
    {
        if(isPrime(i))
        {
            prime.push_back(i);
        }
        else com.push_back(i);
    }
    int a=0;
    int b=n-1;
    reverse(prime);
    reverse(com);
    int chance=0;
    for(int i=0;i<prime.size();i++)
    {
        v[a]=prime[i];
        a++;
        chance=1;
        i++;
        if(i<prime.size())
        {
            v[b]=prime[i];
            b--;
            chance=0;
        }
        
    }
    // for(int i=0;i<n;i++)cout<<v[i]<<" ";
    // cout<<endl;
    for(int i=0;i<com.size();i++)
    {
        if(chance==0)
        {
            v[a]=com[i];
            a++;
            i++;
            if(i<com.size())
            {
                v[b]=com[i];
                b--;
            }
        }
        else 
        {
            
            if(i<com.size())
            {
                v[b]=com[i];
                b--;
                i++;
            }
            if(i<com.size())
            {
                v[a]=com[i];
                a++;
            }
            
        }
        
        
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;

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