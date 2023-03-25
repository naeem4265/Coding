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
    cin >> n;
    ll ans;
    ans = sqrt(n/4LL);
    if(ans*ans*4LL != n)  ans++;
    ans = ans*2LL-1;

    n--;
    ll ans2 = sqrt(n/4LL);
    if(ans2*(ans2+1)*4LL < n)  ans2++;
    ans2 = ans2*2LL;

    cout <<min(ans, ans2) <<endl;


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

