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
    cin >> n >> m;
    ll a[n+5],b[m+5];
    ll sum1=0,sum2=0,ct=0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum1+=a[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> b[i];
        sum2+=b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    for(j=m-1,i=0; ; j--,i++)
    {
        if(sum1>sum2)
        {
            cout <<ct<<endl;
            return;
        }
        if(j<0 || i>=n)
        {
            cout <<-1<<endl;
            return ;
        }
        sum1 +=(b[j]-a[i]);
        sum2 +=(a[i]-b[j]);
        ct++;
    }
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

