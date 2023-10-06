#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=2;i<=20;i++)
    {
        int j=i;
        while(j<=i*10)
        {
            cout<<j<<" ";
            j+=i/2;
        }
        cout<<endl;
        i++;
    }
    return 0;
}