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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++) cin >> d[i];
    vector<ll> v[n+5];
    for(i=0; i<n+5; i++) v[i].clear();
    v[0].pb(d[0]);
    for(i=1; i<n; i++)
    {
        for(j=0; j<v[i-1].size(); j++)
        {
            v[i].pb(v[i-1][j]);
        }
        if(d[i]==1)
        {
            v[i].pb(d[i]);
        }
        else if(d[i]==(d[i-1]+1))
        {
            v[i].pop_back();
            v[i].pb(d[i]);
        }
        else
        {
            k = v[i].size()-1;
            while(k>=0 && v[i][k]!=(d[i]-1))
            {
                v[i].pop_back();
                k--;
            }
            v[i][k] = d[i];
        }
    }
    for(i=0; i<n; i++)
    {
        cout <<v[i][0];
        for(j=1; j<v[i].size(); j++)
        {
            cout <<"."<<v[i][j];
        }
        cout << endl;
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
