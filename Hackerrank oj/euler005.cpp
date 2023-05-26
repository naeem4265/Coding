#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, lcm=1,i;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        lcm = (lcm*i)/__gcd(lcm, i);
    }
    cout << lcm <<endl;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--)   solve();  
    return 0;
}
