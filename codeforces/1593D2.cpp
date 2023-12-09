#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 2000002
using namespace std;

vector<ll> divi,v,temp;
ll d[42];
bool vis[limit];

void solve(ll t)
{
    ll i,j,k,l,n,m;
    for(i=0; i<limit; i++)
    {
        vis[i] = 0;
    }

    cin >> n;
    m = n/2;

    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }

    sort(d,d+n);

    ll ct=0;
    for(i=1,j=0; i<n; i++)
    {
        if(d[i]!=d[j])
        {
            ct = max(ct,i-j);
            j = i;
        }
    }
    ct = max(ct,i-j);
    if(ct>=m)
    {
        cout <<-1<<endl;
        return ;
    }

    divi.clear();
    ll ans = 1;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(d[i]==d[j]) continue;
            ll len = d[j] - d[i];

            divi.pb(len);
        }
    }
    sort(divi.begin(),divi.end());

    v.clear();
    i = divi.size()-1;
    for(; i>=0; i--)
    {
        for(j=2; j*j<=divi[i]; j++)
        {
            if(divi[i]%j==0 && vis[j]==0)
            {
                v.pb(j);
                vis[j]=1;
                if(vis[divi[i]/j]==0)
                {
                    v.pb(divi[i]/j);
                    vis[divi[i]/j] = 1;
                }
            }
        }
        v.pb(divi[i]);
    }
    sort(v.begin(),v.end());

    i = v.size()-1;
    for(; i>=0; i--)
    {
        ll di = v[i];
        if(di <= ans) break;
        temp.clear();
        for(k=0; k<n; k++)
        {
            ll rem = d[k]%di;
            if(rem < 0) rem+= di;
            temp.pb(rem);
        }
        sort(temp.begin(),temp.end());
        ll ct = 0;
        for(l=0,k=1; k<n; k++)
        {
            if(temp[k]!=temp[l])
            {
                ct = max(ct,k-l);
                l = k;
            }
        }
        ct = max(ct,k-l);   //cout <<i<<" "<<di<<" "<<ct<<" "<<ans<<endl;
        if(ct>=m)   ans = di;
    }

    //cout << ans <<endl;
    printf("%d\n",ans);
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout

    ll t,tt=1;         //cout <<-8%2<<endl;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
