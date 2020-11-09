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

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    ll A[n+5],D[n+5],sum[n+5];
    sum[0]=0;
    memset(D,0,sizeof(D));
    for(i=1; i<=n; i++)
    {
        cin >> A[i];
        sum[i] = sum[i-1]+A[i];
        if(A[i]<0)
        {
            D[i] = A[i];
            if(A[i-1]<0)
                D[i] += A[i-1];
        }
    }
    ll ct=0,mx=0;
    for(i=1; i<=n; i++)
    {
        ct += A[i];
        if(ct>=0) ct=0;
        D[i] = ct;   //cout <<i<<" "<<D[i]<<endl;
    }
    ct = 0;
    for(i=1; i<=n; i++)
    {
        ct += sum[i];
        mx = max(mx,ct);
        mx = max(mx,ct-D[i]);  // cout <<D[i]<<" "<<ct<<" "<<mx<<" "<<i<<endl;
    }
    cout <<mx<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

