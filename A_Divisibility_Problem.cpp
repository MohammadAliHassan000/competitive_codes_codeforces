/* Mohammad Ali Hassan    */
/* Created 7th June 2023 */


#include <bits/stdc++.h>
using namespace std;
// #define IO \  
//     ios_base::sync_with_stdio(false); \ 
//     cin.tie(NULL);\ 
//     cout.tie(NULL);                   
#define ll long long
#define pb push_back
#define ppb pop_back
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
    
typedef vector<int> vInt;
 
void solve()
{
    int a,b;
    cin>>a>>b;
    int x=a%b;
    if(a%b==0)
    {
        cout<<0<<endl;
    }
    else 
    {
        cout<<(((a/b)+1)*b)-a<<endl;
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