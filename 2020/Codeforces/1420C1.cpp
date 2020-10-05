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
ll D[limit];

void solve(int t)
{
    ll i,j,n,m;
    cin >> n >>m;
    for(i=0; i<n; i++)
        cin >> D[i];
    D[n] = D[n+1] = 0;
    ll ans = 0;
    for(i=1; i<=n; )
    {
        while(D[i-1]<=D[i])
        {
            i++;
        }
        ans += D[i-1];    //cout <<ans<<" "<<i-1<<endl;;

        while(D[i-1]>=D[i])
        {
            i++;
            if(i>n)
                break;
        }
        ans -= D[i-1];  //cout <<" here "<<ans<<" "<<i<<endl;
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

