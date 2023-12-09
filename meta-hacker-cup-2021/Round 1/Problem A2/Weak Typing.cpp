#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("weak_typing_chapter_2_input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll sum[limit],ct[limit];

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    cin >> s;

    ll ans = 0;

    for(i=0; i<n+5; i++)
    {
        sum[i] = ct[i] = 0;
    }

    ll l=-1,r=0;
    while(r<n && s[r]=='F') r++;

    for(i=r+1; i<n; i++)
    {
        if( s[i]=='F' )
        {
            sum[i] = sum[i-1];
            ct[i] = ct[i-1];     //cout <<sum[i]<<" "<<ct[i]<<" "<<ans<<endl;
            ans += sum[i];

            if(ans>=Mod)
                ans %= Mod;

            continue;
        }
        if( s[i]==s[r] )
        {
            sum[i] = sum[i-1];
            ans += sum[i];
            ct[i] = ct[i-1];

            if(ans>=Mod)
                ans %= Mod;

            r = i;
            continue;
        }
        ct[i] = ct[i-1]+r-l;
        if(ct[i]>=Mod)
            ct[i] %= Mod;

        sum[i] = sum[i-1]+ct[i];
        if(sum[i]>=Mod)
            sum[i] %= Mod;

        ans += sum[i];

        if(ans>=Mod)
            ans %= Mod;

        l = r;
        r = i;
    }
    cout <<"Case #"<<t<<": ";
    cout << ans << endl;

    return ;
}
int  main()
{
    Fast
    Freed
    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

