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
    ll i,j,n,m,k,x;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=2,k=n; i<=n; i++,k--)
    {
        cout <<"? ";
        for(j=1; j<n; j++)
            cout <<"1 ";
        cout <<i<<endl;
        cin >> x;
        if(x==0)
        {
            d[n] = k;
            break;
        }
    }
    if(i>n) d[n] = 1;
    for(i=1; i<=n; i++)
    {
        if(i==d[n]) continue;
        cout <<"? ";
        for(j=1; j<n; j++)
            cout <<d[n]<<" ";
        cout <<i<<endl;
        cin >> x;
        d[x] = i;
    }
    cout <<"! ";
    for(i=1; i<=n; i++)
    {
        cout <<d[i]<<" ";
    }
    cout <<endl;
    cout.flush();
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
