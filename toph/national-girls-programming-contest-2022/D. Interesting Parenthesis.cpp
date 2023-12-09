#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e3+5;
const ll Mod = 998244353;
using namespace std;

ll dp[2*limit][limit];

ll rec(ll cnt, ll rem)
{    //cout <<cnt<<" " <<rem<<endl;
    if(cnt>rem || cnt<-2)   return 0;
    if(rem==0LL && cnt)    return 0;
    if(rem==0LL)    return 1;
    if(dp[cnt+limit][rem]!=-1)   return dp[cnt+limit][rem];
    dp[cnt+limit][rem] = (rec(cnt+1, rem-1)+rec(cnt-1, rem-1))%Mod;   //cout <<cnt<<" "<<rem<<" "<<dp[cnt+limit][rem]<<endl;
    return dp[cnt+limit][rem];
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    cout << rec(0, 2*n) <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    memset(dp, -1, sizeof(dp));
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

