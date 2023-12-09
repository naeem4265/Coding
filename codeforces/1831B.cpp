#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;



void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll a[n+5],b[n+5], cnt[2*n+5];
    memset(cnt, 0, sizeof(cnt));

    a[0] = 0;
    ll ans = 1;
    ll ct = 1;
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        if(a[i]==a[i-1])
            ct++;
        else
            ct = 1;
        cnt[a[i]] = max(cnt[a[i]], ct);
        ans = max(ans, ct);
    }
    b[0] = 0;
    ct = 1;
    for(i=1; i<=n; i++)
    {
        cin >> b[i];
        if(b[i]==b[i-1])
            ct++;
        else
            ct = 1;
        ans = max(ans, cnt[b[i]]+ct);
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

