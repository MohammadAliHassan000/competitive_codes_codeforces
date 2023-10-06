#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=1;
        int j=n;
        int flag=0;
        int s1=0;
        int s2=0;
        while(i<j)
        {
            if(flag==0)
            {
                s1+=pow(2,1)+pow(2,j);
                flag=1;
            }
            else
            {
                s2+=pow(2,i)+pow(2,j);
                flag=0;
            }
            i++;
            j--;
        }
        cout<<abs(s1-s2)<<endl;
        
        
    }
    return 0;
}