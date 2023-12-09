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
#define limit 1000008
using namespace std;

ll pr[limit],cnt[limit];
ll Findpr(ll u)
{
    if(pr[u]==u) return u;
    return pr[u] = Findpr(pr[u]);
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    //cin >> n >> q;
    scanf("%d %d", &n, &q);

    vector<ll>v1,v2;
    for(i=0; i<=n; i++)
    {
        pr[i] = i;
        cnt[i] = 1;
        v1.pb(1);
    }

    ll ct=0;
    while(q--)
    {
        ll x,y;
        //cin >> x >> y;
        scanf("%d %d", &x, &y);

        ll u = Findpr(x);
        ll v = Findpr(y);
        if(u==v)
        {
            ct++;
        }
        else
        {
            x = cnt[u];
            y = cnt[v];
            ll sz = v1.size();
            bool okx=1,oky=1;
            v2.clear();
            for(i=0; i<sz; i++)
            {
                if(v1[i]==x && okx)
                {
                    okx=0;continue;
                }
                if(v1[i]==y && oky)
                {
                    oky = 0;continue;
                }
                v2.pb(v1[i]);
            }
            cnt[u] += cnt[v];
            pr[v] = u;
            v2.pb(cnt[u]);
            sz = v2.size();
            v1.clear();
            for(i=0; i<sz; i++)
            {
                v1.pb(v2[i]);
            }
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        ll sz = v1.size();
        if(sz<=ct) ct = sz-1;
        ll sum=0;
        for(i=0; i<=ct; i++)
        {
            x = v1[i];  //cout <<ct<<" "<<i<<" "<< -x <<" "<<sum<<endl;
            sum += x;
        }
        //cout << sum <<endl;
        printf("%d\n",sum-1);
    }
    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
