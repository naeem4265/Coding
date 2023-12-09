#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    ll cnt[limit];
    memset(cnt, 0, sizeof(cnt));
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        for(j=1; j*j<=d[i]; j++)
        {
            if(d[i]%j==0)
                cnt[j]++;
        }
    }
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        ans = (ans+ bigmod(2LL, cnt[d[i]])-1)%Mod;
    }
    cout <<ans <<endl;


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
        Please_AC(t);
    return 0;
}
