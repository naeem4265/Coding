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
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    d[n] = -1;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    sort(d,d+n);
    if(d[0]==d[n-1] && d[0]==0)
    {
        for(i=1; i<=n; i++)
            cout <<i<<" ";
        cout <<endl;
        return ;
    }

    ll l=0,G=0,x=1;
    for(i=0; i<=31; i++)
    {
        ll ct=0;
        for(j=0; j<n; j++)
        {
            if(d[j]&x)
                ct++;
        }
        x = x*2LL;
        G = __gcd(G,ct);      //cout <<ct<<" "<<G<<" "<<x<<endl;
    }
    for(i=1; i<=G; i++)
    {
        if(G%i) continue;
        cout <<i<<" ";
    }
    cout <<endl;


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
