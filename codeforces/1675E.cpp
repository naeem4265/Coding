#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    cin >> s;
    ll cur = 0,r=0,l=0;
    for(i=0; i<n; i++)
    {
        ll ct = s[i]-'a';
        if(ct<=cur)  continue;
        if((ct-cur)>k)
        {
            r = ct;
            l = ct-k;
            break;
        }
        else
        {
            k -= (ct-cur);
            cur = ct;
        }
    }
    for(i=0; i<n; i++)
    {
        ll ct = s[i]-'a';
        if(ct<=cur)
            s[i] = 'a';
        else if(ct>=l && ct<=r)
            s[i] = 'a'+l;
    }
    cout << s<<endl;

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
