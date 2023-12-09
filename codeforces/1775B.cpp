#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;
ll cnt[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    vector<ll> d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> m;
        d[i].pb(m);
        for(j=0; j<m; j++)
        {
            cin >> k;
            d[i].pb(k);
            cnt[k]++;
        }
    }
    bool ok = 0;
    for(i=0; i<n; i++)
    {
        ll ct = 0;
        for(j=1; j<=d[i][0]; j++)
        {
            if(cnt[d[i][j]]>1)   ct++;
        }
        if(ct==d[i][0])
        {
            ok = 1;
        }
    }
    for(i=0; i<n; i++)
    {
        ll ct = 0;
        for(j=1; j<=d[i][0]; j++)
        {
            cnt[d[i][j]]--;
        }
    }
    if(ok)    cout <<"YES\n";
    else      cout <<"NO\n";
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

