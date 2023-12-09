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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    ll l,r,lr,rr;
    cin >> n >> l >> r;
    ll d[n+5];
    for(i=1; i<=n; i++) cin >> d[i];
    sort(d+1,d+n+1);
    ll ans = 0;
    for(i=n; i>1; i--)
    {
        lr = l-d[i];
        rr = r-d[i];
        ll low = 1,high=i-1,m;
        ll idx=0,idx2=0;
        while(low<=high)
        {
            m = (low+high)/2;
            if(d[m]<lr)
            {
                low = m+1;
                idx = m;
            }
            else
            {
                high = m-1;
            }
        }
        if(lr<=1) idx = 0;

        low = 1,high=i-1,m;
        while(low<=high)
        {
            m = (low+high)/2;
            if(d[m]>rr)
            {
                high = m-1;
            }
            else
            {
                low = m+1;
                idx2 = m;
            }
        }      //cout <<lr<<" "<<rr<<" "<<idx<<" "<<idx2<<endl;
        if(rr<=0) idx2=0;
        ans += max(0LL,idx2-idx);
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
