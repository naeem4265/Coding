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
    ll i,j,n,m,sum=0,ok=1,ace=0;
    cin >> n >> m;
    ll D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
        sum += D[i];
        if(D[i]!=m)
            ok=0;
        if(D[i]==m)
            ace=1;
    }
    if(ok)
        cout <<0<<endl;
    else if((sum/n==m && sum%n==0)||ace)
    {
        cout <<1<<endl;
    }
    else
    {
        cout <<2<<endl;
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

