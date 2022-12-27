#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

ll ans[limit][3];


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m;
    bool a[n+5][m+5];
    ll cnt[n+5], one=0;

    memset(cnt, 0, sizeof(cnt));
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> a[i][j];
            if(a[i][j])
            {
                one++;
                cnt[i]++;
            }
        }
    }
    if(one%n)
    {
        cout << -1 <<endl;
        return ;
    }
    one /= n;       // cout <<"here "<<one<<endl;
    vector<pair<ll,ll> > v;
    for(j=1; j<=m; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(cnt[i] > one && a[i][j])
            {
                v.pb({j,i});
            }
        }
    }
    ll sz = v.size();     //cout <<"naeem "<<m<<endl;  for(i=0; i<sz; i++)   cout << v[i].first<<" "<<v[i].second<<endl;
    if(sz==0)
    {
        cout << 0 <<endl;
        return;
    }

    k = 0;
    for(j=m; j>0; j--)
    {
        for(i=1; i<=n; i++)
        {
            if(cnt[i] < one && a[i][j]==0)
            {        // cout <<i<<" "<<j<<" "<<cnt[i]<<" "<<one<<endl;
                while(sz && v[sz-1].first==j)
                {      // cout <<" akhane "<<i<<" "<<j<<" "<<m<<" "<<v[m-1].second <<" "<<cnt[v[m-1].second] <<endl;
                    if(cnt[v[sz-1].second]<=one)
                    {
                        v.pop_back();
                        sz--;
                        continue;
                    }
                    ans[k][0] = i;
                    ans[k][1] = v[sz-1].second;
                    ans[k][2] = j;
                    k++;
                    cnt[i]++;
                    cnt[v[sz-1].second]--;
                    v.pop_back();
                    sz--;
                    break;
                }
            }
        }
        while(sz && v[sz-1].first>=j)
        {
            v.pop_back();
            sz--;
        }
    }
    for(i=1; i<=n; i++)
    {
        assert( cnt[i]==one );
    }
    cout <<k<<endl;
    for(i=0; i<k; i++)
    {
        for(j=0; j<3; j++)    cout << ans[i][j] <<" ";
        cout <<endl;
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

