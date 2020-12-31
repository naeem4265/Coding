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
    cin >> n ;
    bool b[2*n+6];
    for(i=0; i<2*n+4; i++) b[i]=1;
    for(i=0; i<n; i++)
    {
        cin >> m;
        b[m] = 0;
    }
    ll x=0,mn=0,mx=0;
    for(i=1; i<=2*n; i++)
    {
        if(b[i]) x--;
        else x++;
        mn = max(mn,x);
    }
    x=0;
    j=1;
    while(b[j]) j++;
    for(i=1,j=1; i<=2*n; i++)
    {
        if(b[i]==0)
        {
            j = max(j,i+1);
            while(b[j]==0) j++;
            if(j<=2*n) mx++;
            else break;      // cout <<i<<" "<<j<<" "<<mx<<endl;
            j++;
        }
    }          // cout <<mx<<" "<<mn<<endl;
    cout <<mx-mn+1<<endl;
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

