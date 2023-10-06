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
        if (n == 2)
        {
            cout << -1 << endl;
        }
        else if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {

            int i = 1;
            int j = 0;
            int flag = 0;
            int x;
            if (n % 2 == 0)
            {
                x = n * n;
            }
            else
            {
                x = (n * n) - 1;
            }
            while (i != x + 2)
            {
                cout << i << " ";
                j++;
                if (j % n == 0 && i != 1)
                {
                    cout << endl;
                }

                if (n % 2 == 0 && flag == 0)
                {
                    if (i == (n * n) - 1)
                    {
                        i = 2;
                        flag = 1;
                        i = i - 2;
                    }
                }
                else if (n % 2 != 0 && flag == 0)
                {
                    if (i == (n * n))
                    {
                        i = 2;
                        flag = 1;
                        i = i - 2;
                    }
                }
                i = i + 2;
            }
        }
    }
    return 0;
}