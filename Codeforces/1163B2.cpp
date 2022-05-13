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
#define limit 100008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll mn = 1e18, mx = 0, ans = 1,d, fre[limit], freoffre[limit];
    memset(fre, 0, sizeof(fre));
    memset(freoffre, 0, sizeof(freoffre));

    for(i=1; i<=n; i++)
    {
        cin >> d;
        if( fre[d] == 0 )
            mn = 1;
        freoffre[fre[d]]--;

        fre[d]++;
        freoffre[fre[d]]++;

        if( freoffre[mn]<=0)
            mn++;
        if( fre[d] > mx )
            mx = fre[d];
        if(mx==i || mx==1)
            ans = i;

        d = freoffre[mn]*mn + freoffre[mx]*mx;

        if( d!=i ) continue;

        if( (mx-1==mn && freoffre[mx]==1) || (mn==1 && freoffre[mn]==1))
            ans = i;
            //cout <<i<<" "<<ans<<endl;
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

