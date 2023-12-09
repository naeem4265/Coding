// #pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn "\n"
#define sci(x) scanf("%d", &x)
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (!!(x & (1LL << k)))
#define mod 998244353
#define N 500005

string s;
char x[(1<<18)+10];
string z[(1<<18)+10];

void build(int l, int r, int nd = 1){
    if(l==r){
        x[nd] = s[nd-1];
        z[nd] = x[nd];
        return;
    }
    build(l, (l+r)/2, nd*2);
    build((l+r)/2+1, r, nd*2+1);

    x[nd] = s[nd-1];
    if(z[nd*2]<z[nd*2+1]){
        z[nd] = "";
        z[nd] += x[nd]+z[nd*2]+z[nd*2+1];
    }
    else {
        z[nd] = "";
        z[nd] += x[nd]+z[nd*2+1]+z[nd*2];
    }
}

ll solve(int l, int r, int nd){
    if(l==r) return 1;

    ll r1 = solve(l, (l+r)/2, nd*2);
    ll r2 = solve((l+r)/2+1, r, nd*2+1);
    // cout << nd << " : " << r1 << " --> " << r2 << nn;
    ll res;
    if(z[nd*2]==z[nd*2+1]){
        res = (r1*r2)%mod;
        // res = (mod + res - r1 + 1)%mod;
    }
    else {
        res = (2*r1*r2)%mod;
    }

    // cout << nd << " --> " << res << nn;
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    cin >> s;

    build(1, (1<<(n-1)), 1);

    cout << solve(1, (1<<(n-1)), 1) << nn;

    return 0;
}

