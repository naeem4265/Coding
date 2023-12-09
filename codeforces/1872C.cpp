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
    ll l,r;
    cin >> l >> r;
    if(r<4)
    {
        cout <<-1<<endl;
        return;
    }
    if((r-l)>0LL || r%2==0)
    {
        cout <<2<<" "<<r-2-(r&1?1:0)<<endl;
        return;
    }
    for(ll i=3; i*i<=r; i+=2)
    {
        if(r%i)  continue;
        ll x = r/i;
        if(x&1 && x>1)
        {
            cout <<i<<" "<<i*(x-1)<<endl;
            return;
        }
    }
    cout <<-1<<endl;



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
