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
ll n;
string s;

void solve(ll tt)
{
    ll i,j;
    cin >> n;
    cin >> s;
    ll ans = 0;
    for(j=0; j<n; j++)
    {
        ll m=0,p=0;
        for(i=j; i<n; i++)
        {
            if(s[i]=='+')
                p++;
            else
                m++;
            if(p==m || (m>p && (m-p)%3==0))
                ans++;        //cout <<j<<" "<<i<<" "<<ans<<endl;
        }
    }
    cout << ans <<endl;

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
