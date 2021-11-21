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
#define limit 200002
using namespace std;

ll fact[limit];

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}


void solve(ll tt)
{
    ll i,j,n,m=3,k=2,q;
    cin >> n >> m >> k;
    m--;

    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    sort(d,d+n);
    if(m==0)
    {
        cout << n <<endl;
        return ;
    }

    ll ans = 0;
    for(i=0; i<n; i++)
    {
        ll l=i+1, h=n-1,mid,r=i;
        ll x = d[i]+k;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(d[mid]>x)
                h = mid-1;
            else
            {
                l = mid+1;
                r = max(r,mid);
            }
        }
        ll ct = r-i;
        if(ct<m) continue;

        ans = (ans+(fact[ct]*bigmod((fact[m]*fact[ct-m])%Mod,Mod-2)+Mod)%Mod)%Mod;
    }
    cout << ans <<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1,i,j;
    fact[0]=1;
    for(i=1; i<limit; i++)
        fact[i] = (fact[i-1]*i)%Mod;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

