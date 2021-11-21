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
    ll ct[27][n+5],pos[27][n+5];
    memset(ct,0,sizeof(ct));
    memset(pos,0,sizeof(pos));

    for(i=0; i<n; i++)
    {
        for(j=0; j<26; j++)
        {
            ct[j][i+1] = ct[j][i];
            //pos[j][ct[j][i]] = pos[j][ct[j][i-1]];
        }
        ct[s[i]-'a'][i+1]++;
        pos[s[i]-'a'][ct[s[i]-'a'][i+1]] = i+1;
    }

    while(q--)
    {
        ll l,r,x,y;
        cin >> l >> r;
        vector<pair<ll,ll> > v;
        for(i=0; i<26; i++)
        {
            x = ct[i][l-1];
            y = pos[i][x+1];     //cout <<i<<" "<<x<<" "<<y<<endl;
            if(y==0)
                y = n+5;
            v.pb(mp(y,i));
        }
        sort(v.begin(),v.end());
        ll ans = 0;
        for(i=0; i<v.size(); i++)
        {
            x = v[i].second;        //cout <<x<<" "<<i+1<<" "<<ct[x][r]<<" "<<ct[x][l-1]<<" "<<ans<<endl;
            ans += (i+1)*(ct[x][r]-ct[x][l-1]);
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
