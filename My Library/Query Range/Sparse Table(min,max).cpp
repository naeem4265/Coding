#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;

ll n,d[limit];
ll stbl[limit][23];

///Sparse table. build O(n*log2(n)), query O(1).
void Sparse_build()
{
    for(ll i=0; i<n; i++)
        stbl[i][0] = d[i];

    for(ll j=1; j<22; j++)
    {
        for(ll i=0; i+(1<<j)-1 < n; i++)
        {
            stbl[i][j] = min(stbl[i][j-1], stbl[i+(1<<(j-1))][j-1]);
        }
    }
    return ;
}

ll Query(ll l, ll r)
{
    ll len = log2(r-l+1);
    return min(stbl[l][len], stbl[r-(1<<len)+1][len]);
}


void solve(ll tt)
{
    ll i,j,q;

    cin >> n;
    for(i=0; i<n; i++)
        cin >> d[i];

    Sparse_build();

    cin >> q;
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        cout << Query(l,r) <<endl;
    }

    return ;
}

///spoj RMQSQ.
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
