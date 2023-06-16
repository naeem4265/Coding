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
    ll i,j,n,m,a,b;
    cin >> a >> b;
    if(a==b)
    {
        cout <<0<<endl;
        return;
    }
    m = __gcd(a, b);

    a /= m;
    b /= m;
    ll ct = 0;
    while(a%2LL==0)
    {
        a /= 2LL;
        ct++;
    }
    while(b%2LL==0)
    {
        b /= 2LL;
        ct++;
    }
    while(a%3LL==0)
    {
        a /= 3LL;
        ct++;
    }
    while(b%3LL==0)
    {
        b /= 3LL;
        ct++;
    }
    while(a%5LL==0)
    {
        a /= 5LL;
        ct++;
    }
    while(b%5LL==0)
    {
        b /= 5LL;
        ct++;
    }
    if(a>1LL || b>1LL)
    {
        cout <<-1<<endl;
        return;
    }
    cout << ct <<endl;



    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
