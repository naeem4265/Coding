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
#define limit 1008
using namespace std;

ll pr1[limit];
ll pr2[limit];
ll temp[2][limit];

ll Find1(ll u)
{
    if(pr1[u]==u) return u;
    return pr1[u] = Find1(pr1[u]);
}

ll Find2(ll u)
{
    if(pr2[u]==u) return u;
    return pr2[u] = Find2(pr2[u]);
}

void solve(ll t)
{
    ll i,j,n,m,k,u,v;
    string s;
    ll m1,m2;
    cin >> n >> m1 >> m2;

    for(i=0; i<limit; i++)
    {
        pr1[i] = pr2[i] = i;
    }

    for(i=0; i<m1; i++)
    {
        cin >> u >> v;
        pr1[Find1(u)] = Find1(v);
    }
    for(i=0; i<m2; i++)
    {
        cin >> u >> v;
        pr2[Find2(u)] = Find2(v);
    }

    ll ans = 0;

    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(pr1[Find1(i)]!=pr1[Find1(j)] && pr2[Find2(i)]!= pr2[Find2(j)])
            {
                temp[0][ans] = i;
                temp[1][ans] = j;
                ans++;

                pr1[Find1(i)] = Find1(j);
                pr2[Find2(i)] = Find2(j);
            }
        }
    }

    cout << ans << endl;
    for(i=0; i<ans; i++)
    {
        cout <<temp[0][i]<<' '<<temp[1][i]<<endl;
    }

    return ;
}
int  main()
{
//    Fast
 //   Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
