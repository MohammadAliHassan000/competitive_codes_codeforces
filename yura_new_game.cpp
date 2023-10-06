#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            if(s[0]=='^')
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
            
        }
        else
        {
            int count = 0;
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == '_' && s[i - 1] == '_')
                {
                    s.insert(i, "^");
                    count++;
                }
            }
            if (s[0] == '_')
            {
                s.insert(0, "^");
                count++;
            }
            if (s[s.size() - 1] == '_')
            {
                s.insert(s.size(), "^");
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}
// ^___^_^^^_^___^