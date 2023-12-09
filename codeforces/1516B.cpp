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
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll d[n+5];
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        ans ^= d[i];
    }
    ll cum[n+5];
    cum[n] = 0;
    for(i=n-1; i>=0; i--)
    {
        cum[i] = cum[i+1]^d[i];
    }
    if(ans==0)
    {
        cout <<"YES\n";
        return ;
    }
    ll n1=0,n2=0,n3=0; //try to divide in 3 group
    for(i=0; i<n-2; i++)
    {
        n1 ^= d[i];
        n2 = 0;
        for(j=i+1; j<n-1; j++)
        {
            n2 ^= d[j];
            n3 = cum[j+1];
            if(n1==n2 && n2==n3)
            {
                cout <<"YES\n";
                return ;
            }
        }
    }
    cout <<"NO\n";
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
