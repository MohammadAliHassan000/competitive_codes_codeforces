#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        if (k == 1)
        {
            cout <<1 << endl;
        }
        else
        {

            sort(arr, arr + k);
            int sum = 0;
            int count = 0;
            for (int i = k - 1; i >=0; i--)
            {
                int temp = sum;
                if ((temp += n - arr[i]) < n)
                {
                    sum += n - arr[i];
                    count++;
                }
                else
                {
                    break;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}