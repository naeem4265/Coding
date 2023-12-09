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

ll ncr[2000][2000];
ll nCr(ll n, ll r)
{
    if(r>n)  return 0;
    if(n==r) return 1;
    if(r==1) return n;
    if(ncr[n][r]) return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r-1)+nCr(n-1,r))%Mod;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll a[n+5][n+5];
    bool ok = 1;
    vector<pair<ll,ll> > v, node;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                v.pb({i,j});
            }
            if(i==j && a[i][j]==2)  ok = 0;
        }
    }
    if(ok==0)
    {
        cout << 0 <<endl;
        return ;
    }
//    for(i=0; i<5; i++)
//    {
//        ll x,y;
//        cin >> x >> y;
//        v.pb({x,y});
//    }
    if(!v.empty())
        sort(v.begin(), v.end());
    priority_queue<ll> st;
    ll l=n+5;
    for(i=0; i<v.size(); i++)
    {
        if(!st.empty() && v[i].first>st.top())
        {
            node.pb({l,st.top()});
            for(; l<=st.top(); l++)
            {
                for(j=l; j<=st.top(); j++)
                {
                    if(a[l][j]==2)
                    {
                        cout << 0 <<endl;
                        return;
                    }
                }
            }
            while(!st.empty())  st.pop();
            l = n+5;
        }
        st.push(v[i].second);
        l = min(l, v[i].first);
    }
    if(l<=n)
    {
        node.pb({l,st.top()});
        for(; l<st.top(); l++)
            {
                for(j=l; j<st.top(); j++)
                {
                    if(a[l][j]==2)
                    {
                        cout << 0 <<endl;
                        return;
                    }
                }
            }
    }
    //for(i=0; i<node.size(); i++)    cout <<node[i].first<<" "<<node[i].second<<endl;
    if(!node.empty())
        sort(node.begin(), node.end());
    ll cnt = 0, ans = 1;
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));

    for(i=0; i<node.size(); i++)
    {
        if(vis[i])   continue;
        vis[i] = 1;
        cnt=1;
        j = node.size();
        j--;
        for(; j>i; j--)
        {   //cout << i<<" "<<j<<" "<<node.size()<<endl;
            if(vis[j])    continue;
            for(ll l = node[i].first; l<=node[i].second; l++)
            {
                for(ll r=node[j].first; r<=node[j].second; r++)
                {
                    if(a[l][r]==2)
                    {
                        vis[j] = 1;
                        cnt = j-i+1;
                        i = j;
                        j = -5;
                        l = n+5;
                        break;
                    }
                }
            }
        } //cout <<i<<" "<<cnt<<" "<<ans<<endl;
        if(cnt<3)  ans = (ans*2LL)%Mod;
        else
        {
            ll x = 0;
            for(i=1; i<cnt; i++)
                x = (x+nCr(cnt,i))%Mod;
            ans = (ans*x)%Mod;
        }
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

