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
typedef unordered_map<int,int> mInt;
typedef stack<int> stInt;
 
void solve()
{
    string s;
    cin>>s;
    cout<<s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;

}
signed main()
{
    
    solve();
    return 0;
}