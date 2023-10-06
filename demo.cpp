#include<bits/stdc++.h>
using namespace std;
void solve()
{
    unsigned long long  n;
    cin >> n;
    unsigned long long  count = 1;
    for (unsigned long long  i = 2; i <= n;i++)
    {
        if(n%i==0 && i%2!=0)
        {
            ++count;
        }
    }
    if(count>1)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }


}
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}