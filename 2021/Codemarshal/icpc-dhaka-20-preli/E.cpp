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

void solve(ll t)
{
    ll i,j,n,m,k,l,r;
    string s;
    scanf("%lld",&n);
    ll d[n+5],c[n+5],sum=0;

    for(i=0; i<n; i++)
    {
        scanf("%lld",&d[i]);
        c[i] = d[i];
        if(d[i]>0)
            sum += d[i];
    }

    sort(c,c+n);



    for(l=0; l<n; l++)
    {
        if(d[l]>0) break;
    }
    for(r=n-1; r>=0; r--)
    {
        if(d[r]>0) break;
    }

    printf("Case %lld: ",t);

    if(r<l)
    {
        printf("%lld 0\n",c[n-1]);
        return ;
    }

    if(l==r)
    {
        printf("%lld 0\n",d[l]);
        return ;
    }

    ll ct= 0;
    for(i=l ; i<r; i++)
    {
        if(d[i]<0)
        {
            for(j=i+1; j<=r; j++)
            {
                if(d[j]>0)
                break;
            }
            ct++;
            i = j;
        }
    }
    printf("%lld %lld\n",sum,ct);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
