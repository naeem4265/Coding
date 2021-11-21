#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 20000002
using namespace std;
/// uva 1730 Sum of MSLCM

///Number of Divisor for 1 to n. Complexity less then O(n*logn)
ll nod[limit];
void NOD(ll n)
{
    ll i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j+=i)
            nod[j]++;
    }
}

///Sum of Divisor for 1 to n. Complexity less then O(n*logn)
ll sod[limit];
void SOD(ll n)
{
    ll i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j+=i)
            sod[j] += i;
    }
}

int  main()
{
//    Fast
//    Freed
//    Fout
    NOD(limit-1);

    SOD(limit-1);

    sod[1] = 0;
    for(ll i=2; i<limit; i++)
        sod[i] += sod[i-1];
    ll n;
    while(1)
    {
        scanf("%lld", &n);
        if(n==0)
            return 0;
        printf("%lld\n",sod[n]);
    }
    return 0;
}
