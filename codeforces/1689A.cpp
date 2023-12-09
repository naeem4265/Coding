#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string a,b,c="";
    cin >> n >> m >> k;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll cona=0,conb=0;
    for(i=0,j=0; i<n && j<m; )
    {
        if(a[i]<b[j] && cona<k)
        {
            c += a[i];
            cona++;
            i++;
            conb = 0;
        }
        else if(a[i]>b[j] && conb<k)
        {
            c += b[j];
            conb++;
            j++;
            cona = 0;
        }
        else if(a[i]<b[j] && cona==k)
        {
            c += b[j];
            conb++;
            cona = 0;
            j++;
        }
        else
        {
            c += a[i];
            cona++;
            conb = 0;
            i++;
        }
    }
    cout <<c<<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
