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
ll n,c,q,l[50],r[50],csum[50];
string s;

void f(ll pos)
{   //cout <<pos<<" "<<endl;
    if(pos<=n)
    {
        cout <<s[pos-1]<<endl;
        return ;
    }
    for(ll i=1; i<=c; i++)
    {
        if(csum[i]>=pos)
        {
            f((pos-csum[i-1]+l[i]-1));
            return;
        }
    }
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n >> c >> q;
    cin >> s;
    csum[0] = n;
    for(i=1; i<=c; i++)
    {
        cin >> l[i] >> r[i];
        csum[i] = csum[i-1] + r[i]-l[i]+1;
    }
    while(q--)
    {
        ll pos;
        cin >> pos;
        f(pos);
    }
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
        Please_AC(t);
    return 0;
}
