#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int row,col;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }
    // cout<<row<<" "<<col<<endl;
    cout<<abs(3-(row+1))+abs(3-(col+1));
    return 0;
}