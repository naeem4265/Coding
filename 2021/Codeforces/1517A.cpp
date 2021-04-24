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
vector<ll> vec;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll ct = 0;
    for(i=vec.size()-1; i>=0; i--)
    {
        while(n>=vec[i])
        {
            ct++;
            n -= vec[i];
        }
    }
    if(n==0)
        cout <<ct<<endl;
    else
        cout <<-1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1,i;
    vec.pb(2050);
    for(i=0; i<15; i++)
        vec.pb(vec[i]*10);

    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
