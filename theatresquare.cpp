#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long  n, m, a;
    cin >> n >> m >> a;
   long long  c1= (ceil((n * 1.0) / a));
   long long  c2=ceil((m*1.0)/a);
    cout<<c1*c2;
    return 0;
}