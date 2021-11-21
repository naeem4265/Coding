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

struct stc
{
    ll A,T;
};

bool operator<(stc a,stc b)
{
    if((2*a.A+a.T)!=(2*b.A+b.T)) return 2*a.A+a.T>2*b.A+b.T;
    return a.A>b.A;
}
void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    vector<stc>v;
    stc z;
    ll a,t,total=0;
    for(i=0; i<n; i++)
    {
        cin >> a >> t;
        total += a;
        z.A=a;
        z.T=t;
        v.pb(z);
    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(i=0; i<n; i++)
    {
        sum += v[i].A+v[i].T;
        total -= v[i].A;
        if(sum>total) break;
    }
    cout <<i+1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

