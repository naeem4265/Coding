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
    cin >> n >> q;
    ll d, cum[n+5],sum=0;
    cum[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d;
        cum[i] = cum[i-1]+d;
        sum += d;
    }
    while(q--)
    {
        ll l,r,x;
        cin >> l >> r >> x;
        ll temp = (r-l+1)*x;
        temp -= (cum[r]-cum[l-1]);
        if((sum+temp)&1)   cout <<"YES\n";
        else               cout <<"NO\n";
    }

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

