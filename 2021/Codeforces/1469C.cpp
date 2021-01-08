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
    ll i,j,n,m,k,x,y;
    cin >> n >> k;
    ll h[n+5];
    h[0]=0;
    ll mx[n+5],mn[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> h[i];
    }
    mx[1]=h[1];
    mn[1]=h[1];
    for(i=2; i<n; i++)
    {
        if((mx[i-1]+k-1)<h[i] || (mn[i-1]-k+1)>(h[i]+k-1))
        {
            cout <<"NO\n";
            return ;
        }
        mn[i] = max(h[i],mn[i-1]-k+1);
        mx[i] = min(h[i]+k-1,mx[i-1]+k-1);
        //cout <<i<<" "<<mn[i]<<" "<<mx[i]<<" "<<h[i]<<endl;
    }
//    h[n] += k;  cout <<h[n]<<' '<<mn[i-1]<<" "<<mx[i-1]<<endl;
    if((mx[n-1]+k-1)<h[n] || (mn[n-1]-k+1)>h[n])
    {
        cout <<"NO\n";
        return ;
    }
    cout <<"YES\n";
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

