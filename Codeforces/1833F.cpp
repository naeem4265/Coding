#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;
map<ll,ll> mp;

ll bigmod(ll b,ll p,ll M)
{
    ll ans=1;
    b=(b+M)%M;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%M;
        b = (b*b)%M;
        p = p/2;
    }
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m;
    ll d[n+5];
    mp.clear();

    for(i=0; i<n; i++)
    {
        cin >> d[i];
        mp[d[i]]++;
    }
    sort(d, d+n);
    d[n] = Mod;
    mp[Mod] = 1;

    ll dif = 1, ans = 0, temp=mp[d[0]];
    for(i=1; i<=n; i++)
    {
        if(d[i]!=d[i-1])
        {
            dif++;
            if(dif>m)
            {
                dif--;
                ans = (ans+temp)%Mod;
                temp = (temp*bigmod(mp[d[i]-m], Mod-2, Mod))%Mod;
            }
            temp = (temp*mp[d[i]])%Mod;
        }
        if((d[i]-d[i-1])>1)
        {
            dif = 1;
            temp = mp[d[i]];
        }  //cout <<i<<" "<<dif<<" "<<temp<<" "<<ans<<endl;
    }
    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

