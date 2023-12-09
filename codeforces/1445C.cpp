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

void solve(int t)
{
    ll p,q,i,j,mx=1,x,y;
    scanf("%lld %lld",&p,&q);
    if(p%q)
    {
        printf("%lld\n",p);
        return ;
    }
    ll ans = 1;
    for(i=1; i*i<=q; i++)
    {

        if(q%i==0)
        {
            x = p;
            while(x%i==0 && i>1)
            {
                x /= i;
                if(x%q)
                    ans = max(ans,x);  // cout <<i<<" "<<x<<" "<<ans<<endl;
            }
            x = p;
            while(x%(q/i)==0)
            {
                x /= (q/i);
                if(x%q)
                    ans = max(ans,x);
            }
        }
    }
    printf("%lld\n",ans);
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

