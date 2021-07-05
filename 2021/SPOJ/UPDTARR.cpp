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
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> q;
    ll block = 350;
    ll arr[n+5],ct[block+5][block+5];

    memset(arr,0,sizeof(arr));
    memset(ct,0,sizeof(ct));

    for(i=0; i<q; i++)
    {
        ll a,d;
        cin >> a >> d;
        if(d<block)
        {
            ct[a%d][d]++;
        }
        else
        {
            for(j=a; j<=n; j+=d)
            {
                arr[j]++;
            }
            for(j=a-d; j>0; j-=d)
            {
                arr[j]++;
            }
        }
    }
    cout <<"Case "<<t<<": ";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<block; j++)
        {
            arr[i] += ct[i%j][j];        //cout <<i<<" "<<j<<" "<<d[i]<<" "<<ct[i%j]<<endl;
        }
        cout << arr[i] <<" ";
    }
    cout << endl;
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
