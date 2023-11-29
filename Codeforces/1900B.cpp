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
    ll a,b,c,aa=0,bb=0,cc=0;
    cin >> a >> b >> c;
    if( abs(b-c)%2==0 && max(a, min(b,c)))
        aa = 1;
    if( abs(a-c)%2==0 && max(b, min(a,c)))
        bb = 1;
    if( abs(b-a)%2==0 && max(c, min(b,a)))
        cc = 1;
    cout << aa <<" "<<bb<<" "<<cc<<endl;
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
