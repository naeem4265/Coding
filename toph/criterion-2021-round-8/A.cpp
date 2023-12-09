#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
using namespace std;
string s[limit];
ll fr[limit][limit],ct[limit][limit],n;

ll rec(ll x,ll y)
{
    if(x==n && y==n) return 0;
    if(fr[x][y]!=-1) return fr[x][y];

    ll p=-Mod,q=-Mod;
    if(y<n)
    {
        if(s[x][y+1]!='r')
            p = rec(x,y+1);
    }
    if(x<n)
    {
        if(s[x+1][y]!='r')
            q = rec(x+1,y);
    }
    if(max(p,q)<0) return fr[x][y] = -Mod;

    if(p==q)
    {
        ct[x][y] = (ct[x+1][y]+ct[x][y+1])%Mod;
    }
    else if(p>q)
        ct[x][y] = ct[x][y+1];
    else
        ct[x][y] = ct[x+1][y];

    if(s[x][y]=='f')
        return fr[x][y] = max(p,q)+1;
    else if(s[x][y]=='.')
        return fr[x][y] = max(p,q);
    else
        return -Mod;
}

void solve(ll tc)
{
    ll i,j;
    cin >> n;
    n--;
    for(i=0; i<=n; i++)
        cin >> s[i];
    if(n==0)
    {
        cout <<0<<" "<<1<<endl;
        return;
    }
    memset(ct,0,sizeof(ct));
    memset(fr,-1,sizeof(fr));
    ct[n][n] = 1;
    if(rec(0,0)<0)
    {
        cout <<-1<<endl;
        return ;
    }
    cout <<fr[0][0]<<" "<<ct[0][0]<<endl;
    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}
