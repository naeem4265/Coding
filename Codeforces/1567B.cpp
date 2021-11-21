#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll cum[limit];
void Set()
{
    cum[0] = 0;
    for(ll i=1; i<limit; i++)
    {
        cum[i] = (cum[i-1]^i);  //cout <<i<<" "<<cum[i]<<endl;
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    ll ans,a,b;
    cin >> a >> b;
    if(a==b && a==1)
    {
        cout <<3<<endl;
        return ;
    }
    ans = a;
    k = cum[a-1];       //cout <<k<<" "<< (k^b) <<endl;
    if((k==a && b==0) ||( (k^b)==a )) ans+=2;
    else if(k!=b) ans++;

    cout << ans <<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    Set();
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
