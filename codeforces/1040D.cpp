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
string s;
bool ask(ll l, ll r)
{
    cout <<l<<" "<<r<<endl;
    cin >> s;
    return s=="Yes";
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> k;
    ll l = 1, r = n;
    while(1)
    {
        while((r-l)>50)
        {
            m = (l+r)/2;
            if(ask(l,m))
            {
                l = l-k;
                if(l<1)   l = 1;
                r = m+k;
                if(r>n)   r = n;
            }
            else
            {
                l = m-k;
                if(l<1)   l = 1;
                r = r+k;
                if(r>n)   r = n;
            }
        }
        ll x = rand()%(r-l+1);
        if(ask(l+x,l+x))
        {
            return ;
        }
        else
        {
            l = l-k;
            if(l<1)   l = 1;
            r = r+k;
            if(r>n)   r = n;
        }
    }
    return ;
}
int  main()
{
    srand(time(NULL));
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    //cout.flush();
    return 0;
}
