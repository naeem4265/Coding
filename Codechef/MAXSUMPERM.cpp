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
    cin >> n >> q;
    ll d[n+5];
    for(i=0; i<n; i++)  cin >> d[i];
    sort(d, d+n);
    reverse(d, d+n);

    vector<pair<ll,ll> > v(q);
    for(i=0; i<q; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    priority_queue<ll> pq;
    vector<pair<ll,ll> > cnt;
    ll ct = 0;
    for(i=1,j=0; i<=n; i++)
    {
        while(j<q && v[j].first<=i)
        {
            ct++;
            pq.push(-v[j].second);
            j++;
        }
        while(!pq.empty() && -pq.top()<i)
        {
            ct--;
            pq.pop();
        }
        cnt.pb({ct,i});
    }
    sort(cnt.begin(), cnt.end());
    reverse(cnt.begin(), cnt.end());
    ll sum = 0, ans[n+5];
    for(i=0; i<n; i++)
    {
        ans[cnt[i].second] = d[i];
        sum += cnt[i].first*d[i];
    }
    cout <<sum<<endl;
    for(i=1; i<=n; i++)   cout << ans[i]<<" ";
    cout <<endl;


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

