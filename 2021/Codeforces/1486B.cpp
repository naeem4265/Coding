#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll n,x[limit],y[limit];

ll d(ll X,ll Y)
{
    ll sum=0,i;
    for(i=0; i<n; i++)
    {
        sum += abs(X-x[i])+abs(Y-y[i]);
    }
    return sum;
}

void solve(int t)
{
    ll i,j,X=0,Y=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
        X+= x[i];
        Y+= y[i];
    }
    X = X/n;
    Y = Y/n;
    vector<ll>dis;
    dis.pb(d(X,Y));
    dis.pb(d(X-1,Y));
    dis.pb(d(X-2,Y));
    dis.pb(d(X-2,Y-1));
    dis.pb(d(X-2,Y+1));

    dis.pb(d(X-1,Y-1));

    dis.pb(d(X,Y-1));
    dis.pb(d(X,Y-2));
    dis.pb(d(X-1,Y-2));
    dis.pb(d(X+1,Y-2));

    dis.pb(d(X+1,Y-1));

    dis.pb(d(X+1,Y));
    dis.pb(d(X+2,Y));
    dis.pb(d(X+2,Y+1));
    dis.pb(d(X+2,Y-1));

    dis.pb(d(X+1,Y+1));

    dis.pb(d(X,Y+1));
    dis.pb(d(X,Y+2));
    dis.pb(d(X-1,Y+2));
    dis.pb(d(X+1,Y+2));

    dis.pb(d(X-1,Y+1));

    sort(dis.begin(),dis.end());
    ll ans = 1;
    for(i=1; i<dis.size(); i++)
    {
        if(dis[i]==dis[0]) ans++;
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
