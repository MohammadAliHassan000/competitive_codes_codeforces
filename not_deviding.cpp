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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (k == 1)
            {
                arr[i] = k + 1;
            }
            else
            {
                arr[i] = k;
            }
        }
        int i = 0;
        int flag = 0;
        while (i < n)
        {
            if (flag == 0)
            {
                if (arr[i + 1] % arr[i] == 0)
                {
                    arr[i]++;
                }
                else
                {
                    i++;
                }
                flag=1;
            }
            else
            {
                if (arr[i + 1] % arr[i] == 0)
                {
                    arr[i+1]++;
                }
                else
                {
                    i++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}