#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll n,m;
ll s[limit], p[limit];
///kmp pi table build O(|p|)
ll pi_tab[limit];
void build()
{
    ll now = -1;
    pi_tab[0] = -1;
    ll sz = m;
    for(ll i=1; i<sz; i++)
    {
        while( now!=-1 && p[now+1]!=p[i])
        {
            now = pi_tab[now];
        }
        if(p[now+1]==p[i])
            now++;;
        pi_tab[i] = now;
    }
}

///kmp O(|s|)
ll kmp()
{
    ll ans=0,now = -1, sz = n,szp=m;
    for(ll i=0; i<sz; i++)
    {
        while( now!=-1 && p[now+1]!=s[i])
        {
            now = pi_tab[now];
        }
        if(p[now+1]==s[i] && now<szp-1)
            now++;       //cout <<i<<" "<<now<<" "<<szp<<endl;
        if(now==szp-1)
        {
            ans++;
        }
    }
    return ans;
}


void Please_AC(ll tt)
{
    ll i,j;

    cin >> n >> m;
    ll a[n+5],b[m+5];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(i)
            s[i-1] = a[i]-a[i-1];
    }
    for(i=0; i<m; i++)
    {
        cin >> b[i];
        if(i)
            p[i-1] = b[i]-b[i-1];
    }
    n--;
    m--;
    build();
    if(!m)
    {
        cout << n+1 <<endl;
        return ;
    }
    cout << kmp() <<endl;

    return ;
}

///lightoj.com/problem/substring-frequency
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
