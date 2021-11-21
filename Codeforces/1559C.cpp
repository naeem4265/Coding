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
#define limit 10008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;

    string s;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    if(d[1]==1)
    {
        cout << n+1 <<" ";
        for(i=1; i<=n; i++)
            cout <<i<<' ';
        cout << endl;
        return ;
    }
    if(d[n]==0)
    {
        for(i=1; i<=n+1; i++)
            cout <<i<<' ';
        cout << endl;
        return ;
    }

    bool ok=1;
    for(i=1; i<=n; i++)
    {
        cout <<i<<" ";
        if(ok && d[i]==0 && d[i+1]==1)
        {
            cout << n+1<<" ";
            ok = 0;
        }
    }
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
