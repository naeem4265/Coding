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
    ll i,j,n,m,k,q;
    string s;
    ll l;
    cin >> n >> l >> k;
    ll idx[n+5], speed[n+5];
    idx[n] = l;
    for(i=0; i<n; i++)
    {
        cin >> idx[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> speed[i];
    }
    while(k--)
    {
        ll temp = -1;
        ll tempidx=n;
        for(i=1; i<n; i++)
        {
            tt = speed[i-1]*(idx[i]-idx[i-1])+speed[i]*(idx[i+1]-idx[i]);
            ll op = speed[i-1]*(idx[i+1]-idx[i-1]);
            op = tt - op;
            if(op>temp)
            {
                temp = op;
                tempidx = i;
            }
        }     //cout << i<<" "<<n<<" "<<temp<<" "<<tempidx<<endl;
        if(tempidx==n)  break;
        for(i=tempidx; i<n; i++)
        {
            idx[i] = idx[i+1];
            speed[i] = speed[i+1];
        }
        n--;
    }
    ll ans  =0;
    for(i=0; i<n; i++)
    {
        ans += speed[i]*(idx[i+1]-idx[i]);
    }
    cout << ans <<"\n";
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
