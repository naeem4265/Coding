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
int cnt[limit];
vector <int> mx,mn;
int BSmax(int key,int n)
{
    int last_ind=-1,r=n,l=0,mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(mx[mid]>=key)
        {
            last_ind = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    return last_ind;
}
int BSmin(int key,int n)
{
    int last_ind=-1,l=0,r=n,mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(mn[mid]<=key)
        {
            last_ind = mid;
            l = mid+1;
        }
        else
            r = mid-1;
    }
    return last_ind;
}
void solve(int t)
{
    int i,j,n,m,k,ans=Mod,ct,ct1,ct2;
    cin >> n  >> k;
    mx.clear();
    mn.clear();
    for(i=0; i<2*k+5; i++)
    {
        cnt[i]=0;
    }
    int D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    n = n/2;
    for(i=0,j=2*n-1; i<n; i++,j--)
    {
        cnt[D[i]+D[j]]++;
        mn.pb(min(D[i],D[j])+1);
        mx.pb(max(D[i],D[j])+k);
    }
    sort(mn.begin(),mn.end());
    sort(mx.begin(),mx.end());
    for(i=2; i<=2*k; i++)
    {
        ct1 = BSmin(i,n-1)+1;
        ct1 += (n-ct1)*2;
        ct2 = BSmax(i,n-1);
        ct2 = ct2*2+(n-ct2);
        ct = max(0,max(ct1,ct2)-cnt[i]);
        ans = min(ct,ans);        // cout <<i<<' '<<ct1<<' '<<ct2<<' '<<ct<<' '<<ans<<endl;
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


