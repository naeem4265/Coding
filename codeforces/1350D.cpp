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
    int i,j,n,m,k,ok=0;
    cin >> n >> k;
    int D[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        if(D[i]==k) ok=1;
    }
    if(ok==0)
    {
        cout <<"no\n";
        return ;
    }
    if(n==1)
    {
        cout <<"yes\n";
        return ;
    }
    for(i=1; i<n; i++)
    {
        if((D[i]>=k && D[i+1]>=k)||(i<n-1 && D[i]>=k && D[i+2]>=k))
        {
            cout <<"yes\n";
            return ;
        }
    }
    cout <<"no\n";
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

