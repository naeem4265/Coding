#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k,x,y;
    string s;
    scanf("%d %d",&x,&y);
    n = sqrt(x+y);
    if((n*n)!=(x+y))
    {
        printf("NO\n");
        return ;
    }
    ll even = 1,odd = n-1;
    while(even<=odd)
    {
        if(y==(2*even*odd))
        {
            printf("YES\n%d\n1 2\n",n);
            even--;
            odd--;
            k = 3;
            while(odd)
            {
                printf("1 %d\n",k);
                k++;
                odd--;
            }
            while(even)
            {
                printf("2 %d\n",k);
                k++;
                even--;
            }
            return ;
        }
        even++;
        odd--;
    }
    printf("NO\n");
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
