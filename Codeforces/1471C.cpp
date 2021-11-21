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

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n >>m;
    ll ct[m+5];
    for(i=0; i<=m; i++) ct[i]=1;

    for(i=1; i<=n; i++)
    {
        cin >> k;
        ct[k]++;
    }
    ll a[m+5];
    for(i=1; i<=m; i++) cin >> a[i];
    k = 0;
    ll sum=0;
    for(i=1; i<=m; i++)
    {
        if(k>n) break;
        if((ct[i]+k)>n)
        {
            k = n-k;
            sum += k*a[i];
            break;
        }
        sum += (ct[i]*a[i]);
        k += ct[i];
    }
    cout <<sum<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

