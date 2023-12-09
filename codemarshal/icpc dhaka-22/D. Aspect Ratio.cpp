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
    double k,ans;
    scanf("%lf", &k);
    ans = sqrt((k*k-1.0000000)/(4.0000000-k*k));
    //cout <<fixed<<setprecision(4)<< <<endl;
    printf("%0.4lf\n", ans);
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

