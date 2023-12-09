#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 40002
using namespace std;
ll inf = 2e18;
ll ct,sz,n;
bool ene[limit],ok;
vector<pair<ll,ll> > lst[limit];
vector<ll> g[limit];


void dfs(ll u,ll pr)
{
    ct = 0;
    if(ene[u])  ct++;
    for(ll v: g[u])
    {
        if(ene[v])  ct++;
    }
    ok = 1;
    sz = lst[pr].size();
    for(ll i=0; i<sz; i++)
    {
        if(lst[pr][i].first==ct)
        {
            lst[u].pb({lst[pr][i].first, lst[pr][i].second+1});
            ok = 0;
        }
        else
             lst[u].pb({lst[pr][i].first, lst[pr][i].second});
    }
    if(ok && ct) lst[u].pb({ct,1});

    if(ct || sz)
    {
        sort(lst[u].begin(), lst[u].end());
        reverse(lst[u].begin(), lst[u].end());
    }

    for(ll v: g[u])
    {
        if(v==pr)  continue;
        dfs(v,u);
    }
}

void Please_AC(ll tt)
{
    ll i,j,u,v,q;
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> ene[i];
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1,0);
    cin >> q;
    while(q--)
    {
        ll x,t,k;
        cin >> x >> t >> k;
        sz = lst[x].size();
        for(i=0; i<sz; i++)
        {
            //cout <<i<<" "<<t<<" "<<lst[x][i].second<<" "<<lst[x][i].first<<endl;
            if(t<=lst[x][i].second)
            {
                ll a,b,c,ans;
                a = b = lst[x][i].first;
                ll l=1,h=sqrt(inf/a)+5LL;
                while(l<=h)
                {
                    ll mid = (l+h)/2LL;
                    if((a*mid*(mid+1))/2LL>=k)
                    {
                        ans = mid;
                        h = mid-1;
                    }
                    else
                    {
                        l = mid+1;
                    }
                }
//                c = -2LL*k;
//                ans = (-b+sqrt(b*b-4LL*a*c))/(2LL*a);
//                if((a*ans*(ans+1)/2)<k)ans++;
                cout << ans <<endl;
                break;
            }
            else
                t -= lst[x][i].second;
        }
        if(i==sz)  cout <<-1<<endl;
    }

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
