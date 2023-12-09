#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll a,b ,c;
    //cin>> a  >> b >>c >>k;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
    printf("Case %lld: ",tt);
    //cout<<"Case "<<tt<<": ";

    if((a+b+c)%3)  printf("Fight\n");
    else {


        ll avg=(a+b+c)/3;

        if(abs(avg-a)%k || abs(avg-b)%k || abs(avg-c)%k )  printf("Fight\n");

        else   printf("Peaceful\n");
    }


    return ;
}


int  main()
{
   // Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}

