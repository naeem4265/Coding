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
    string s,t;
    cin >> n;
    cin >> s >> t;
    if(s==t)
    {
        cout <<0<<endl;
        return ;
    }

    ll ct=0,zero=0,one=0;
    ll ans=1e18;

    bool ok=1;
    for(i=0; i<n; i++)
    {
        if(s[i]==t[i])
        {
            ct++;
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
    }     //cout <<ct<<" "<<zero<<" "<<one<<endl;
    if(ct&1 && (one-1)==zero)
    {
        ans = ct;
        ok = 0;
    }
    if(ct==1 && one)
    {
        ans = 1;
        ok = 0;
    }

    ct = 0; zero=0; one=0;
    for(i=0; i<n; i++)
    {
        if(s[i]!=t[i])
        {
            ct++;
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
    }
    if(ct%2==0 && one==zero)
    {
        ans = min(ans,ct);
        ok = 0;
    }

    if(ok)  ans = -1;
    cout << ans <<endl;
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
