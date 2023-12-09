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

ll bigmod(ll b,ll p, ll Md)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Md;
        b = (b*b)%Md;
        p = p/2;
    }
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll b[n+5],p[n+5];
    ll numdivisor = 1, sumdivisor = 1, prodivisor=1, num = 1, subnum=1, temp=1;
    bool ok = 1;
    for(i=0; i<n; i++)
    {
        cin >> b[i] >> p[i];
        numdivisor = (numdivisor*(p[i]+1))%Mod;

        if(p[i]&1 && ok)
        {
            temp = (temp*((p[i]+1)/2))%(Mod-1);
            ok = 0;
        }
        else
            temp = (temp*(p[i]+1))%(Mod-1);

        ll x = (bigmod(b[i], p[i]+1, Mod)-1+Mod)%Mod;
        ll y = bigmod(b[i]-1, Mod-2, Mod);
        x = (x*y)%Mod;
        sumdivisor = (sumdivisor*x)%Mod;
        num = (num*bigmod(b[i], p[i], Mod))%Mod;
        subnum = (subnum*bigmod(b[i], p[i]/2, Mod))%Mod;
    }    //cout <<temp<<" "<<bigmod(2LL, Mod-3, Mod-1)<<endl;


    if(ok)
    {
        temp = (temp-1)/2;    //cout <<temp<<endl;
        prodivisor = bigmod(num, temp, Mod);
        prodivisor = (prodivisor*subnum)%Mod;
    }
    else
        prodivisor = bigmod(num, temp, Mod);
    cout <<numdivisor<<" "<<sumdivisor<<" "<<prodivisor<<endl;

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
