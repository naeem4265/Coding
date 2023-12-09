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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5],b[n+5];
    vector<pair<ll,ll> > A,B;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        A.pb({a[i],i});
    }
    for(i=0; i<n; i++)
    {
        cin >> b[i];
        B.pb({b[i],i});
    }

    bool vis[n+5];
    memset(vis,0,sizeof(vis));

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    queue<ll> x,y;
    x.push(A[n-1].second);
    vis[A[n-1].second] = 1;
    y.push(B[n-1].second);
    vis[B[n-1].second] = 1;

    while(1)
    {
        if(x.empty() && y.empty()) break;
        while(!x.empty())
        {
            ll t = x.front();
            x.pop();
            t = b[t];
            ll l=0,h=n-1,to=n+1;
            while(l<=h)
            {
                m = (l+h)/2;
                if(B[m].first<t)
                {
                    l = m+1;
                }
                else
                {
                    h = m-1;
                    to = min(m,to);
                }
            }
            for(i=to+1; i<n; i++)
            {
                if(vis[B[i].second]==0)
                {
                    vis[B[i].second] = 1;
                    y.push(B[i].second);
                }
                else
                    break;
            }
        }
        while(!y.empty())
        {
            ll t = y.front();
            y.pop();
            t = a[t];
            ll l=0,h=n-1,to=n+1;
            while(l<=h)
            {
                m = (l+h)/2;
                if(A[m].first<t)
                {
                    l = m+1;
                }
                else
                {
                    h = m-1;
                    to = min(to,m);
                }
            }
            for(i=to+1; i<n; i++)
            {
                if(vis[A[i].second]==0)
                {
                    vis[A[i].second] = 1;
                    x.push(A[i].second);
                }
                else
                    break;
            }
        }
    }
    for(i=0; i<n; i++)
        cout <<vis[i];
    cout <<endl;
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
        solve(t);
    return 0;
}
