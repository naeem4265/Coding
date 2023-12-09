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
    ll i,j,l,r;
    cin >> l >> r;
    ll ans = l,pre = 0;
    for(i=l; i<=min(r, l+100); i++)
    {
        ll m = i;
        ll mx = 0,mn = 9;
        while(m)
        {
            ll d = m%10;
            m /= 10;
            mx = max(mx, d);
            mn = min(mn, d);    // cout <<mx<<" "<<mn<<" "<<pre<<" "<<ans<<endl;
            if((mx-mn)>pre)
            {
                pre = mx - mn;
                ans = i;
            }
        }
    }
    cout <<ans <<endl;
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

