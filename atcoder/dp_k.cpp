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
ll n,a[limit];
bool vis[3][100005];
bool ans[3][100005];

bool rec(bool ami, ll rem)
{

    if(rem==0)
    {
        return 1;
    }
    if(rem < 0)  return 0;
    if(vis[ami][rem])   return ans[ami][rem];
    vis[ami][rem] = 1;
    ans[ami][rem] = 1;
    for(ll i=0; i<n; i++)
    {
        if(rec(ami^1, rem-a[i]))
        {
            return ans[ami][rem] = 0;
        }
    }
    return ans[ami][rem];
}

void Please_AC(ll tt)
{
    ll i,j, x;
    cin >> n >> x;
    for(i=0; i<n; i++)   cin >> a[i];

    if(rec(1, x)==0)
        cout << "First\n";
    else
        cout << "Second\n";

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

