#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;


void solve(ll tc)
{
    ll i,j,n,m,k,a;
    cin >> n ;
    int dis[n+5],pre[n+5];
    memset(dis,0,sizeof(dis));
    memset(pre,0,sizeof(pre));

    for(i=1; i<=n; i++)
    {
        cin >> a;
        dis[a] = max(dis[a],i-pre[a]);
        pre[a] = i;
    }
    for(i=1; i<=n; i++)
        dis[i] = max(dis[i],n+1-pre[i]);

    for(i=0; i<n+4; i++) pre[i] = Mod;

    for(i=1; i<=n; i++)
    {
        if(dis[i]>n) continue;

        pre[dis[i]] = min(pre[dis[i]],i);
    }

    int mn = Mod;
    for(i=1; i<=n; i++)
    {
        mn = min(mn,pre[i]);
        if(mn>n)
            cout <<-1<<" ";
        else
            cout <<mn<<" ";
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

