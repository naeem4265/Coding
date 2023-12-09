#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

struct st
{
    ll a,t;
};
bool operator <(st x, st y)
{
    return x.a<y.a;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    ll ans[n+5];

    st d[k+5];
    for(i=0; i<k; i++)
        cin >> d[i].a;
    for(i=0; i<k; i++)
        cin >> d[i].t;

    sort(d,d+k);
    ll mn = 1e18;
    for(i=1,j=0; i<=n; i++)
    {
        mn++;
        if(j<k && d[j].a==i)
        {
            mn = min(mn,d[j].t);
            j++;
        }
        ans[i] = mn;          //cout <<i<<" "<<j<<" "<<ans[i]<<endl;
    }
    mn = 1e18;
    for(i=n,j=k-1; i>0; i--)
    {
        mn++;
        if(j>=0 && d[j].a==i)
        {
            mn = min(mn,d[j].t);
            j--;
        }
        ans[i] = min(mn,ans[i]);
    }
    for(i=1; i<=n; i++)
        cout << ans[i] <<" ";
    cout <<endl;


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
