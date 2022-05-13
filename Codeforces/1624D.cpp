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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    cin >> s;
    sort(s.begin(),s.end());
    s +='*';

    ll pr=0,nonpr=0;

    for(i=1,j=0; i<=n; i++)
    {
        if(s[i]==s[i-1])    continue;
        ll len = i-j;
        pr += len/2;

        j = i;
    }

    m = pr/k;

    nonpr = n - 2LL*(m*k);   //cout <<pr<<" "<<nonpr<<" "<<m<<" "<<k<<" "<<2LL*m*k<<endl;
    if(nonpr>=k)
    {
        cout <<2LL*m+1<<endl;
    }
    else
        cout <<2LL*m<<endl;

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
        solve(t);
    return 0;
}
