#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll ct[limit];

bool vis[limit];
vector<int>prime;
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
    prime.pb(2);
    for(int j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    k = n;
    if(n==1)
    {
        cout <<4<<endl;
        return ;
    }
    m = prime.size();
    bool ok = 1;
    ll cnt = 0;

    for(i=0; prime[i]*prime[i]<=n; i++)
    {
        ct[prime[i]] = 0;
        while(n%prime[i]==0)
        {
            ct[prime[i]]++;
            n /= prime[i];
        }
        if(cnt && ct[prime[i]]!=cnt)
            ok = 0;
        cnt = ct[prime[i]];
    }
//    if(ok && cnt>1 && n==1)
//    {
//        cout <<1<<endl;
//        return ;
//    }
    ll ans = n;
    n = k;
    for(i=0; prime[i]*prime[i]<=n; i++)
    {
        while(n%prime[i]==0)
        {
            n /= prime[i];
        }
        if(ct[prime[i]]&1){      //cout <<i<<" "<<prime[i]<<" "<<ct[prime[i]]<<" "<<ans<<endl;
            ans *= prime[i];
        }
    }
    ll ans2= n*n;

        for(i=0; prime[i]*prime[i]<=k; i++)
        {
            if(ans2>ans)   break;

            while(k%prime[i]==0)
            {
                k /= prime[i];
            }
            if(ct[prime[i]] && ct[prime[i]]%3==2){      //cout <<i<<" "<<prime[i]<<" "<<ct[prime[i]]<<" "<<ans2<<endl;
                ans2 *= prime[i];
            }
            if(ct[prime[i]] && ct[prime[i]]%3==1){      //cout <<i<<" "<<prime[i]<<" "<<ct[prime[i]]<<" "<<ans2<<endl;
                ans2 *= prime[i]*prime[i];
            }
        }

    cout << min(ans, ans2) <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
