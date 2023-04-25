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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));

    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]>n+1)   d[i] = n+2;
        vis[d[i]] = 1;
    }
    for(j=0; j<=n; j++)  if(vis[j]==0)   break;

    if(j==0)
    {
        cout <<"YES\n";
        return;
    }
    if(j>=n)
    {
        cout <<"NO\n";
        return;
    }

    ll l,r;
    for(l=0; l<n; l++)    if(d[l]==j+1)   break;
    for(r=n-1; r>=0; r--)   if(d[r]==j+1)   break;


    memset(vis, 0, sizeof(vis));
    k = 0;
    for(i=0; i<l; i++)
    {
        vis[d[i]] = 1;
        while(vis[k])  k++;
    }
    for(i=n-1; i>r; i--)
    {
        vis[d[i]] = 1;
        while(vis[k])  k++;
    }
    if(k==j)    cout <<"YES\n";
    else           cout <<"NO\n";
    return;


}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}


