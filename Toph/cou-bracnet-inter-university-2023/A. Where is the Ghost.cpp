#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e4+5;
const ll Mod = 1e9+7;
using namespace std;
ll d[limit], dp[limit][200],n;

ll rec(ll pos, ll ace)
{         // cout <<pos<<" "<<ace<<endl;
    if(pos==n)
    {
        if(ace==127)   return 1;
        return 0;
    }
    if(dp[pos][ace] != -1)    return dp[pos][ace];
    dp[pos][ace] = rec(pos+1, ace);
    ll temp = ace;

    if(d[pos]%8==0)
    {
        ace |= 7;
    }
    if(d[pos]%4==0)
    {
        if((ace&1)==0)
        {
            ace |= 1;
        }
        else
        {
            ace |= 6;
        }
    }
    if(d[pos]%2==0)
    {
        if((ace&1)==0)  ace |= 1;
        else if((ace&2)==0)   ace |= 2;
        else ace |= 4;
    }
    if(d[pos]%9==0)    ace |= 24;
    if(d[pos]%3==0)
    {
        if((ace&8)==0)  ace |= 8;
        else   ace |= 16;
    }
    if(d[pos]%5==0)   ace |= 32;
    if(d[pos]%7==0)   ace |= 64;      // cout <<pos<<" "<<temp<<" "<<ace<<" "<<d[pos]<<endl;
    return dp[pos][temp] = (dp[pos][temp]+rec(pos+1, ace))%Mod;
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for(i=0; i<n; i++)   cin >> d[i];

    cout << rec(0, 0) <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
