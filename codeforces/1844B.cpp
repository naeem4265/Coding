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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    if(n<3)
    {
        for(i=1; i<=n; i++)  cout <<i<<" ";
        cout <<endl;
        return;
    }
    d[1] = 2;
    d[n] = 3;
    d[(n+1)/2] = 1;
    for(i=2,k=4; i<(n+1)/2; i++)  d[i] = k++;
    for(i=(n+1)/2+1; i<n; i++)   d[i] = k++;
    for(i=1; i<=n; i++)   cout << d[i] <<" ";
    cout <<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
