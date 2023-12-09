#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll l1,ll l2, ll p, ll  q)
{
    //cout << 2*(q*q*l2+p*q-p*q*l1-q*q)/(p*p-p*q) << endl;
    printf("%lld\n", 2*(q*q*l2+p*q-p*q*l1-q*q)/(p*p-p*q));
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    ll p,q,l1,l2;

    /**
        we know picks theorem, A = i+b/2-1
        it is always true that b2 = (p/q)*b1 if we multipy every cordinate by p/q
        it is also always true that length of every edge of polygon will change by length2= (p/q)*lenght1
    **/

    while(1)
    {
        char ch;
        //cin >> l1 >> l2 >> p >> ch >> q;
        scanf("%lld %lld %lld %c %lld", &l1, &l2, &p, &ch, &q);     //cout <<l1<<" "<<l2<<" "<<p<<" "<<q<<endl;
        if((l1+l2+p+q)==0) return 0;
        solve(l1,l2,p,q);
    }
}
