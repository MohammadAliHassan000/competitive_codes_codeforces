//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>> grid)
    {
        // Code here
        int n = grid[0].size();
        int m = grid.size();
        vector<vector<int>> visited(m, vector<int>(n, 0));
        vector<vector<int>> res(m, vector<int>(n, 0));
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    q.push(make_pair(make_pair(i, j), 1));
                    visited[i][j] = 1;
                }
            }
        }
        while (!q.empty())
        {
            // cout<<"here"<<endl;
            pair<int, int> p = q.front().first;
            int x = q.front().second;
            q.pop();
            vector<pair<int, int>> temp;
            temp.push_back(make_pair(p.first - 1, p.second));
            temp.push_back(make_pair(p.first, p.second - 1));
            temp.push_back(make_pair(p.first + 1, p.second));
            temp.push_back(make_pair(p.first + 1, p.second + 1));
            cout << endl;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    
                    cout << visited[i][j] << " ";
                    cout << endl;
                }
            }
            for (int a = 0; a < 4; a++)
            {
                // cout<<"here1"<<endl;
                if (temp[a].first < m && temp[a].first >= 0 && temp[a].second < n && temp[a].second >= 0 && visited[temp[a].first][temp[a].second] == 0)
                {
                    q.push(make_pair(temp[a], x + 1));
                    visited[temp[a].first][temp[a].second] = 1;
                    res[temp[a].first][temp[a].second] = x + 1;
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends