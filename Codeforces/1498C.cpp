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
    ll i,j,n,m,k;
    string s;
    cin >> n >> k;
    ll ct[n+5],pre[n+5];
    memset(ct,0,sizeof(ct));
    memset(pre,0,sizeof(pre));

    if(n==1 || k==1)
    {
        if(k==1) cout << 1 <<endl;
        else  cout << 2 <<endl;
        return ;
    }
    ll ans = 2;
    pre[1] = 1;
    while(k>=1)
    {
        if(k==1)
        {
            //ans = (ans + ct[1])%Mod;
            cout << ans <<endl;
            return ;
        }
        k--;

        for(i=2; i<=n; i++)
        {
            if(i==2) ct[1] = 0;
            ct[i] = (ct[i-1]+pre[i-1])%Mod;
            ans = (ans+ct[i])%Mod;
        }        // cout << k <<" akhon1 "<< ans <<endl;

        for(i=1; i<=n; i++)
            pre[i] = ct[i];

        if(k==1)
        {
            //ans = (ans + ct[n])%Mod;
            cout << ans <<endl;
            return ;
        }

        for(i=n-1; i>=1; i--)
        {
            if(i==n-1) ct[n] = 0;
            ct[i] = (ct[i+1]+pre[i+1])%Mod;
           // pre[i] = ct[i];
            ans = (ans+ct[i])%Mod;
        }           //cout << k <<" akhon2 "<< ans <<endl;
        k--;
        for(i=n; i>=1; i--)
            pre[i] = ct[i];
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
