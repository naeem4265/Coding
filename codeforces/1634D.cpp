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

ll query(ll i, ll j, ll k)
{
    cout <<"? "<<i<<" "<<j<<" "<<k<<endl;
    ll x;
    cin >> x;
    return x;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;

    ll a,b,c,d,rem1,rem2;
    a = query(1,2,3);
    b = query(1,2,4);
    c = query(1,3,4);
    d = query(2,3,4);
    ll mx = max({a,b,c,d});
    if(mx==min(a,b)) rem1=1, rem2=2;
    else if(mx==min(a,c)) rem1=1,  rem2=3;
    else if(mx==min(a,d)) rem1=2,  rem2=3;
    else if(mx==min(b,c)) rem1=1,  rem2=4;
    else if(mx==min(b,d)) rem1=2,  rem2=4;
    else if(mx==min(c,d)) rem1=3,  rem2=4;

    for(i=5; i<=n; i+=2)
    {
        j = i+1;
        if(i==n)
        {
            for(j=1; j<n; j++)
            {
                if(j!=rem1 && j!=rem2)
                    break;
            }
        }
        a = query(rem1, rem2, i);
        b = query(rem1, rem2, j);
        c = query(rem1, i, j);
        d = query(rem2, i, j);

        mx = max({a,b,c,d});
        if(mx==min(a,b)) rem1=rem1, rem2=rem2;
        else if(mx==min(a,c)) rem1=rem1,  rem2=i;
        else if(mx==min(a,d)) rem1=rem2,  rem2=i;
        else if(mx==min(b,c)) rem1=rem1,  rem2=j;
        else if(mx==min(b,d)) rem1=rem2,  rem2=j;
        else if(mx==min(c,d)) rem1=i,  rem2=j;
    }
    cout <<"! "<<rem1<<" "<<rem2<<endl;

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
