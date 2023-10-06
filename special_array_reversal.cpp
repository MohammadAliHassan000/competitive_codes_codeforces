//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        int n=str.size();
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            int x=(int)str[i];
            int y=(int)str[j];
            
            if(((x>=65 && x<=90) || (x>=97 && x<=122)) && (y>=65 && y<=90) || (y>=97 && y<=122))
            {
                swap(str[i],str[j]);
                i++;
                j--;
            }
            else if(!((x>=65 && x<=90) || (x>=97 && x<=122)))
            {
                i++;
            }
            else if(!((y>=65 && y<=90) || (y>=97 && y<=122)))
            {
                j--;
            }
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends
//@ergrhyjbdffeth#drgtr%efgh^dfg&dfgrt(olkijuhy$%^hbgfv