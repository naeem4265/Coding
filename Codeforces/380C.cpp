#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 3000008
using namespace std;

ll seq[limit],op[limit],cl[limit],n;
string s;
struct st
{
    ll s,o,c;
};

void build(ll at, ll l,ll r)
{
    if(l==r)
    {
        seq[at]=0;
        if(s[l]=='(')  op[at]++;
        else   cl[at]++;
        return ;
    }
    ll m = (l+r)/2;
    build(2*at, l, m);
    build(2*at+1, m+1, r);
    ll mn = min(op[2*at], cl[2*at+1]); //cout <<mn<<" "<<op[2*at]<<" "<<cl[2*at+1] <<endl;
    seq[at] = seq[2*at]+seq[2*at+1]+mn;
    op[at] = op[2*at]+op[2*at+1]-mn;
    cl[at] = cl[2*at]+cl[2*at+1]-mn;  //cout <<at<<" "<<l<<" "<<r<<" "<<seq[at]<<" "<<op[at]<<" "<<cl[at]<<endl;
}

st query(ll at, ll l,ll r,ll from, ll to)
{
    st z,z1,z2;
    z.s = 0;
    z.o = 0;
    z.c = 0;
    if(l>to || r<from)  return z;
    if(l>=from && r<=to)
    {
        z.s = seq[at];
        z.o = op[at];
        z.c = cl[at];
        return z;
    }
    ll m = (l+r)/2;
    z1 = query(2*at, l, m, from, to);
    z2 = query(2*at+1, m+1, r, from, to);
    ll mn = min(z1.o, z2.c);
    z.s = z1.s+z2.s+mn;
    z.o = z1.o+z2.o-mn;
    z.c = z1.c+z2.c-mn;
    return z;
}

void Please_AC(ll tt)
{
    cin >> s;
    n = s.size();
    build(1,0,n-1);
    ll q;
    cin >> q;
    while(q--)
    {
        ll from, to;
        cin >> from >> to;
        from--;
        to--;
        st z;
        z = query(1,0,n-1,from, to);
        cout <<2*z.s<<endl;
    }
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
