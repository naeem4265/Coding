#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 48
using namespace std;

///knapsack with meet in the middle O(n*2^n/2) ;
ll D[limit],W;
void middle(ll pos,ll n,ll sum,vector<ll> &A)
{
    if(pos>n)
    {
        if(sum<=W) A.pb(sum);
        return ;
    }
    middle(pos+1,n,sum,A);
    middle(pos+1,n,sum+D[pos],A);
}

void solve(int t)
{
    ll n,i,j;
    scanf("%lld %lld",&n,&W);
    for(ll i=1; i<=n; i++)
    {
        scanf("%lld",&D[i]);
    }
    sort(D,D+n+1);
    vector<ll>A,B;
    A.pb(0);
    middle(1,n/2,0,A);
    middle(n/2+1,n,0,B);
    sort(A.begin(),A.end());
    ll mx=0,sz=A.size();
    for(i=B.size()-1; i>=0; i--)
    {
        n = (W-B[i]);
        ll l=0,h=sz-1,m;
        while(l<=h)
        {
            m = (l+h)/2;
            if(n>=A[m])
            {
                if((B[i]+A[m])<=W && mx<(B[i]+A[m]))
                    mx = B[i]+A[m];
                l = m+1;
            }
            else
            {
                h = m-1;
            }
        }
    }
    printf("%lld\n",mx);
    return ;
}

int  main()
{         ///atcoder abc184F
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

