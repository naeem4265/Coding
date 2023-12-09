#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
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
    cin >> n >> k;
    ll s[n+5],p[n+5];
    s[0] = 3000; p[0]=200;
    for(i=1; i<=n; i++)
    {
        cin >> s[i] >> p[i];
    }
    ll ss=0,pp=180;

    bool ok=1;
    if(p[k]==0)
    {
        ss = s[k]+1;
        if( ss>2500 || ss>s[k-1] || (ss==s[k-1] && p[k-1]==180))
            ok = 0;
    }
    else
    {
        ss = s[k];
        if(s[k]==s[k-1] && p[k]-1==p[k-1])
            ok = 0;
        pp = p[k]-1;
    }
    if(ok)
        cout << ss <<" "<<pp<<endl;
    else
        cout <<-1<<endl;
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
