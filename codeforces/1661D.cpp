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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<n; i++)   cin >> d[i];
    ll ace=0,bad=0,need,taken[n+5], ans=0,left;
    for(i=n-1; i>=0; i--)
    {
        left = min(i+1, k);
        ace -= bad;
        need = max(0LL,d[i]-ace);
        taken[i] = need/left;
        if(need%left)
            taken[i]++;
        ace += taken[i]*left;
        bad += taken[i];
        ans += taken[i];     //cout <<i<<" "<<d[i]<<" "<<ace<<" "<<bad<<" "<<taken[i]<<endl;
        if((i+k)<n)
        {
            bad -= taken[i+k];
        }
    }
    cout << ans <<endl;

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
        solve(t);
    return 0;
}
