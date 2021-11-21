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
    ll i,j,n,m,q;
    string s;
    cin >> n >> q;
    cin >> s;
    char ch[3];
    ll ct[6][n+5];
    memset(ct,0,sizeof(ct));

    ch[0] = 'a';
    ch[1] = 'b';
    ch[2] = 'c';
    for(i=0,j=1; i<n; i++,j++)
    {
        ct[0][j] = ct[0][j-1];
        if(ch[i%3]!=s[i])
            ct[0][j] += 1;
    }

    ch[0] = 'a';
    ch[1] = 'c';
    ch[2] = 'b';
    for(i=0,j=1; i<n; i++,j++)
    {
        ct[1][j] = ct[1][j-1];
        if(ch[i%3]!=s[i])
            ct[1][j] += 1;
    }

    ch[0] = 'b';
    ch[1] = 'a';
    ch[2] = 'c';
    for(i=0,j=1; i<n; i++,j++)
    {
        ct[2][j] = ct[2][j-1];
        if(ch[i%3]!=s[i])
            ct[2][j] += 1;
    }

    ch[0] = 'b';
    ch[1] = 'c';
    ch[2] = 'a';
    for(i=0,j=1; i<n; i++,j++)
    {
        ct[3][j] = ct[3][j-1];
        if(ch[i%3]!=s[i])
            ct[3][j] += 1;
    }

    ch[0] = 'c';
    ch[1] = 'a';
    ch[2] = 'b';
    for(i=0,j=1; i<n; i++,j++)
    {
        ct[4][j] = ct[4][j-1];
        if(ch[i%3]!=s[i])
            ct[4][j] += 1;
    }

    ch[0] = 'c';
    ch[1] = 'b';
    ch[2] = 'a';
    for(i=0,j=1; i<n; i++,j++)
    {
        ct[5][j] = ct[5][j-1];
        if(ch[i%3]!=s[i])
            ct[5][j] += 1;
    }

    for(i=0; i<q; i++)
    {
        ll l,r,ans=inf;
        cin >> l >> r;
        for(j=0; j<6; j++)
        {
            ans = min(ans, ct[j][r]-ct[j][l-1]);
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
