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
    int i,j,n,m,k;
    cin >> n >> k;
    int d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    int ct=0,ans=Mod;
    for(i=1; i<=100; i++)
    {
        ct = 0;
        for(j=0; j<n; )
        {
            if(d[j]!=i)
            {
                ct++;
                j += k;
            }
            else
                j++;
        }
        ans = min(ans,ct);
    }
    cout <<ans<<endl;
    return ;
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

