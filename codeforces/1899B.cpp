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
    string s;
    cin >> n;
    ll sum = 0;
    ll a[n+5];
    for(i=0; i<n; i++)  {
        cin >> a[i];
    }
    ll ans = 0;
    for(i=1; i*i<=n; i++){
        if(n%i)   continue;
        ll  mx = 0,mn=1e18;
        for(j=0,k=1; j<n; j++,k++)
        {
            sum += a[j];
            if(k==i){
                k = 0;
                mx = max(mx, sum);
                mn = min(mn, sum);
                sum = 0;
            }
        }
        ans = max(ans, mx-mn);

        mx = 0, mn=1e18, sum=0;
        for(j=0,k=1; j<n; j++,k++)
        {
            sum += a[j];
            if(k==(n/i)){
                k = 0;
                mx = max(mx, sum);
                mn = min(mn, sum);
                sum = 0;
            }
        }
        ans = max(ans, mx-mn);   cout <<i<<" "<<ans<<" "<<mx<<" "<<mn<<endl;
    }
    cout << ans <<endl;


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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
