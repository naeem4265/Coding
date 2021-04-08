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
    ll a,b;
};
bool operator <(stc x, stc y)
{
    if(x.a!=y.a) return x.a<y.a;
    return x.b<y.b;
}

void solve(int t)
{
    int i,j,n,A,B;
    cin >> A >> B >> n;
    ll a[n+5],b[n+5];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> b[i];
    }
    stc st[n+5];
    for(i=0; i<n; i++)
    {
        st[i].a = a[i];
        st[i].b = b[i];
    }
    sort(st,st+n);
    ll ok=0;
    for(i=0; i<n; i++)
    {        //cout <<i<<" "<<st[i].a<<" "<<st[i].b<<endl;
        ll d = st[i].b/A;
        if(st[i].b%A) d++;
        ll x = d*st[i].a;
        if(B>=x)
        {
            B -= x;
            continue;
        }
        else
        {
            ll p = B/st[i].a;
            if(B%st[i].a) p++;
            if(p<d || i<n-1)
            {
                ok = 1;
                break;
            }
            B -= x;
        }
    }
    if(ok) cout <<"NO\n";
    else cout <<"YES\n";
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
