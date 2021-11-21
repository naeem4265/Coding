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

struct stc
{
    ll a,c;
};
bool operator<(stc x,stc y)
{
    if(x.a!=y.a) return x.a<y.a;
    return x.c<y.c;
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n >> m;
    ll a,b,c;
    stc from[n+5],to[n+5];
    for(i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        from[i].a = a;
        from[i].c = c;
        to[i].a = b;
        to[i].c = c;
    }
    sort(from,from+n);
    sort(to,to+n);
    ll ans=0,t=0,len,d=from[0].a-1;
    for(i=0,j=0; i<n; )
    {
        for(; j<n; )
        {
            if(to[j].a>=from[i].a) break;
            len = to[j].a-d;
            d = to[j].a;
            ans += len*min(t,m);
            for(k=j; k<n; k++)
            {
                if(to[j].a<to[k].a) break;
                t -= to[k].c;
            }
            j = k;
        }             //cout <<i<<" up "<<to[j].a<<" "<<ans<<endl;
        len = from[i].a-d-1;
        ans += len*min(t,m);
        for(k=i; k<n; k++)
        {
            if(from[i].a<from[k].a) break;
            t += from[k].c;
        }
        d = from[i].a;
        ans += min(t,m);    //cout <<i<<" dn "<<from[i].a<<" "<<ans<<endl;
        i = k;
    }
    for(; j<n; )
    {
        len = to[j].a-d;
        d = to[j].a;
        ans += len*min(t,m);
        for(k=j; k<n; k++)
        {
            if(to[j].a<to[k].a) break;
            t -= to[k].c;
        }
        j = k;
    }
    cout <<ans<<endl;
    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

