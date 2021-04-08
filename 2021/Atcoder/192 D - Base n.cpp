#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define big 2e18
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> s ;
    cin >> k;
    ll d = 0;
    n = s.size();
    if(n==1)
    {
        if((s[0]-'0')<=k) cout <<1<<endl;
        else  cout <<0<<endl;
        return ;
    }
    for(i=0; i<n; i++)
        if((s[i]-'0')>d ) d = s[i]-'0';

    ll l=d,r=k ,ans=0;
    while(l<=r)
    {
        m = (l+r)/2;
        ll sum = 0;
        for(i=0; i<n; i++)
        {
            if(sum >= LLONG_MAX / m)
            {
                r = m-1;
                break;
            }
            sum *= m;
            sum += (s[i]-'0');
        }
        if(i==n && sum<=k)
        {
            l = m+1;
            ans = max(ans,m);
        }
        else
            r = m-1;
    }         //cout <<ans<<endl;
    cout << max(0LL,ans-d) <<endl;
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
