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
    ll d,w;
    cin >> n >> k >> d >> w;
    ll t[n+5];
    for(i=0; i<n; i++)
    {
        cin >> t[i];
    }
    ll ans  = 0;
    for(i=0; i<n; )
    {
        ll till = t[i]+w+d;
        ans++;
        ll ct = k;
        while(ct && i<n && t[i]<=till)
        {
            i++;
            ct--;
        }
    }
    cout << ans <<endl;
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

