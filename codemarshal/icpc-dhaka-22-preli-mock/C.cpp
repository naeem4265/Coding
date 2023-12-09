#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

ll pr[limit];
ll cnt[limit];
ll d[limit];

ll Find(ll u)
{
    if(pr[u]==u) return u;
    return pr[u] = Find(pr[u]);
}
void dsu(ll u,ll v)
{
    d[u] += d[v];
    cnt[u] += cnt[v];
    pr[v] = u;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;

    for(i=0; i<=n+5; i++)
    {
        cnt[i] = 1;
        pr[i] = i;
    }
    for(i=1; i<=n; i++)   cin >> d[i];
    cin >> q;
    while(q--)
    {
        cin >> tt;
        ll x,y;
        if(tt==1)
        {
            cin >> x >> y;
            if(pr[x]!=x || pr[y]!=y || d[x]==d[y])  continue;

            if(d[x]>d[y])
            {
                dsu(x, y);
            }
            if(d[x]<d[y])
            {
                dsu(y,x);
            }
        }
        else if(tt==2)
        {
            cin >> x;
            y = Find(x);
            if(y!=x)
                cout <<0<<endl;
            else
                cout << cnt[y] <<endl;
        }
        else
        {
            cin >> x;
            cout << pr[Find(x)] <<endl;
        }
    }

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

