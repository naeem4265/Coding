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

struct st
{
    ll a,b;
};
bool operator<(st x,st y)
{
    if(x.a!=y.a) return x.a<y.a;
    else return x.b<y.b;
}

void solve(int t)
{
    ll i,j,n,m,k,a,b;
    cin >> n ;
    st p[n+5];
    for(i=0; i<n; i++)
    {
        cin >> a;
        p[i].a=a;
    }
    for(i=0; i<n; i++)
    {
        cin >> a;
        p[i].b=a;
    }
    sort(p,p+n);
//    for(i=0; i<n; i++)
//    {
//        cout <<p[i].a<<" "<<p[i].b<<endl;
//    }
    ll ans = 0;
    for(i=n-1; i>=0; i--)
    {
        if(p[i].a>(ans+p[i].b))
            ans += p[i].b;
        else
        {
            cout <<max(ans,p[i].a)<<endl;
            return ;
        }
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

