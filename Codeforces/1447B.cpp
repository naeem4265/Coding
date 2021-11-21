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
    int i,j,n,m,k,a;
    cin >> n >> m;
    int sum = 0,ct=0,ok=0,mn=Mod;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> a;
            if(a<0) ct++;
            if(a==0) ok=1;
            sum += abs(a);
            mn = min(abs(a),mn);
        }
    }
    if(ok || ct%2==0)
        cout <<sum<<endl;
    else
        cout <<sum-2*mn<<endl;
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

