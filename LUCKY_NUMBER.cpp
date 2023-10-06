#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int maxf = 0;
        int res = r;
        // cout<<"l"<<l<<endl;
        // cout<<"r"<<r<<endl;
        // if (l == r)
        // {
        //     cout << l << endl;
        // }
        // else
        // {
            for (int i = l; i <= min(r, l + 100); i++)
            {
                int temp = i;
                int max1 = 0, min1 = 10000001;
                while (temp > 0)
                {
                    if ((temp % 10) > max1)
                    {
                        max1 = temp % 10;
                    }
                    // cout<<"max1 "<<max1<<endl;
                    if ((temp % 10) < min1)
                    {
                        min1 = temp % 10;
                    }
                    // cout<<"min1 "<<min1<<endl;
                    temp = temp / 10;
                    // cout<<"temp"<<temp<<endl;
                }

                if (maxf < (max1 - min1))
                {
                    maxf = max1 - min1;
                    res = i;
                }
                // cout<<"maxf "<<maxf<<endl;
            }
            cout << res << endl;
        // }
    }
    return 0;
}