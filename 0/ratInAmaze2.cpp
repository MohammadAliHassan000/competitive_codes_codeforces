//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// User function template for C++

class Solution{
    public:
    bool isSafe(int i,int j,vector<vector<int>>arr)
    {
        // cout<<"h1"<<endl;
        return(i<arr.size() && i>=0 && j>=0 && j<arr[0].size() && arr[i][j]==1);
    }
    
    void ratInMaze(vector<vector<int>>&arr,vector<string>&v,int i,int j,int n,string &s)
    {
        // cout<<"h2"<<endl;
        int vis[n][n]={0};
        if(i==n-1 && j==n-1 && arr[i][j])
        {
            // cout<<"h3"<<endl;
            v.push_back(s);
            // cout<<"here"<<endl;
            // v.push_back(make_pair(i,j));
            return ;
        }
        if(isSafe(i,j,arr)==true )
        {
            // cout<<"h4"<<endl;
            // cout<<"here"<<endl;
            // v.push_back(make_pair(i,j));
            // cout<<endl;
            if(vis[i+1][j]==0)
            {
                s.append("D");
                 ratInMaze(arr,v,i+1,j,n,s);
                // cout<<"s "<<s<<endl;
                s.pop_back();
            }
            
            if(vis[i][j+1])
            {
                s.append("R");
                 ratInMaze(arr,v,i,j+1,n,s); 
                // cout<<"s "<<s<<endl;
                s.pop_back();
            }

            if(vis[i][j-1])
            {
                s.append("L");
                 ratInMaze(arr,v,i,j-1,n,s); 
                // cout<<"s "<<s<<endl;
                s.pop_back();
            }

            if(vis[i][j-1])
            {
                s.append("U");
                 ratInMaze(arr,v,i,j-1,n,s); 
                // cout<<"s "<<s<<endl;
                s.pop_back();
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string s;
        vector<string>v;
        std::vector<std::vector<int>> visited(n, std::vector<int>(n, 0));
        ratInMaze(m,v,0,0,n,s);
        cout<<"here"<<endl;
        return v;
    }
};

    

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends