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
    vector<ll> a[n+5];
    ll mn = 1e18, idx = 0;
    for(i=0; i<n; i++)
    {
        cin >> m;
        a[i].resize(m);
        for(j=0; j<m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]<mn)
            {
                mn = a[i][j];
                idx = i;
            }
        }
    }
    ll ans = mn;
    mn = 1e18;
    for(i=0; i<n; i++)
    {
        sort(a[i].begin(), a[i].end());
        ans += a[i][1];        //cout <<i<<' '<<ans<<endl;
        if(a[i][1]<mn)  mn = a[i][1];
    }
    ans -= mn;
    cout << ans <<endl;



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
