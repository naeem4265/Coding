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
    cin >> s;
    ll left[n+5],right[n+5],ctl[n+5],ctr[n+5];
    ctl[0] = ctr[0] = left[0] = right[0] = 0;
    ctl[n-1] = ctr[n-1] = left[n-1] = right[n-1] = 0;

    if(s[0]=='*') ctl[0] = 1;
    if(s[n-1]=='*') ctr[n-1] = 1;
    left[0] = 0;
    right[n-1] = 0;
    for(i=1; i<n; i++)
    {
        ctl[i] = ctl[i-1];
        if(s[i]=='.')
        {
            left[i] = left[i-1]+ctl[i-1];
        }
        else
        {
            ctl[i]++;
            left[i] = left[i-1];
        }

    }
    for(i=n-2; i>=0; i--)
    {
        ctr[i] = ctr[i+1];
        if(s[i]=='.')
        {
            right[i] = right[i+1]+ctr[i+1];
        }
        else
        {
            ctr[i]++;
            right[i] = right[i+1];
        }
    }
    ll ans = 1e18;
    for(i=0; i<n; i++)
    {             //cout <<i<<" " <<left[i] <<" "<<right[i] <<endl;
        ans = min(ans, left[i]+right[i]);
    }
    cout << ans <<endl;
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
