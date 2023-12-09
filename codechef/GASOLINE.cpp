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

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll F[n+5],C;
    vector<pair<ll,ll> > d;
    for(i=0; i<n; i++)
    {
        cin >> F[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> C;
        d.pb(mp(C,F[i]));
    }
    sort(d.begin(),d.end());
    ll sum=0,ct=0;
    for(i=0; i<n; i++)
    {
        if(d[i].second+ct>n)
        {
            sum += d[i].first*(n-ct);
            break;
        }
        sum += d[i].first*d[i].second;
        ct += d[i].second;
    }
    cout <<sum<<endl;
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

