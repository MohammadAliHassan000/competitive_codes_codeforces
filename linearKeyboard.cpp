#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        if (s2.size() <= 1)
        {
            cout << 0 << endl;
        }
        else
        {

            unordered_map<int, int> m;
            for (int i = 0; i < s1.size(); i++)
            {
                m[s1[i]] = i;
            }
            int result = 0;
            for (int i = 1; i < s2.size(); i++)
            {
                result+=abs(m[s2[i]]-m[s2[i-1]]);
            }
            cout<<result<<endl;
        }
    }
    return 0;
}