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
int ct[limit];
void solve(int t)
{
    int a,k,i,j,n,m;
    scanf("%d %d", &n, &m);
    //cin >> n >> m;
    for(i=0; i<=m+5; i++) ct[i]=0;
    int D[n+5];
    D[0] = 0;
    D[n+1] = m;
    for(i=1; i<=n ;i++)
        scanf("%d", &D[i]);
       // cin >> D[i];
    sort(D,D+n+2);
    for(i=1; i<=n+1; i++)
    {
        int dif = D[i]-D[i-1];
        for(j=1; j<dif; j++)
        {
            ct[j] += (dif-1)/j;
        }
    }

    int q;
    scanf("%d", &q);
    //cin >> q;
    printf("Case %d:\n", t);
    while(q--)
    {
        scanf("%d",&a);
        //cin >> a;
        int l=1,r=m,mid,last_ind=m;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(ct[mid]<=a)
            {
                last_ind=mid;
                r = mid-1;
            }
            else
                l = mid+1;
        }
        printf("%d\n", last_ind);
       // cout <<last_ind<<endl;
    }
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
