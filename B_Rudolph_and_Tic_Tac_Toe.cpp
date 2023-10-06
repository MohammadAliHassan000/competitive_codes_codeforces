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
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2>>s3;
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // cout<<s3<<endl;
 
    if(s1[0]==s2[0] && s2[0]==s3[0])
    {
        // cout<<"here1"<<endl;
        if(s1[0]!='.')cout<<s1[0]<<endl;
        else cout<<"DRAW"<<endl;
    }
    else if(s1[1]==s2[1] && s2[1]==s3[1])
    {
        // cout<<"here2"<<endl;
        if(s1[1]!='.')cout<<s1[1]<<endl;
        else cout<<"DRAW"<<endl;
    }
    else if(s1[2]==s2[2] && s2[2]==s3[2])
    {
        // cout<<"here3"<<endl; 
        if(s1[2]!='.')cout<<s1[2]<<endl;
        else cout<<"DRAW"<<endl;
    }
    else if(s1[0]==s1[1] && s1[1]==s1[2])
    {
        // cout<<"here4"<<endl;
        if(s1[0]!='.')cout<<s1[0]<<endl;
        else cout<<"DRAW"<<endl;
    }
    else if(s2[0]==s2[1] && s2[1]==s2[2])
    {
        // cout<<"here5"<<endl;
        if(s2[0]!='.')cout<<s2[0]<<endl;
        else cout<<"DRAW"<<endl;
    }
    else if(s3[0]==s3[1] && s3[1]==s3[2])
    {
        // cout<<"here6"<<endl;
        if(s3[0]!='.')cout<<s3[0]<<endl;
        else cout<<"DRAW"<<endl;
    }
    
    else if(s1[0]==s2[1] && s2[1]==s3[2])
    {
        // cout<<"here7"<<endl;
        if(s1[0]!='.')cout<<s1[0]<<endl;
        else cout<<"DRAW"<<endl;
    }
    else if(s1[2]==s2[1] && s2[1]==s3[0])
    {
        // cout<<"here8"<<endl;
        if(s3[0]!='.')cout<<s3[0]<<endl;
        else cout<<"DRAW"<<endl;
    }
 
    else 
    {
        // cout<<"here9"<<endl;
        cout<<"DRAW"<<endl;
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