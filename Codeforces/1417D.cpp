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
    int i,j,n,m,k,sum=0;
    cin >> n ;
    int D[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        sum += D[i];
    }
    if(sum%n)
    {
        cout <<"-1\n";
        return ;
    }
    int x;
    cout <<3*(n-1)<<endl;
    for(i=2; i<=n; i++)
    {
        x = D[i]%i;
        if(x) x = i-x;
        D[i] += x;
        cout <<1<<" "<<i<<" "<<x<<endl;
        cout <<i<<" "<<1<<" "<<D[i]/i<<endl;
    }
    x = sum/n;
    for(i=2; i<=n; i++)
    {
        cout <<1<<" "<<i<<" "<<x<<endl;
    }
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

