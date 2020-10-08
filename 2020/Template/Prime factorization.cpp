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
    ///prime factorization
    cin >> n ;
    vector <int> Div;
    for(i=0; prime[i]*prime[i]<=n; i++)
    {
        while(n%prime[i]==0)
        {
            Div.pb(prime[i]);
            n/=prime[i];
        }
    }
    if(n>1)
        Div.pb(n);
    for(i=0; i<Div.size(); i++) cout <<Div[i]<<" ";

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

