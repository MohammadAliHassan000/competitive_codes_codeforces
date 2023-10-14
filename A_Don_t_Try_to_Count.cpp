
#include <bits/stdc++.h>
using namespace std;


int helper(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    if (helper(s,x) != -1)
    {
        cout << 0 << endl;
        return;
    }
    int count = 0;
    int temp = 0;
    while(temp<10 || x.size()<=m)
    {
        count++;
        x += x;
        if(helper(s,x)!=-1)
        {
            cout << count << endl;
            return;
        }
        temp++;
    }
    cout << -1 << endl;
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