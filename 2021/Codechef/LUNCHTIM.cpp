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

void solve(ll t)
{
    ll i,j,n,m,k,ct=0;
    string s;
    cin >> n ;
    ll h[n+5];
    h[0] = -1;
    h[n+1] = 1e18;
    for(i=1; i<=n; i++)
    {
        cin >> h[i];
    }

    ll ans[n+5];
    memset(ans,-1,sizeof(ans));

    k = 1;
    for(i=2; i<=n+1; i++)
    {
        if(h[i]>h[k])
        {
            for(j=k; j<i; j++)
            {        // cout <<i<<" "<<j<<" "<<k<<" "<<h[j]<<" "<<h[k]<<" "<<ct<<endl;
                if(h[j]==h[k] && ans[j]==-1 )
                    ans[j] = ct;
            }
            ct = 0;
            for(j=k+1; j<i; j++)
            {
                if(h[j]<h[k])
                {
                    i = j;
                    break;
                }
            }
            k = j;
        }
        else if(h[i]==h[k]) ct++;
    }
    for(i=1; i<=n; i++)
    {
        cout <<ans[i];
        if(i==n) cout <<endl;
        else   cout <<" ";
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

