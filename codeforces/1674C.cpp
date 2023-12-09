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

long long int ncr[55][55];
long long int nCr(long long int n, long long int r)
{
    if(n==r) return 1;
    if(r==1) return n;
    if(ncr[n][r]) return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r-1)+nCr(n-1,r));
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s,t;
    cin >> s >> t;
    if(t.size()==1 && t[0]=='a')
    {
        cout <<1<<endl;
        return ;
    }
    for(i=0; i<t.size(); i++)
    {
        if(t[i]=='a')
        {
            cout <<-1<<endl;
            return ;
        }
    }
    n = s.size();
    m = t.size();
    ll ans = 1;
    for(i=1; i<=n; i++)
    {
        ans += nCr(n,i);
    }
    cout << ans <<endl;


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
