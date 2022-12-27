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

ll ncr[2000][2000];
ll nCr(ll n, ll r)
{
    if(r>n)  return 0;
    if(n==r || r==0) return 1;
    if(r==1) return n;
    if(ncr[n][r]) return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r-1)+nCr(n-1,r));
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    for(i=0; i<=n; i++)    cout << nCr(n, i) << " ";
    cout << endl;

    return ;
}


int  main()
{
  //  Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

