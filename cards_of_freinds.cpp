#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        stack<int> s;
        int count = 0;
        s.push(w);
        s.push(h);
        if (w % 2 != 0 && h % 2 != 0)
        {
            if (n > 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            while (!(s.empty()))
            {
                if (s.top() % 2 == 0)
                {
                    int temp = s.top();
                    s.pop();
                    s.push(temp / 2);
                    s.push(temp / 2);
                    count++;
                }
                else
                {
                    s.pop();
                    count++;
                }
                if (count >= n)
                {
                    break;
                }
            }
            // cout<<count<<endl;
            if (count >= n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}