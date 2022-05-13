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
#define limit 100000
using namespace std;

bool full[limit],half[limit];

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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    bool ok=0;
    //map<ll,bool> full,half;
    //full.clear(),half.clear();
    for(i=0; i<limit; i++)
    {
        full[i] = 0;
        half[i] = 0;
    }

    for(i=0; i<n; i++)
    {
        cin >> s;
        m = s.size();
        if(m==1)
            ok = 1;
        ll ct = 0;
        for(j=0,k=0; j<m; j++,k++)
        {
            ct += (s[j]-'a'+1)*bigmod(31,k);
        }
        full[ct] = 1;
        ct = 0;
        for(j=m-1,k=0; j>=0; j--,k++)
        {
            ct += (s[j]-'a'+1)*bigmod(31,k);
        }
        if(full[ct] || half[ct])
            ok = 1;
//        ct = 0;
//        for(j=1,k=0; j<m; j++,k++)
//        {
//            ct += (s[j]-'a'+1)*bigmod(31,k);
//        }
//        half[ct] = 1;
        ct = 0;
        for(j=0,k=0; j<m-1; j++,k++)
        {
            ct += (s[j]-'a'+1)*bigmod(31,k);
        }
        half[ct] = 1;
        ct = 0;
        for(j=m-1,k=0; j>0; j--,k++)
        {
            ct += (s[j]-'a'+1)*bigmod(31,k);
        }
        if(full[ct]==1)
            ok = 1;
        ct = 0;
//        for(j=m-2,k=0; j>=0; j--,k++)
//        {
//            ct += (s[j]-'a'+1)*bigmod(31,k);
//        }
//        if(full[ct]==1)
//            ok = 1;
    }
    if(ok)
    {
        cout <<"YES\n";
    }
    else
    {
        cout <<"NO\n";
    }
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

