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

ll fact(ll x,ll l)
{
    if(x==0 || x==1 || x==l)return 1LL;
    return (fact(x-1,l)*x)%Mod;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll d[n+5];
    ll ct[35];
    memset(ct,0,sizeof(ct));
    d[n]=Mod;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        for(j=1,k=1; j<31; j++)
        {
            if(k & d[i])
                ct[j]++;
            k = k<<1;
        }
    }
    sort(d,d+n);
    bool ok=1;
    for(j=1,k=1; j<31; j++)
    {
        if(d[0] & k)
        {
            if(ct[j]!=n)
                ok=0;
        }
        k = k<<1;
    }
    for(i=1; i<=n; i++)
    {
        if(d[i-1]!=d[i]) break;
    }
    if(i==1) ok = 0;     // cout << fact(n-2,0) <<endl;
    if(ok){
        if(i==n)
            cout <<fact(n,0) <<endl;
        else
            cout << (((i*(i-1))%Mod)*fact(n-2,0))%Mod <<endl;
    }
    else
        cout <<0<<endl;
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
