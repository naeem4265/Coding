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
    ll i,j,n,m,k=3;
    cin >> n ;
    for(i=1; i<10008; i++)
    {
        m = pow(i,k);
        m = n-m;
        ll l=1,h=10008,mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            ll x = pow(mid,k);
            if(x==m)
            {       cout <<i<<" "<<mid<<endl;
                cout <<"YES\n";
                return ;
            }
            else if(x>m)
                h = mid-1;
            else
                l = mid+1;
        }
    }
    cout <<"NO\n";
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
