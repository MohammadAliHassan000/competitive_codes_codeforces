/* Mohammad Ali Hassan    */
/* Created 7th June 2023 */


#include <bits/stdc++.h>
using namespace std;
#define IO \  
    ios_base::sync_with_stdio(false); \ 
    cin.tie(NULL);\ 
    cout.tie(NULL);                   
#define ll long long
#define pb push_back
#define ppb pop_back
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
    
typedef vector<int> vInt;
 
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n==1 || m==1 || (n==2 && m==2))
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}
signed main()
{
    
    IO int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}