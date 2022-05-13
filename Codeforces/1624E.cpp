#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define limit 1000008
using namespace std;
ll n,m;
string s;
ll dp[1008];
struct st
{
    ll l,r,i,nx;
};

map<string,ll> mymap;
st tran[1000008],ans[1008];

ll rec(ll pos)
{
    if(pos==m)  return 0;
    if(pos>m || pos+1==m)   return -1;
    if(dp[pos]!=-1)  return dp[pos];

    string t = s.substr(pos,2);
    dp[pos] = -1;
    ll temp=-1;
    if(mymap[t])
    {
        temp = rec(pos+2);
    }
    if(temp!=-1)
    {
        ll z = mymap[t];
        ans[pos].l = tran[z].l;
        ans[pos].r = tran[z].r;
        ans[pos].i = tran[z].i;
//cout<<pos<<t<<" milce " <<ans[pos].l<<" "<<ans[pos].r<<" "<<ans[pos].i<<"\n";
        return dp[pos] = temp+1;
    }
    t = s.substr(pos,3);
    if(mymap[t])
    {
        temp = rec(pos+3);
    }
    if(temp!=-1)
    {
        ll z = mymap[t];
        ans[pos].l = tran[z].l;
        ans[pos].r = tran[z].r;
        ans[pos].i = tran[z].i;
//cout<<pos<<t<<" milce " <<ans[pos].l<<" "<<ans[pos].r<<" "<<ans[pos].i<<"\n";
        return dp[pos] = temp+1;
    } //cout <<t<<' '<<pos<<" "<<dp[pos]<<" ascilam\n";
    return dp[pos];
}

void rec2(ll pos)
{
    if(pos>=m)  return;
//cout <<pos<<endl;
    cout <<ans[pos].l<<" "<<ans[pos].r<<" "<<ans[pos].i<<"\n";
    if(dp[pos+2]!=-1)
        rec2(pos+2);
    else
        rec2(pos+3);
}


void solve(ll tt)
{
    ll i,j,k,q,p=0;

    cin >> n >> m;

    for(i=0; i<m+5; i++)
    {
        dp[i] = -1;
    }
    mymap.clear();

    string t;
    for(i=0; i<n; i++)
    {
        cin >> s;
        for(j=0; j<m-1; j++)
        {
            t = s.substr(j,2);
            if(mymap[t])   continue;
            mymap[t] = ++p;
            tran[p].l = j+1;
            tran[p].r = j+2;
            tran[p].i = i+1;
//cout<<t<<" mi " <<tran[p].l<<" "<<j+1<<" "<<tran[p].r<<" "<<j+3<<" "<<tran[p].i<<" "<<i+1<<"\n";
        }
        for(j=0; j<m-2; j++)
        {
            t = s.substr(j,3);
            if(mymap[t])   continue;
            mymap[t] = ++p;
            tran[p].l = j+1;
            tran[p].r = j+3;
            tran[p].i = i+1;
        }
    }
    cin >> s;
    k = rec(0);
    cout << k <<"\n";
    if(k==-1)   return ;
    rec2(0);
    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    while(tt--)
        solve(tt);
    return 0;
}
