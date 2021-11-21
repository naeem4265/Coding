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
    ll i,j,n,m;
    cin >> n;
    ll D[n+5];
    vector<ll> chep,out;
    for(i=0; i<n; i++)
        cin >> D[i];
    sort(D,D+n);
    m = (n-1)/2;
    for(i=0; i<m; i++)
        chep.pb(D[i]);
    i=m;
    if(n%2==0)
    {
        out.pb(D[i]);
        i++;
    }
    for(j=0; i<n; i++,j++)
    {
        out.pb(D[i]);
        if(j<m)
            out.pb(chep[j]);
    }
    ll ct=0;
    i=1;
    if(n%2==0)
    {
        i++;
    }
    for(j=0; j<m; i+=2,j++)
    {
        if(out[i]<out[i-1] && out[i]<out[i+1])
            ct++;
    }
    cout <<ct<<endl;
    for(ll v: out)
        cout <<v<<" ";
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

