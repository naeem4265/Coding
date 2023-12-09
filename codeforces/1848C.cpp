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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5], b[n+5];
    vector<ll> v;
    for(i=0; i<n; i++)   cin >> a[i];
    for(i=0; i<n; i++)   cin >> b[i];
    for(i=0; i<n; i++)
    {
        if(a[i]==0 && b[i]==0)   continue;
        if(b[i]==0)
        {
            v.pb(0);  continue;
        }
        if(a[i]==0)
        {
            v.pb(2);  continue;
        }

        ll ans = 0;
        if(a[i]<b[i])
        {
            ans++;
            ll temp = a[i];
            a[i] = b[i];
            b[i] = b[i]-temp;
        }

        while(b[i])
        {
            ll cnt = a[i]/b[i];
            ans += cnt;
            ll temp = b[i];
            b[i] = a[i]%b[i];
            ans += max(-1+(cnt+1)/2LL, 0LL);
            if(cnt&1)
                a[i] = temp;
            else
                a[i] = b[i]+temp;
        }     // cout <<ans<<" ";
        v.pb(ans%3LL);
    }       //cout <<endl;
    sort(v.begin(), v.end());
    if(v.size() && v[0] != v[v.size()-1])   cout <<"NO\n";
    else                 cout <<"YES\n";


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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
