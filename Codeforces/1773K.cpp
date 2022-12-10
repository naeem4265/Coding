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
    ll i,j,n,m,k,q;
    cin >> n >> k;
    m = n;
    ll ans = n-1;
    map<pair<ll,ll> ,bool> mp;
    vector<pair<ll,ll> >edge;
    ll cnt[n+5];
    memset(cnt, 0, sizeof(cnt));

    for(i=1; i<=n; i++,m--)
    {
        for(j=i+1; j<=m; j++)
        {
            edge.pb({i,j});
            cnt[i]++;
            cnt[j]++;
            mp[{i,j}] = 1;
            mp[{j,i}] = 1;
        }
    }
    if(k>ans)
    {
        cout <<"NO\n";
        return;
    }
    while(ans>k)
    {
        ll mn = n+5;
        for(i=1; i<=n; i++)
        {
            if(cnt[i]<mn)   mn = cnt[i];
        }
        for(i=1; i<=n; i++)
        {
            if(cnt[i]==mn)
            {
                for(j=n; j>0; j--)
                {
                    if(i!=j && mn==cnt[j] && mp[{i,j}]==0)
                    {
                        edge.pb({min(i,j),max(i,j)});
                        cnt[i]++;
                        cnt[j]++;
                        mp[{i,j}] = 1;
                        mp[{j,i}] = 1;    //cout <<i<<" "<<j<<" "<<mn<<" "<<cnt[i]<<" "<<cnt[j]<<endl;
                        break;
                    }
                }
            }
        }
        for(i=1; i<=n; i++)
        {
            if(cnt[i]==mn)
            {
                for(j=n; j>0; j--)
                {
                    if(i!=j && mn+1==cnt[j] && mp[{i,j}]==0)
                    {
                        edge.pb({min(i,j),max(i,j)});
                        cnt[i]++;
                        cnt[j]++;
                        mp[{i,j}] = 1;
                        mp[{j,i}] = 1;  //cout <<i<<" "<<j<<" "<<mn<<" "<<cnt[i]<<" "<<cnt[j]<<endl;
                        break;
                    }
                }
            }
        }
        ans--;
    }
    cout <<"YES\n";
    cout << edge.size()<<endl;
    for(i=0; i<edge.size(); i++)   cout <<edge[i].first<<" "<<edge[i].second<<endl;

    //for(i=1; i<=n; i++)  cout <<i<<" cnt "<<cnt[i]<<endl;

    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

