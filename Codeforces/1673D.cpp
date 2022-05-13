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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    ll a1,a2,d1,d2,n1,n2;
    cin >> a1 >> d1 >> n1;
    cin >> a2 >> d2 >> n2;
    ll n1th = a1+(n1-1)*d1;
    ll n2th = a2+(n2-1)*d2;
    if((a2-a1)%d1 || (a2+d2-a1)%d1 || a2<a1 || (n2th>n1th))
    {
        cout <<0<<endl;
        return;
    }
    ll ans = 0, next;
    if(d1==d2)
    {
        for(i=1; i*i<=d2; i++)
        {
            if(d2%i)  continue;
            next = (d1*i)/__gcd(d1,i);
            ll n1th = a1+(n1-1)*d1;
            ll n2th = a2+(n2-1)*d2;
            if((a2-next)<a1 || (n2th+next)>n1th)
            {
                cout <<-1<<endl;
                return ;
            }
            ll temp = next/i;
            temp = (temp*temp)%Mod;
            ans = (ans+temp)%Mod;
            j = d2/j;
            next = (d1*j)/__gcd(d1,j);
            n1th = a1+(n1-1)*d1;
            n2th = a2+(n2-1)*d2;
            if((a2-next)<a1 || (n2th+next)>n1th)
            {
                cout <<-1<<endl;
                return ;
            }
            temp = next/j;
            temp = (temp*temp)%Mod;
            ans = (ans+temp)%Mod;
        }
        cout << ans <<endl;
        return ;
    }

    for(i=1; i*i<=d2+1; i++)
    {
        if(d2%i)  continue;
        j = d2/i;
        if(d1%j)
        {
            next = (d1*j)/__gcd(d1,j);
            ll n1th = a1+(n1-1)*d1;
            ll n2th = a2+(n2-1)*d2;
            if((a2-next)<a1 || (n2th+next)>n1th)
            {
                cout <<-1<<endl;
                return ;
            }
            ll temp = next/j;
            temp = (temp*temp)%Mod;
            ans = (ans+temp)%Mod;
                 //cout <<i<<' '<<next<<" up "<<ans<<endl;
        }
        if(d1%i)
        {
            next = (d1*i)/__gcd(d1,i);
            ll n1th = a1+(n1-1)*d1;
            ll n2th = a2+(n2-1)*d2;
            if((a2-next)<a1 || (n2th+next)>n1th)
            {
                cout <<-1<<endl;
                return ;
            }
            ll temp = next/i;
            temp = (temp*temp)%Mod;
            ans = (ans+temp)%Mod;
                 //cout <<i<<" "<<next<<" dn "<<ans<<endl;
        }
    }
    cout << ans <<endl;

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
        solve(t);
    return 0;
}
