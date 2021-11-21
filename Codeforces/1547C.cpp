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

void solve(ll t)
{
    ll i,j,n,m,k,p;
    string s;
    cin >> p >> n >> m;
    ll d[n+5],e[m+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    for(i=0; i<m; i++)
        cin >> e[i];
    d[n] = e[m] = inf;
    vector<ll> out;
    for(i=0,j=0,k=0; i<n+m; i++)
    {
        if(d[j]<=p)
        {
            if(d[j]==0)
                p++;
            out.pb(d[j]);
            j++;
            continue;
        }
        if(e[k]<=p)
        {
            if(e[k]==0)
                p++;
            out.pb(e[k]);
            k++;
            continue;
        }
        cout <<-1<<endl;
            return ;

    }
    for(i=0; i<out.size(); i++)
        cout <<  out[i] <<" ";
    cout << endl;
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
