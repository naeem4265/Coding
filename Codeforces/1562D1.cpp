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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    ll q,l,r;

    cin >> n >> q;
    cin >> s;

    cin >> l >> r;

    cout <<rec(0,1,n)

    ll odd[n+5],even[n+5];
    memset(odd,0,sizeof(odd));
    memset(even,0,sizeof(even));

    for(i=1; i<=n; i++)
    {
        odd[i] = odd[i-1];
        even[i] = even[i-1];
        if(i&1)
        {
            if(s[i-1]=='+')
                odd[i]++;
            else
                odd[i]--;
        }
        else
        {
            if(s[i-1]=='+')
                even[i]++;
            else
                even[i]--;
        }
    }

    while(q--)
    {
        cin >> l >> r;
        ll len = r-l+1,od,even;

        od = odd[r] - odd[l-1];
        ev = (even[r] - even[l-1]);
        ans = od+ev;
    }

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
