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

void solve(ll tc)
{
    ll i,j,n,m,k,day,month,year;
    cin >> n ;
    year = 1+n/(31104000);

    n %= 31104000;
    month = 1+n/(2592000);

    n %= 2592000;
    day = 1+n/86400;
    cout <<day<<"/"<<month<<"/"<<year;
    n %= 86400;
    m = n/3600;
    n %= 3600;
    if(m>12)
        cout <<" "<<m-12;
    else if(m==0)
        cout <<" "<<12;
    else
        cout <<" "<<m;
    cout <<":"<<n/60;
    n %= 60;
    cout <<":"<<n;
    if(m>=12)
        cout <<" PM\n";
    else
        cout <<" AM\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

