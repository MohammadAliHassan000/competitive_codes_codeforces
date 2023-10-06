#include <bits/stdc++.h>
using namespace std;

bool helper(string s)
{
    char x=s[0];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=x)
        {
            return false ;
        }
    }
    return true ;
}
bool isPalindrome(string S)
        {
            string P = S;
            reverse(P.begin(), P.end());
            if (S == P)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = 0;
        int f2 = 0;
        int j = s.size() - 1;
        if(helper(s))
        {
            cout<<-1<<endl;
        }
        else if (!isPalindrome(s))
        {
            cout << s.size() << endl;
        }
        else
        {
            cout<<s.size()-1<<endl;
        }
    }
    return 0;
}