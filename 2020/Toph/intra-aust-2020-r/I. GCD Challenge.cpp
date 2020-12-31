#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll  int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;

ll D[limit],n,mx=1,change=0;

void check(ll x)
{
    ll ct=0;
    for(ll i=0; i<n; i++)
    {
        if(D[i]%x)
        {
            if((D[i]+1)%x && (D[i]-1)%x) return ;
            ct++;
        }
    }
    if(mx<x)
    {
        mx = x;
        change = ct;
    }
    return ;
}


int  main()
{
//    Fast
    ll i,x;
    scanf("%d",&n);
    for(i=0; i<n; i++) scanf("%d",&D[i]);
    sort(D,D+n);
    x = D[0];
    for(i=1; i*i<=x; i++)
    {
        if(x%i) continue;
        check(i);
        check(x/i);
    }
    x = D[0]+1;
    for(i=1; i*i<=x; i++)
    {
        if(x%i) continue;
        check(i);
        check(x/i);
    }
    x = D[0]-1;
    for(i=1; i*i<=x; i++)
    {
        if(x%i) continue;
        check(i);
        check(x/i);
    }
    printf("%d %d\n",mx,change);
    return 0;
}

