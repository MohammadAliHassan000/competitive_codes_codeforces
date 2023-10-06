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
        int x = n;
        int count = 0;
        int fin;
        while (x > 0)
        {
            if (x / 10 == 0)
            {
                // cout<<"x in "<<x<<endl;
                fin = x;
            }
            x = x / 10;
            count++;
            // cout<<"x out "<<x<<endl;
            
        }
        // cout<<"fin "<<fin<<endl;
        if (count == 1)
        {
            cout << n<<endl;;
        }
        else
        {
            int res = (count - 1) * 9;
            // cout<<"res1  "<<res<<endl;
            res += fin - 1;
            // cout<<"res2  "<<res<<endl;
            x = n;
            int num=fin;
            
            // cout<<"num "<<num<<endl;
            for(int i=1;i<count;i++)
            {
                // cout<<"fin "<<fin<<endl;
                num=num*10+fin;
                // cout<<"num "<<num<<endl;
            }
            // cout<<"num "<<num<<endl;
            if(num<=n)
            {
                cout<<res+1<<endl;
            }
            else 
            {
                cout<<res<<endl;
            }
        }
    }
    return 0;
}