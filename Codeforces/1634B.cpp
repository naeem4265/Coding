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

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    ll x,y;
    cin >> n >> x >> y;
    ll d[n+5];
    d[0] = x;
    for(i=1; i<=n; i++)
        cin >> d[i];

    ll pre = 0;
    for(i=0,k=1; i<55; i++)
    {         //cout <<i<<' '<<pre<<endl;
        ll ct = 0;
        if(y&k)
        {
            ct = 0;
            for(j=0; j<=n; j++)
            {
                if(d[j]&k)
                    ct++;
            }  // cout <<" here "<<ct<<" "<<pre<<endl;
            if(ct&1)
            {
                ct--;
                pre /= 2;
                if(pre&1)  pre--;
                ct += pre;
            }
            else if(pre)
            {
                pre -= 2;
                pre /= 2;
                if(pre&1)
                    pre--;
                ct += pre;
            }
            else
            {
                cout <<"Bob\n";
                return ;
            }
        }
        else
        {
            ct = 0;
            for(j=0; j<=n; j++)
            {
                if(d[j]&k)
                    ct++;
            }
            if(ct%2==0)
            {
                pre /= 2;
                if(pre&1)  pre--;
                ct += pre;
            }
            else if(pre)
            {
                pre -= 2;
                pre /= 2;
                ct++;
                if(pre&1)
                    pre--;
                ct += pre;
            }
            else
            {
                cout <<"Bob\n";
                return ;
            }
        }
        pre = ct;
        k *= 2LL;
    }
    cout <<"Alice\n";
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
