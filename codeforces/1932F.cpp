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

ll cnt[limit], rght[limit], n;
ll dp[limit];

ll rec(ll pos ) {
    if( pos > n )   return 0;
    if( dp[pos] != -1 )   return dp[pos];
    dp[pos] = rec( pos+1 );
    ll nxt = rght[pos]+1;

    if( nxt> pos )
        dp[pos] = max( dp[pos], cnt[pos] + rec( nxt ));       //cout <<pos<<" "<<nxt<<" "<<cnt[pos]<<" "<<dp[pos]<<endl;
    return dp[pos];
}

void Please_AC(ll tt)
{
    ll i,j, m;

    cin >> n >> m;
    vector<pair<ll,ll> > v(m);
    for( i=0; i<m; i++ ) {
        cin >> v[i].first >> v[i].second;
    }
    v.pb({ n+100, n+1000});
    sort( v.begin(), v.end() );

    ll ct = 0, mx = 0;
    cnt[0] = 0;
    rght[0] = 0;
    for(i=0; i<n+4; i++ ) {
        dp[i] = -1;
    }
    priority_queue<ll> pq;

    for( i=0,j=0; i<=n+1; i++ ) {
        while( !pq.empty() && -pq.top() < i ) {
            pq.pop();
            ct--;
        }
        while( v[j].first <= i ) {
            ct++;
            mx = max( mx, v[j].second);
            pq.push( -v[j].second );
            j++;
        }
        cnt[i] = ct;
        rght[i] = mx;     //cout <<i<<" "<<cnt[i]<<" "<<rght[i]<<endl;
    }

    cout << rec( 0 ) <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
