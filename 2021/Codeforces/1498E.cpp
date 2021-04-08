#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 250008
using namespace std;

struct stc
{
    ll u,v,mx;
};

bool operator<(stc a,stc b)
{
    if(a.mx!=b.mx)  return a.mx>b.mx;
    return a.u>b.u;
}
stc edge[limit];

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;

    pair<ll,ll> ct[n+5],fre[n+5];
    queue<ll> q;
    for(i=1; i<=n; i++)
    {
        cin >> m;
        fre[i].first = m;
        fre[i].second = i;
    }
    sort(fre+1,fre+n+1);

    k = 0;

    for(i=n; i>=1; i--)
    {
        for(j=1; j<i; j++)
        {
            if(i==j || fre[i].first==0 || fre[j].first==0) continue;      //cout << abs(fre[i].first-fre[j].first)<<" "<<mx<<endl;
            ll mx = abs(fre[i].first-fre[j].first);
            ll u = fre[i].second;
            ll v = fre[j].second;
            edge[k].mx = mx;
            edge[k].u = u;
            edge[k].v = v;
            k++;
        }
    }
    sort(edge,edge+k);
    for(i=0; i<k; i++)
    {
        cout <<"? "<<edge[i].u<<" "<<edge[i].v<<endl;
        cin >> s;
        if(s=="Yes")
        {
            cout <<"! "<<edge[i].u<<" "<<edge[i].v<<endl;
            return ;
        }
    }
    cout <<"! "<<0<<" "<<0<<endl;
    cout.flush();
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    solve(tt);
    cout.flush();
    return 0;
}
