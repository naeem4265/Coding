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

vector<ll> nai;
ll d[limit], ct[limit];


void solve(ll tt)
{
    ll i,j,n,m,k,q,c;
    scanf("%lld %lld", &n, &c);
    for(i=0; i<=c+5; i++)
        ct[i] = 0;

    for(i=0; i<n; i++)
    {
        scanf("%lld", &d[i]);
        ct[d[i]] = 1;
    }
    sort(d, d+n);
    if(d[0]!=1)
    {
        printf("No\n");
        return ;
    }
    nai.clear();

    for(i=1; i<=c; i++)
    {
        if(ct[i]==0)
            nai.pb(i);
        ct[i] += ct[i-1];
    }
    m = nai.size();
    for(i=1; i<n; i++)
    {
        if(d[i]==d[i-1])   continue;
        for(j=0; j<m; j++)
        {
            if((d[i]*nai[j]) > c) break;

            k = min(c+1, d[i]*(nai[j]+1));   //cout <<d[i]<<" "<<nai[j]<<" "<<ct[d[i]*nai[j]]<<" "<<ct[k]<<endl;
            if((ct[d[i]*nai[j]-1])-ct[k-1])
            {
                printf("No\n");
                return ;
            }
        }
    }
    printf("Yes\n");
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
