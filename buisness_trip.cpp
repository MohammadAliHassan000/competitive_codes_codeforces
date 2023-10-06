#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }
    if (k == 0)
    {
        cout << 0 << endl;
    }
    else
    {

        sort(arr, arr + 12);
        int count = 0;
        int sum = 0;
        int flag = 0;
        for (int i = 11; i >= 0; i--)
        {
            sum += arr[i];
            count++;
            if (sum >= k)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}