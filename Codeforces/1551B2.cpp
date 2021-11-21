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
    ll i,j,n,m=0,k;
    string s;
    cin >> n >> k;

    ll ct[n+5],ans[n+5],d[n+5];
    memset(ct,0,sizeof(ct));
    memset(ans,0,sizeof(ans));

    for(i=0; i<n; i++)
    {
        cin >> d[i];
        ct[d[i]]++;
    }
    ll x = 0,y=0;
    m = 1;
    for(i=1; i<=n; i++)
    {
        if(ct[i]>=k) ans[i] = 1;
        if(ct[i]<k)
        {
            y += ct[i];
            ans[i] = m;
            m += ct[i];
            if(m>k) m -= k;
        }
    }
    y = (y/k);     //cout <<m<<"  naeem \n";
    x = 0;
    ll out[k+5];
    memset(out,0,sizeof(out));
    for(i=0; i<n; i++)
    {
        if(ct[d[i]]>=k)
        {
            if(ans[d[i]]>k)
                cout << 0 <<" ";
            else
                cout <<ans[d[i]]<<" ";
            ans[d[i]]++;
        }
        else
        {
            x++;
            if(out[ans[d[i]]]>=y) cout <<0<<" ";
            else
            {
                cout << ans[d[i]] <<" ";
                out[ans[d[i]]]++;
            }
            ans[d[i]]++;
            if(ans[d[i]]>k) ans[d[i]] -= k;
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
