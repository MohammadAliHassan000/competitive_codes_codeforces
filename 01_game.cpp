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
            cout << "NET" << endl;
        }
        else
        {

            int c0 = 0;
            int c1 = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '0')
                {
                    c0++;
                }
                else if (s[i] == '1')
                {
                    c1++;
                }
            }
            if((min(c0,c1)%2!=0) && (c0!=0) && (c1!=0) )
            {
                cout<<"DA"<<endl;
            }
            else
            {
                cout<<"NET"<<endl;
            }
        }
    }
    return 0;
}