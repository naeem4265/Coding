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
    int i,j,n,m,sum=0,ck=0,odd=0,mx=0;
    cin >> n;
    int D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
        sum += D[i];
        if(mx<D[i]) mx=D[i];
    }
    if(n==1 || (sum-mx)<mx) ck=1;
    if(n==2)
    {
        if(D[0]!=D[1]) ck=1;
    }
    if(sum&1) ck = 1;
    if(ck)  cout <<"T\n";
    else  cout <<"HL\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

