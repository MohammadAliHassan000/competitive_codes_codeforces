/* Mohammad Ali Hassan    */
/* Created 07-07-23 */


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int n)
{
    vector<vector<int>> final;
    vector<int> temp;
    for (int i = 0; i < n; i++) 
    {
        vector<int> v;
        for (int j = 0; j <= i; j++) 
        {
            int left = 0, right = 1;
            if (i > 0 && j > 0 && j!=i)
                {
                    left = temp[j - 1];
                }
            if (j < i && j!=i)
            {
                right = temp[j];
            }
            v.push_back(left + right);
        }
        temp = v;
        final.push_back(v);
    }

        return final;
}

int main()
{
    int n=5;
    vector<vector<int>> v = generate(5);
    for (int i = 0;i<n;i++)
    {
        for (int j = 0; j < v[i].size();j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
        return 0;
}