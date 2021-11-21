#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll d[limit],m;
ll cnt[limit];

ll bsl(ll key)
{
    ll l=0,h=m-1,mid,left = Mod;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(d[mid]>key)
            h = mid-1;
        else if(d[mid]<key)
            l = mid+1;
        else
        {
            left = min(left,mid);
            h = mid-1;
        }
    }
    return left;
}
ll bsr(ll key)
{
    ll l=0,h=m-1,mid,right = -Mod;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(d[mid]>key)
            h = mid-1;
        else if(d[mid]<key)
            l = mid+1;
        else
        {
            right = max(right,mid);
            l = mid+1;
        }
    }
    return right;
}
void pre()
{
    ll i,j;
    for(i=1; i<limit; i++)
    {
        ll ct;
        ct = bsr(i)-bsl(i)+1;  //cout <<i<<" "<<ct<<endl;
        if(ct<=0) continue;
        for(j=i; j<limit; j+=i)
        {
            cnt[j] += ct;
        }
    }
}
void solve(ll tt)
{
    ll i,j,n,k,q;
    string s;
    cin >> m;
    for(i=0; i<m; i++)
        cin >> d[i];
    sort(d,d+m);
    pre();
    cin >> q;
    while(q--)
    {
        ll e;
        cin >> e;
        cout <<m-cnt[e]<<endl;
    }


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
