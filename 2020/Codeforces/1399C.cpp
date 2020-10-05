#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
int ct[limit];
void solve(int t)
{
    int a,k,i,j,n,mx=0,sum=0,ans=0;
    cin >> n;

    int S[n+5];
    for(i=0; i<n; i++)
        cin >> S[i];
    sort(S,S+n);

    for(k=1; k<102; k++)
    {
        for(i=0;i<200; i++) ct[i]=0;
        mx=0;
        for(i=0; i<n; i++)
        {
            for( j=n-1; j>i; j--)
            {
                if((S[i]+S[j])==k && ct[j]==0)
                {
                    ct[j]=1;
                    mx++;
                    break;
                }
            }
        } //cout <<k<<" "<<mx<<endl;
        ans = max(ans,mx);
    }
    cout <<ans<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
