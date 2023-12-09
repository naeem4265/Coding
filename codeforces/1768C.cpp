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


void Please_AC(ll tt)
{
    ll i,j,n,m,k;
    cin >> n;
    vector<pair<ll,ll> > v(n);
    for(i=0; i<n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());

    ll p[n+5],q[n+5],cnt[n+5];
    memset(p, -1, sizeof(p));
    memset(q, -1, sizeof(q));
    memset(cnt, 0, sizeof(cnt));

    for(i=0; i<n; i++)
    {
        if(cnt[v[i].first]>=2)
        {
            cout << "NO\n";
            return;
        }
        if(cnt[v[i].first])
            q[v[i].second] = v[i].first;
        else
            p[v[i].second] = v[i].first;
        cnt[v[i].first]++;
    }

    for(i=0,k=1; i<n; i++)
    {
        if(p[v[i].second]==-1)
        {
            while(cnt[k])  k++;
            p[v[i].second] = k;
            cnt[k]++;
            if(v[i].first < k)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    for(i=0,k=1; i<n; i++)
    {
        if(q[v[i].second]==-1)
        {
            while(cnt[k] != 1)  k++;
            q[v[i].second] = k;
            cnt[k]++;
            if(v[i].first < k)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    for(i=1; i<=n; i++)   cout <<p[i]<<" "; cout <<endl;
    for(i=1; i<=n; i++)   cout <<q[i]<<" "; cout <<endl;
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

