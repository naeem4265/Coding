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
    ll i,j=0,m;
    double out[256000],n;
    while(cin >> n)
    {
        out[j] = sqrt(n);
        j++;
    }
    while(j)
    {
        j--;
        printf("%.4lf\n",out[j]);
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}



