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

void solve(ll t)
{
    ll i,j,n,m,k,w;
    string s;
    cin >> n >> w;
    ll ct[24];
    memset(ct,0,sizeof(ct));
    for(i=0; i<n; i++)
    {
        cin >> m;
        m = log2(m);
        ct[m]++;
    }
    ll ans = 0;
    while(1)
    {
        m = w;
        for(i=20; i>=0; i--)
        {
            ll x = log2(m);
            while(x >= i && ct[i])
            {
                m -= pow(2LL,i);
                x = log2(m);
                ct[i]--;           //cout <<ct[i]<<" "<<x<<" "<<m<<endl;
            }
        }
        ans++;
        for(i=0; i<=20; i++)
        {
            if(ct[i]) break;
        }
        if(i>20LL)
        {
            cout << ans <<endl;
            return ;
        }
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
