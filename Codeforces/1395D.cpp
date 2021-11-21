#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define inf 1000000000000
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector <ll> big,smal;
void solve(int t)
{
    ll i,j,k,n,d,m,a,ans=0,ct,sum=0;
    cin >> n >> d >> m;
    smal.pb(0);
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a>m)
            big.pb(a);
        else
            smal.pb(a);
    }
    sort(big.begin(),big.end());
    reverse(big.begin(),big.end());
    sort(smal.begin(),smal.end());
    ll ssz=smal.size(),bsz=big.size();
    for(i=1; i<ssz; i++)
        smal[i] += smal[i-1];
    for(i=1; i<bsz; i++)
        big[i] += big[i-1];
    if(bsz==0)
    {
        cout <<smal[ssz-1]<<endl;
        return ;
    }
    ans = smal[ssz-1]+big[0];
    for(i=2; i<=bsz; i++)
    {
        sum = big[i-1];
        ct = (i-1)*(d+1)+1;
        ct = n-ct;
        if(ct<0)
            continue;
        ct = max((ll)1,min(ssz-ct,ssz));
        sum += smal[ssz-1]-smal[ct-1];   //cout <<ans<<" "<<sum<<endl;
        ans = max(ans,sum);
    }
    cout <<ans <<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
