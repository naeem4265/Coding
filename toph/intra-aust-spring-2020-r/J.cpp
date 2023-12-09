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
ll n1,n2,n3;
vector<ll> v1,v2,v3;

ll BS1(ll key)
{
    ll l=0,r = n1-1,m,x = -1;
    while(l<=r)
    {
        m = (l+r)/2;
        if(v1[m]>=key)
            r = m-1;
        else
        {
            x = m;
            l = m+1;
        }
    }
    return x+1;
}
ll BS3(ll key)
{
    ll l=0,r = n3-1,m,x = -1;
    while(l<=r)
    {
        m = (l+r)/2;
        if(v3[m]>=key)
            r = m-1;
        else
        {
            x = m;
            l = m+1;
        }
    }
    return x+1;
}

void solve(ll t)
{
    ll i,j;
    string s;
    cin >> n1 >> n2 >> n3;
    for(i=0; i<n1; i++)
    {
        cin >> s;
        ll ct = 0;
        ll sz = s.size();
        for(j=0; j<sz; j++)
        {
            ct = ct*26+s[j]-'a'+1;
        }
        v1.pb(ct);
    }
    for(i=0; i<n2; i++)
    {
        cin >> s;
        ll ct = 0;
        ll sz = s.size();
        for(j=0; j<sz; j++)
        {
            ct = ct*26+s[j]-'a'+1;
        }
        v2.pb(ct);
    }
    for(i=0; i<n3; i++)
    {
        cin >> s;
        ll ct = 0;
        ll sz = s.size();
        for(j=0; j<sz; j++)
        {
            ct = ct*26+s[j]-'a'+1;
        }
        v3.pb(ct);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());

    ll ans = 0;
    for(i=0; i<n2; i++)
    {
        ll key = v2[i];
        ll x,y;
        x = BS1(key);
        y = BS3(key);
        ans = (ans + (x*y)%999961 )%999961;  //cout <<i<<" "<<key<<" "<<x<<" "<<y<<" "<<ans<<endl;
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
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
