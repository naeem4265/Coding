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
    ll a,b;
    cin >> a >> b;
    cin >> n >> m;
    ll ct = 0,ans;

    ct = n/(m+1);

    if(a<=b)
    {
        ans = ct*a*m;
        n %= (m+1);
        ans += n*a;
        cout << ans <<endl;
    }
    else
    {
        if((a*m) <= (b*(m+1)))
            ans = (ct*a*m);
        else
            ans = n*b, n=0;
        n %= (m+1);
        ans += b*n;// cout <<ans<<" "<<n<<" "<<ct<<endl;
        cout << ans <<endl;
    }

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

