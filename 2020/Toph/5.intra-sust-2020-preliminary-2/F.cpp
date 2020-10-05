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
vector <pair<double,ll> > out;
void solve(ll t)
{
    ll n,i,j,p,k;
    double a,b,x;
    cin >> n;
    double A[n+5],B[n+5];
    for(i=0; i<n; i++)
    {
        cin>> A[i] >> B[i];
        a = (double)A[i];
        b = (double)B[i];
        out.pb(mp(A[i]/B[i],i));
    }
    sort(out.begin(),out.end());
    for(i=n-1; i>=0; i--)
    {
        for(j=i-1; j>=0; j--)
            if(out[i].first!=out[j].first)
                break;
        t = j;
        for(j=j+1; j<=i; j++)
        {
            k = out[j].second;
            cout <<(int)A[k]<<" "<<(int)B[k]<<endl;
        }
        i = t+1;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


