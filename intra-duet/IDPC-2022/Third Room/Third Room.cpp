#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll Mod=1000000007,a,b,c;
        cin >> a >> b >> c;
        cout << (((a*b)%Mod)*c)%Mod <<endl;
    }
    return 0;
}
