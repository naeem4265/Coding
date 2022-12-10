#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 27;
const ll Mod = 1e9+7;
using namespace std;
ll p[limit],n,m, ans;

void rec(ll pos, ll x, bool ct)
{
	if(x>n)  return;
	if(pos==m)
	{
		if(ct)   ans += n/x;
		else     ans -= n/x;    //printf("x = %lld, ct =%lld,  ans=%lld\n", x, ct, ans);
		return;
	} 
	rec(pos+1, x, ct);
	rec(pos+1, x*p[pos], ct^1);
}

void Please_AC(ll tt)
{
    ll i,j;
    scanf("%lld", &m);
    for(i=0; i<m; i++)
    {
    	scanf("%lld", &p[i]);
    }
    scanf("%lld", &n);
    ans = n;

    rec(0, 1, 0);

    printf("%lld\n", ans);

    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}