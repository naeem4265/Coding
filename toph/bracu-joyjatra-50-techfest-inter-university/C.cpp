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
    string s;
    cin >> n >> k;
    ll D[n+5];
    for(i=1; i<=n; i++) cin >> D[i];
    vector<pair<ll,ll> >v;
    for(i=2; i<=n; i++)
    {
        if(k==0) break;
        if(D[i]==i && D[i-1]==(i-1))
        {
            v.pb(mp(i-1,i));
            swap(D[i],D[i-1]);
            k--;
        }
    }
    for(i=1; i<n; i++)
    {
        if(k==0) break;
        if(D[i]==i)
        {
            v.pb(mp(i,i+1));
            swap(D[i],D[i+1]);
            k--;
        }
    }
    if(D[n]==n && k)
        v.pb(mp(n,n-1));
    m = v.size();
    cout << m <<endl;
    for(i=0; i<m; i++)
    {
        cout <<v[i].first<<" "<<v[i].second<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
