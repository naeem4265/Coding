#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 998244353
#define limit 200003
using namespace std;
ll a[limit], way[limit], g[limit], n, m;

ll b, ans, sz;
vector<ll> v;

void cal(ll pos, ll ct, ll x)
{
    if(pos==sz)
    {
        if(ct&1)
        {
            ans -= m/(b*x);
        }
        else
        {
            ans += m/(b*x);
        } //cout <<pos<<" "<<b<<" "<<ct<<" "<<x<<" "<<ans<<endl;
        return;
    }
    cal(pos+1, ct, x);
    cal(pos+1, ct+1, x*v[pos]);
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n >> m;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    way[0] = 1;
    g[0] = a[0];

    for(i=1; i<n; i++)
    {
        if(i>1 && a[i-1]==a[i])
        {
            way[i] = m/a[i];
            continue;
        }
        ll x = a[i-1];
        if(x%a[i])
        {
            cout <<0<<endl;
            return;
        }

        x = x/a[i];
        v.clear();
        for(j=2; j*j<=x; j++)
        {
            ll ok = 0;
            while(x%j==0)
            {
                ok = j;
                x /= j;
            }
            if(ok)  v.pb(ok);
        }
        if(x>1)
            v.pb(x);
        sz = v.size();
        ans = 0;
        b = a[i];

        cal(0, 0, 1);
                       //cout <<i<<" main "<<x<<" "<<sz<<" "<<ans<<endl;
        way[i] = ans;
    }

    ans = 1;
    for(i=0; i<n; i++)
    {
        ans = (ans*way[i])%Mod;
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

