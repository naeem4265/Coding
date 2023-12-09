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
    ll i,j,n,m=1,k,q;
    string s;
    cin >> n >> q;
    for(; ;)
    {
        if(m>n)  break;
        m = m<<1;
    }

    m--;
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        ll ans = 0, x = m+1;
        if(m>=l)   ans++;
        for(; ;)
        {
            if(x>r)   break;
            if(x>=l)  ans++;
            if((x+m)<=r)  ans++;
            x = x<<1;
        }
        cout << ans <<endl;
    }



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
