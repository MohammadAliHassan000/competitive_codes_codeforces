#include <bits/stdc++.h>
using namespace std;

    main(){
    long long  n;
    cin>>n;
    long long  ne,no;
    if(n%2==0)
    {
        ne=n/2;
        no=n/2;
    }
    else
    {
        no=(n/2)+1;
        ne=n/2;
    }
    long long  se=ne*(ne+1);
    long long  so=no*no;
    cout<<se-so<<endl;
    return 0;
}