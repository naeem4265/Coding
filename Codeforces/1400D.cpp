#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 3008
using namespace std;
vector <ll> cnt[limit];
ll BS(ll key,ll ind)
{
    ll l=0,r=cnt[key].size()-1,mid,last_ind=-1;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(cnt[key][mid]>=ind)
        {
            last_ind = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    return last_ind;
}
void solve(ll t)
{
    ll i,j,k,n,m,ct,ans=0;
    cin >> n;
    ll D[n+5];
    ll cnt[n+5][n+5];
    for(i=0; i<n+5; i++)
        for(j=0; j<n+5; j++)
            cnt[i][j]=0;
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    for(j=n-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            ans += cnt[D[i]][D[j]];
        }
        for(k=n-1; k>j; k--)
            cnt[D[j]][D[k]]++;
    }
    cout <<ans<<endl;
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

