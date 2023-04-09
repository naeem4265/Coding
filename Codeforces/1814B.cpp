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
    ll i,j,n,m,a,b,k=100,m1,m2,f1,f2;
    cin >> a >> b;
    if(a>b)   swap(a,b);

    ll ans = a+b;

    m = 100000;
    for(i=1; i<=m; i++)
    {
        ans = min(ans, i-1+(a+i-1)/i+(b+i-1)/i);
        j = b/i;
        if(j)
            ans = min(ans, j-1+(a+j-1)/j+(b+j-1)/j);
    }
    cout <<ans<<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

