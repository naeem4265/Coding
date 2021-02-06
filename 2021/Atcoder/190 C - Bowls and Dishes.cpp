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
ll cta[limit],ctb[limit],A[limit],B[limit],a,b;

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n >> m;

    for(i=0; i<m; i++)
    {
        cin >> A[i] >> B[i];
        cta[A[i]]++;
        cta[B[i]]++;
    }
    cin >> k;
    for(i=0; i<k; i++)
    {
        cin >> a >> b;
        if(ctb[a]) ctb[b]++;
        else if(ctb[b]) ctb[a]++;
        else
        {
            if(cta[a]>=cta[b]) ctb[a]++;
            else  ctb[b]++;
        }
    }
    ll ct=0;
    for(i=0; i<m; i++)
    {
        a = A[i];
        b = B[i];
        if(ctb[a] && ctb[b])
        {
            ct++;
        }
    }
    cout <<ct<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

