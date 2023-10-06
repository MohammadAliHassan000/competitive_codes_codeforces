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
        vector<int> v;
        if (n % 2 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int a = n;
            
            while (a > 3)
            {
                if (((a + 1) / 2) % 2 == 0)
                {
                    v.push_back(2);

                    a = (a - 1) / 2;
                    
                }
                if (((a - 1) / 2) % 2 == 0)
                {
                    v.push_back(1);
                    a = (a + 1) / 2;
                }
            }
            v.push_back(2);
            reverse(v.begin(), v.end());
            cout << v.size() << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}