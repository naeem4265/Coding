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
    cin >> n ;
    ll D[n+5];
    for(i=1; i<=n; i++) cin >> D[i];
    ll ct = 0;
    for(i=2; i<=n; i++)
    {
        if(D[i-1]<=D[i])
        {
            if(D[i]<=2*D[i-1]) continue;
            while(D[i]>2*D[i-1])
            {
                D[i-1] = D[i-1]*2;
                ct++;
            }
        }
        else
        {
            if(D[i-1]<=2*D[i]) continue;
            ll temp = D[i];
            while(D[i-1]>2*D[i])
            {
                D[i] = D[i]*2;
                ct++;
            }
            D[i] = temp;
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
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
