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

long long int ncr[1008][1008];
long long int nCr(long long int n, long long int r)
{
    if(n==r) return 1;
    if(r==1) return n;
    if(ncr[n][r]) return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r-1)+nCr(n-1,r))%Mod;
}

void solve(ll tc)
{
    ll i,j,n,m,k,c,a;
    cin >> n >> k;
    vector<ll>v;
    v.pb(Mod);
    v.pb(0);
    for(i=0; i<n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    m = v[k];
    c = 0;
    for(i=0; i<=k; i++)
        if(v[i]==m) break;
    c = k-i+1;
    n = 0;
    for(i=v.size()-1; i>=0; i--)
    {
        if(m==v[i]) n++;
    }         //cout <<n<<" "<<c<<endl;
    cout <<nCr(n,c)<<endl;
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

