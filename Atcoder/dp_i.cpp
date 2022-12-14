#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 3000;
const ll Mod = 1e9+7;
using namespace std;

ll n;
double p[limit],dp[limit][limit];
bool vis[limit][limit];

double rec(ll pos, ll cnt)
{
    if(pos==n)
    {
        if(cnt>(n-cnt))   return 1.0;
        return 0.0;
    }
    if(vis[pos][cnt])   return dp[pos][cnt];
    vis[pos][cnt] = 1;
    double x = p[pos]*rec(pos+1, cnt+1);
    double y = max(0.000, (1.0-p[pos])*rec(pos+1, cnt));    //cout <<pos<<" "<<cnt<<" "<<x<<" "<<y<<endl;
    return dp[pos][cnt] = x+y;
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> p[i];
    }
    cout << fixed << setprecision(10) << rec(0, 0) <<endl;
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

