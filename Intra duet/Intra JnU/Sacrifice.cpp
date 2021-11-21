// Created by ash_98

#include<bits/stdc++.h>
using namespace std;

#define mx 200005
#define ll long long
#define mod 1000000007

ll T[mx],F[mx];
char ch[mx];
int n,m,ii,k;

void solve()
{
    scanf("%d",&n);
    priority_queue<ll>pq;
    vector<pair<ll,ll>>v;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld%lld",&T[i],&F[i]);
        if(F[i]==-1)F[i]=1e18;
        v.push_back({F[i],T[i]});
    }

    sort(v.begin(),v.end());
    ll total_time=0,re=0;
    for(int i=1;i<=n;i++)
    {
        ll need=total_time+v[i-1].second;
        if(need<=v[i-1].first)
        {
            total_time=need;
            pq.push(v[i-1].second);
        }
        else
        {
            re++;
            if(pq.size() && pq.top()>v[i-1].second)
            {
                total_time-=pq.top();
                pq.pop();
                total_time+=v[i-1].second;
                pq.push(v[i-1].second);
            }
        }
    }
    printf("%lld %lld\n",re,total_time );

}

int main()
{
    int t=1;
    //scanf("%d",&t);
    while(t--)solve();
    return 0;
}
