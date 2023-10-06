#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c)
        {
            cout << 1 << " " << 1 << " " << 1 << " " << endl;
        }
        else
        {

            int x = abs(a - max(a, max(b, c)));
            int y = abs(b - max(b, max(a, c)));
            int z = abs(c - max(c, max(b, a)));
            if (a == max(a, max(b, c)))
            {
                cout << x << " ";
            }
            else
            {
                cout << x + 1 << " ";
            }
            if (b == max(a, max(b, c)))
            {
                cout << y << " ";
            }
            else
            {
                cout << y + 1 << " ";
            }
            if (c == max(a, max(b, c)))
            {
                cout << z << " ";
            }
            else
            {
                cout << z + 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}