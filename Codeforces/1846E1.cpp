#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e3+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    for(ll r = 2; r<limit; r++)
    {
        ll sum = n*(r-1)+1;
        ll p = log2(sum)/log2(r);
        if(p<3LL) p = 3;
        p--;
        ll s = (pow(r, p+1)-1)/(r-1);         //cout <<r<<" "<<sum<<" "<<p<<" "<<s<<endl;
        if(s==n)
        {
            cout <<"YES\n";
            return;
        }
        p++;
        s = (pow(r, p+1)-1)/(r-1);
        if(s==n)
        {
            cout <<"YES\n";
            return;
        }
        p++;
        s = (pow(r, p+1)-1)/(r-1);
        if(s==n)
        {
            cout <<"YES\n";
            return;
        }
    }
    cout <<"NO\n";


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
