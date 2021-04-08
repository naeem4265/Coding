#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

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
    prime.pb(4);
    for(int j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j*j);
}

set<ll> st;


void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> k;
    ll ct = 1;
    st.clear();
    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=0; prime[j]<=m; j++)
        {
            while(m%prime[j]==0)
            {
                m /= prime[j];
            }
        }
        if(st.find(m)!=st.end())
        {
            ct++;
            st.clear();
        }
        st.insert(m);  //cout <<i<<" "<<ct<<endl;
    }
    cout <<ct<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

