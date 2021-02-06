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

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    n = n*2;
    ll D[n+5],ok=0;
    for(i=0; i<n; i++)
    {
        cin >> D[i];
        if(D[i]==0) ok = 1;
        if(D[i]&1) ok = 1;
        D[i] /= 2;
    }
    sort(D,D+n);
    vector<ll>vec;

    for(i=0; i<n; i+=2)
    {
        if(D[i]!=D[i+1]) ok = 1;
        if(i>1 && D[i]==D[i-1]) ok=1;
        vec.pb(D[i]);
    }
    n = vec.size();
    set<ll>st;
    ll sum = 0;
    for(i=n-1; i>=0; i--)
    {         //cout <<vec[i]<<" ";
        ll x = vec[i]-sum;
        if(x%(i+1)) ok=1;
        x = x/(i+1);
        sum += x;
        if(x<=0) ok=1;
        st.insert(x);
    }
    if(st.size()!=vec.size()) ok=1;
    if(ok)
        cout <<"NO\n";
    else
        cout <<"YES\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

