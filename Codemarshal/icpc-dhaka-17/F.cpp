#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    ll i,j,n,m,e,p,k,r;
    scanf("%lld %lld %lld %lld",&e,&p,&k,&r);
    ll ct=0,e2=e;
    printf("Case %d: ",t);
    if(e<=p*k)
    {
        m = e/p;
        if(e%p) m++;
        printf("%lld\n",m);
        return ;
    }
    if(p*k<=r)
    {
        printf("-1\n");
        return ;
    }
    ll ans=0;
    e -= p*k;
    n = p*k-r;
    ct = (e/n);
    if(e%n) ct++;
    ans = k*ct; //cout<<ans<<' '<<ct<<endl;
    e2 -= n*ct;
    i=0;
    while(1)
    {
        if(e2<=p*k)
        {
            m = e2/p;
            if(e2%p) m++;
            ans += m;
            break ;
        }
        e2 -= p*k;
        ans += k;     //cout <<i<<" "<<e<<endl;
        e2 += r;
        if(e2<=0) break;
    }
    printf("%lld\n",ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

