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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d;
    ll ct = 0, ct2 = 0;
    vector<ll> v;
    for(i=1; i<=n; i++)
    {
        cin >> d;
        while(d%2==0)
        {
            ct++;
            d/=2;
        }
        d = i;
        m = 0;
        while(d%2==0)
        {
            m++;
            d/=2;
        }
        v.pb(m);
    }
    if(ct>=n)
    {
        cout <<0<<endl;
        return ;
    }
    ct = n-ct;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(i=0; i<n; i++)
    {
        ct -= v[i];
        if(ct<=0)
        {
            cout <<i+1<<endl;
            return ;
        }
    }
    cout <<-1<<endl;
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
