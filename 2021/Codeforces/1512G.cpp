#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10000003
using namespace std;

bool vis[limit];
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
}

ll sum[limit];
vector<pair<ll,ll> > vec;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.first!=b.first) return a.first<b.first;
    return (a.second < b.second);
}


void Set()
{
    ll i,j;
    for(i=1; i<limit; i++)
    {
        for(j=i; j<limit; j+=i)
        {
            if(vis[j]==0) continue;
            sum[j] += i;
        }
    }

    for(i=1; i<limit; i++)
    {
        if(vis[i]==0 || sum[i]>10000000LL) continue;
        vec.pb(mp(sum[i],i));   //cout <<i<<" "<<sum[i]<<endl;
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n ;
    if(vis[n-1]==0)
    {
        cout <<n-1<<endl;
        return ;
    }
    ll l=0,r=vec.size()-1;
    ll ans = -1;
    while(l<=r)
    {
        m = (l+r)/2;
        if(n>=vec[m].first)
        {
            if(n == vec[m].first)
                ans = vec[m].second;
            r = m-1;
        }
        else
            l = m+1;
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    Set();
    sort(vec.begin(),vec.end());
//    cout <<vec[limit-2].first<<" "<<vec[limit-2].second<<endl;
//    cout <<"Naeem\n";
//    cout <<sum[limit-1]<<endl;
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
