//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku.
    bool isSafe(vector<vector<int>>&v,int i, int j, int x,int n)
{
    
    for(int k=0;k<n;k++)
    {
        if(v[k][j]==x || v[i][k]==x)
        {
            return false;
        }
    }
    int a=sqrt(n);
    int r=i-(i%2);
    int c=j-(j%2);
    for(r;r<a;r++)
    {
        for(c;c<a;c++)
        {
            if(v[a][c]==x)
            {
                return false;
            }
        }
    }
    return true;
}

bool Solver(vector<vector<int>>&v, int n)
{
    int i;
    int j;
    int flag=0;
    for( i=0 ;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[i][j]==0)
            {
                // cout<<"here1 "<<endl;
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        {
            cout<<"hi "<<i<<" "<<j<<endl;
            break;
        }
    }
    cout<<i<<" "<<j<<endl;
    if(i==n && j==n)
    {
        cout<<"here "<<i<<" "<<j<<endl;
        return true;
    }
    // cout<<"here "<<endl;
    for(int x=1;x<=n;x++)
    {
        if(isSafe(v,i,j,x,N))
        {
            v[i][j]=x;
            // cout<<"here"<<endl;
            if(Solver(v,n))return true;
            v[i][j]=0;
        }

    }
    return false;
}
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        vector<vector<int>>v;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                v[i][j]=grid[i][j];
            }
        }
        return (Solver(v,9));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                grid[i][j]=v[i][j];
            }
        }

    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(i==8 && j==8)
                {
                    cout<<grid[i][j];
                }
                else
                {
                    cout<<grid[i][j]<<" ";
                }
                
            }
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends