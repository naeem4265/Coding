#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> m >> k;
    for(i=0; i<k; i++)
        cin >> j >> j;
    for(i=0; i<k; i++)
        cin >> j >> j;

    cout <<(n-1)+(m-1)+(n)*(m-1)+n<<endl;

    for(i=1; i<n; i++)
        cout <<"U";
    for(i=1; i<m; i++)
        cout <<"L";

    for(i=0; i<n; i++)
    {
        for(j=1; j<m; j++)
        {
            if(i&1)
                cout <<"L";
            else
                cout <<"R";
        }
        cout <<"D";
    }
    cout <<endl;


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
