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
    ll i,j,n,m,k,q;
    string s;
    cin >> q ;
    vector<ll> leak,notleak;
    for(i=0; i<q; i++)
    {
        ll d,ok;
        char ch;
        cin >> d >> ok >> ch;
        if(ok && ch=='c')
            leak.pb(d);
        if(!ok && ch=='i')
            notleak.pb(d);
    }
    if(notleak.size()) sort(notleak.begin(),notleak.end());
    ll ans = 0;
    for(i=leak.size()-1; i>=0; i--)
    {
        ll l = 0, r = notleak.size()-1,m;
        ll ct=0,key = leak[i];
        while(l <= r)
        {
            m = (l+r)/2;
            if(key <= notleak[m])
                r = m-1;
            else
            {
                ct = m+1;
                l = m+1;
            }
        }        //cout <<i<<" "<<key << " "<<ct<<" "<<ans<<endl;
        ans += ct;
    }
    cout << ans << endl;
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
