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
vector<ll> divi,da,db;
map<ll,bool> mp;

vector<ll> get_divisor(ll x)
{
    vector<ll> d;
    for(ll i=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            d.pb(i);
            if((x/i)!=i)
                d.pb(x/i);
        }
    }
    return d;
}

void Please_AC(ll tt)
{
    ll a,b,c,d,i,j;
    cin >> a >> b >> c >> d;
    divi.clear();
    da.clear();
    db.clear();
    mp.clear();

    da = get_divisor(a);
    db = get_divisor(b);

    for(i=0; i<da.size(); i++)
    {
        for(j=0; j<db.size(); j++)
        {
            if(mp[da[i]*db[j]]==0)
            {
                divi.pb(da[i]*db[j]);
                mp[da[i]*db[j]] = 1;
            }
        }
    }

    for(i=0; i<divi.size(); i++)
    {
        ll x = a*b/divi[i];   //cout <<i<<' '<<divi[i]<<endl;
        if( ((c/divi[i])*divi[i]) > a && ((d/x)*x)>b )
        {
            cout <<(c/divi[i])*divi[i]<<" "<<(d/x)*x<<endl;
            return ;
        }
    }
    cout <<"-1 -1\n";
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
        Please_AC(t);
    return 0;
}
