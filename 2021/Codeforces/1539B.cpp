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
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> q;
    cin >> s;
    ll ct[n+4][28];
    memset(ct,0,sizeof(ct));

    for(i=0; i<26; i++)
    {
        for(j=1; j<=n; j++)
        {
            ct[j][i] = ct[j-1][i];
            if((s[j-1]-'a')==i)
                ct[j][i]++;
        }
    }

    while(q--)
    {
        ll l,r,ans = 0;
        cin >> l >> r;
        ans = r-l+1;
        for(i=1; i<26; i++)
        {
            ll len = ct[r][i]-ct[l-1][i];
            ans += len*i;
        }
        cout << ans << endl;
    }
    return ;
}
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
