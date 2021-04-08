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
    cout <<"? 1 "<<n;
    ll smx,x,left=0,l,r=0;
    cin >> smx;
    if(smx!=1 && smx!=n)
    {
        cout <<"? 1 "<<smx<<endl;
        cin >> x;
        if(x==smx)
        {
            left = 1;
        }
    }
    if(smx==n) left = 1;
    while(l<=r)
    {
        if(left)
        {
            m = (l+smx)/2;
            cout <<"? "<<m<<" "<<smx<<endl;
            cin >> x;
            if(smx==x)
            {
                ans = m;
                l = m+1;
            }
            else
                l = m-1;
        }
        else
        {
            m = (smx+r)/2;
            cout <<"? "<<smx<<" "<<m<<endl;
            cin >> x;
            if(smx==x)
            {
                ans = m;
                l = m-1;
            }
            else
                r = m+1;
        }
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
