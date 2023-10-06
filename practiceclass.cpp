
#include <bits/stdc++.h>
using namespace std;
string getAvailableSlot(int arr[3][10])
{
    int ti,tj;
    int flag=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(arr[i][j]==0)
            {
                ti=i;
                tj=j;
                flag=1;
                break;
            }
        }
    }
    string s;
    if(ti==0)s.append("A");
    else if(ti==1)s.append("B");
    else if(ti==2)s.append("c");
    s.append(to_string(tj));
    return s;

}
int main()
{
    int two_W[3][10]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            two_W[j][i]=1;
            if(j==8 && i==1)
            {
                break;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<two_W[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<getAvailableSlot(two_W)<<endl;
    return 0;
}