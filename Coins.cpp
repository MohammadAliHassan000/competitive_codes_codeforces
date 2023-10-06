#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if ( n % k == 0 || n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0)
        {
            if (k % 2 != 0)
            {
                k *= 2;
            }
            if (k <= n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (k % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}