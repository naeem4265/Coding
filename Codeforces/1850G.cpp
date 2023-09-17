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
    cin >> n ;
    ll x[n+5], y[n+5];
    map<ll,ll> cntx, cnty, cntup, cntdn, cnt;
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
        ans += cntx[x[i]];
        cntx[x[i]]+=2;
        ans += cnty[y[i]];
        cnty[y[i]]+=2;
//        if(x[i]==0)
//        {
//            ans += cnt[y[i]];
//            cnt[y[i]]+=2;
//            cntup[y[i]]+=2;
//            cntdn[y[i]]+=2;
//            continue;
//        }
        ans += cntup[y[i]+x[i]];
        cntup[y[i]+x[i]]+=2;
        ans += cntdn[y[i]-x[i]];
        cntdn[y[i]-x[i]]+=2;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
