#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5], b[n+5];
    for(i=0; i<n; i++)   cin >> a[i];
    for(i=0; i<n; i++)   cin >> b[i];
    ll ct[n+5];
    memset(ct, 0, sizeof(ct));

    for(i=n-1,j=n-1; j>=0; )
    {          // cout <<i<<" "<<j<<" "<<b[i]<<" "<<a[j]<<" "<<ct[a[j]]<<endl;
        if(i && b[j]==b[j-1])
        {
            ct[b[j]]++;
            j--;
        }
        else if(a[i]==b[j])
        {
            i--;
            j--;
        }
        else
        {
            if(ct[a[i]])
            {
                ct[a[i]]--;
                i--;
            }
            else
            {
                cout <<"NO\n";
                return ;
            }
        }
    }
    cout <<"YES\n";
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
