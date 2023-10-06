#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res = n / 3;
        if ((res + 1) * 1 + res * 2 == n)
        {
            if (n % 3 == 0)
            {
                cout << res << " " << res << endl;
            }
            else
            {
                cout << res + 1 << " " << res << endl;
            }
        }
        else
        {
            if (n % 3 == 0)
            {
                cout << res << " " << res << endl;
            }
            else
            {
                cout << res<< " " << res+1 << endl;
            }
        }
    }
    return 0;
}