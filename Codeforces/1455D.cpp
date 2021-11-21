#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 508
using namespace std;
ll n,a[limit];
ll dp[limit][limit][limit];

ll rec(ll pos,ll x,ll ct)
{
    if(pos==n)
    {
        for(ll i=1; i<n; i++)
        {  //cout <<pos<<" aice "<<x<<" "<<a[i-1]<<" "<<a[i]<<endl;
            if(a[i-1]>a[i])
                return Mod;
        }  //cout <<pos<<" naeem "<<x<<endl;
        return 0;
    }
    if(dp[pos][x][ct]!=-1) return dp[pos][x][ct];
    ll p=Mod,q=Mod;
    if(a[pos]>x)
    {
        ll t=a[pos];
        a[pos] = x;
        p = 1+rec(pos+1,t,ct+1);
        a[pos]=t;
    }
    q = rec(pos+1,x,ct);
           //cout <<pos<<" xxxx "<<x<<" "<<p<<" "<<q<<endl;
    return dp[pos][x][ct] = min(p,q);
}

void solve(int t)
{
    ll i,j,k,x,m;
    cin >> n >> x;
    for(i=0; i<n+5; i++)
    {
        for(j=0; j<505; j++)
        {
            for(k=0; k<n+5; k++)
                dp[i][j][k]= -1;
        }
    }
    for(i=0; i<n; i++)
        cin >> a[i];

    ll mn = rec(0,x,0);
    if(mn<Mod)
        cout <<mn<<endl;
    else
        cout <<-1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

