#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 10008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d;
    ll cnt[limit];
    memset(cnt, 0, sizeof(cnt));
    for(i=0; i<n; i++)
    {
        cin >> d;
        cnt[d]++;
    }
    ll ans = 0,ct=0;
    for(i=0; i<limit; i++)
    {
        if(cnt[i])  ans++;
        if(cnt[i] && cnt[i]%2==0)  ct++;
    }
    if(ct&1)  ans--;
    cout <<ans<<endl;

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
        Please_AC(t);
    return 0;
}
