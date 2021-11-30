#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

int ncr[2028][2028];
int nCr(int n,int r)
{
    if(n==r) return ncr[n][r]=1;
    if(r==1) return ncr[n][1]=n&1;
    if(ncr[n][r]!=-1) return ncr[n][r];
    ncr[n][r] = (nCr(n-1,r-1)+nCr(n-1,r))&1;   //cout <<n<<" "<<r<<" ncr "<<ncr[n][r]<<endl;
    return ncr[n][r];
}

void solve(int t)
{
    int i,j,n,m,k;
    scanf("%d %d",&k, &n);
    int ans=0;
    for(i=0; i<n; i++)
    {
        cin >> m;
        ans = ans^m;
    }
    if(k==1) m=0;
    else  m = 1;
    k = min(k,n+1);
    for(i=1; i<k-1; i++)
    {
        m = (m+ncr[n-1][i])&1;   //cout <<n-1<<" "<<i<<" "<<ncr[n-1][i]<<" "<<m<<endl;
    }
    if(m&1)
        printf("%d\n",ans);
    else
        printf("0\n");
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    memset(ncr,-1,sizeof(ncr));
    for(int i=1; i<2025; i++)
        for(int j=1; j<=i; j++)
            nCr(i,j);
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

