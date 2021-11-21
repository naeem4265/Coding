#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 2008
using namespace std;
ll d[limit][limit];
void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll cnt[n+5];
    memset(cnt,0,sizeof(cnt));

    for(i=0; i<n; i++)
    {
        cin >> d[0][i];
        cnt[d[0][i]]++;
    }

    for(i=1; i<=n+5; i++)
    {
        for(j=0; j<n; j++)
        {
            d[i][j] = cnt[d[i-1][j]];
        }
        for(j=0; j<=n+2; j++)
            cnt[j] = 0;
        for(j=0; j<n; j++)
            cnt[d[i][j]]++;
    }
    ll q;
    cin >> q;
    while(q--)
    {
        cin >> t >> k;
        t--;
        if(k>=n+5) k = n+5;
        cout << d[k][t] <<endl;

    }
    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
