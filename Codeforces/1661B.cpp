#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
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
    scanf("%d", &n);
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        scanf("%d", &m);
        ll ans = Mod;
        for(j=0,k=m; j<100; j++,k++)
        {
            ll ct = j;
            m = k%32768;
            while(m!=0)
            {
                ct++;
                m = (m*2)%32768;   if(ct>1000)  break;   //cout <<ct<<" "<<m<<endl;
            } //cout <<k<<" "<<ct<<" "<<ans<<endl;
            ans = min(ans, ct);
        }
        printf("%d ", ans);
    }
    printf("\n");

    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
