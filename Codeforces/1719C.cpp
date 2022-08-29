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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> q;
    ll d[n+5];
    for(i=1; i<=n; i++)  cin >> d[i];
    ll s[n+5],f[n+5];
    memset(s, 0, sizeof(s));
    memset(f, 0, sizeof(f));

    j = 1;
    for(i=2; i<=n; i++)
    {
        if(d[j]<d[i])
        {
            f[j] = i-2;
            j = i;
            if(s[i]==0)
                s[i] = i-1;
        }
        else
        {
            if(s[j]==0)
                s[j] = i-1;
            f[i] = i-2;
        }
        if(d[i]==n)       break;
    }
    while(q--)
    {
        ll r;
        cin >> j >> r;
        if(d[j]==n)
        {
            if(r>=s[j])  cout <<r-s[j]+1<<endl;
            else  cout <<0<<endl;
            continue;
        }
        if(s[j] && r>=s[j])
            cout << min(f[j],r)-s[j]+1<<endl;
        else
            cout << 0 <<endl;
    }
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
        Please_AC(t);
    return 0;
}
