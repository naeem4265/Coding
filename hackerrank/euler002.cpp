#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,f0=0,f1=1,f,ans=0;
    cin >> n;
    while(1)
    {
        f = f0+f1;
        if(f>n)   break;
        if(f%2LL==0)  ans += f;
        f0 = f1;
        f1 = f;  
    }
    cout << ans <<endl;
}


int main()
{
    long long int tc;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}
