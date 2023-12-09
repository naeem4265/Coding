#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll d[limit],n,k,m;

ll pos()
{
    m = k;
    ll ans=0;
    for(ll i=n-1; i>=0; i--)
    {
        if(d[i]<=0)    break;
        if(m==0)
        {
            ans += 2LL*d[i];
            m = k;
        }
        m--;
    }
    ans += d[n-1];
    return ans;
}

ll neg()
{
    m = k;
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        if(d[i]>=0)    break;
        if(m==0)
        {
            ans -= 2LL*d[i];
            m = k;
        }
        m--;
    }
    ans -= d[0];
    return ans;
}

void solve(ll tt)
{
    ll i,j;

    cin >> n >> k;
    for(i=0; i<n; i++)
        cin >> d[i];
    sort(d, d+n);

    if(d[0]>=0)
    {
        cout << pos() <<endl;
        return ;
    }
    if(d[n-1]<=0)
    {
        cout << neg() <<endl;
        return ;
    }

    ll ans = 0, temp = 0;
    ans = pos();
    ans += d[n-1];
    ans += neg();

    temp = neg();
    temp -= d[0];
    temp += pos();

    cout << min(temp, ans) <<endl;

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
