#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

ll Gcd(ll x, ll y)
{
    if(x%y==0)
        return y;
    return Gcd(y, x%y);
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll a[n+5], b[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> a[i] >> b[i];
    }
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        ans++;

        ll lo=i+1, hi=n, idx = i;
        while(lo<=hi)
        {
            bool ok = 1;
            m = (lo+hi)/2;
            ll lcm = b[i];
            for(j=i+1; j<=m; j++)
            {
                ll g = Gcd(lcm, b[j]);
                lcm = lcm*b[j]/g;
                if((lcm/b[i])>a[i])
                {
                    hi = j-1;
                    ok = 0;
                    break;
                }
            }   // cout <<i<<" here "<<ok<<" "<<lcm<<endl;
            if(ok)
            {
                for(j=i; j<=m; j++)
                {
                    if(a[j]%(lcm/b[j]))
                    {
                        ok = 0;
                        hi = m-1;
                        break;
                    }
                }
            }
            if(ok){
               lo = m+1;
               idx = m;
            }
        } //cout <<i<<" "<<idx<<" "<<ans<<endl;
        i = idx;
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1,x,y;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
