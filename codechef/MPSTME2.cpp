#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

bool check(ll man,ll left, ll x)
{           //cout <<man << " "<< x <<endl;
    if(left==0)
    {          //cout <<"asci "<< man << endl;
        if(x%man==0) return 1;
        return 0;
    }
    if((x-1)%man) return 0;

    return  check(man, left-1, ((x-1)/man)*(man-1));
}

void solve(ll t)
{
    ll i,j,n,m,k;
    n = t;
    for(i=sqrt(n)+1; i>1; i--)
    {
        if(check(i, i, n))
        {
            printf("%lld coconuts, %lld people and 1 monkey\n",n,i);
            return;
        }
    }
    printf("%lld coconuts, no solution\n",n);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    while(1)
    {
        scanf("%lld", &t);
        if(t<0) return 0;
        solve(t);
    }
    return 0;
}
