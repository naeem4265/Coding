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
    ll i,j,k=0,n,m,d,GCD;
    cin >> n >> m;
    ll cut[m+5];
    cut[0]=0;
    for(i=0; i<m; i++)
    {
        cin >> d;
        if(d==0 || d==n) continue;
        cut[k++] = d;
    }
    m = k;
    if(k==0)
    {
        cout <<0<<endl;
        return ;
    }
    sort(cut,cut+m);
    d = n-cut[m-1];
    GCD = __gcd(cut[0],d);
    for(i=1; i<m; i++)
    {
        d = cut[i]-cut[i-1];
        GCD = __gcd(GCD,d);
    }
    cout <<-1+n/GCD<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}



