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
    cin >> n  >> k;
    ll d[n+5];
    ll cum[n+5];
    cum[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        cum[i] = cum[i-1]+d[i];
    }
    ll sum[n+5];
    memset(sum,0,sizeof(sum));
    ll ct = 0;
    vector<ll> vec;
    for(i=k; i<=n; i++)
    {
        sum[i] = cum[i]-cum[i-k];
        if(sum[i]==sum[i-1] && ct<k)
            ct++;
        else
        {
            vec.pb(sum[i]);
            ct = 1;
        }
    }
    sort(vec.begin(),vec.end());
    ll mx = 0;
    for(i=1,j=0; i<vec.size(); i++)
    {
        if(vec[i]!=vec[i-1])
        {
            mx = max(mx,i-j);
            j = i;
        }
    }
    mx = max(mx, i-j);
    cout << vec.size()-mx <<endl;
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
