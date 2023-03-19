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
    cin >> n;
    m = 2LL*n;
    ll d[m+5];
    for(i=0; i<m; i++)   cin >> d[i];
    sort(d, d+m);

    if(n==1)
    {
        cout <<d[1]-d[0] <<endl;
        return;
    }

    ll ans = 0;
    for(i=0; i<(m-1); i++)
    {
        ans += abs(d[i]+1);
    }
    ans += abs(d[m-1]-n);

    ll ct = 0;
    for(i=0; i<m; i++)
    {
        ct += abs(d[i]);
    }
    if(n&1)
        ans = ct;
    else
        ans = min(ans, ct);

    if(n<3)
    {
        ll ct = 0;
        for(i=0; i<m; i++)
        {
            ct += abs(d[i]-2);
        }
        cout <<min(ans, ct) <<endl;
        return;
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

