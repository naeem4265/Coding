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

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    if(n==1)
    {
        cout <<9<<endl;
        return ;
    }
    char ch[n+5],c='0';
    ch[1] = '9';
    ch[2] = '8';
    ch[3] = '9';
    for(j=4; j<=n; j++)
    {
        ch[j] = c;
        if(c=='9') c='0';
        else
            c++;
    }
    for(i=1; i<=n; i++) cout <<ch[i];
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

