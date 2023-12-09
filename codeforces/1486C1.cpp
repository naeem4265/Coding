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
    ll i,j,n,m,k,x,left;
    cin >> n ;
    ll l=1,r=n,s;
    cout <<"? 1 "<<n<<endl;
    cin >> s;
    ll ans;
    while(l<r)
    {
        if(r==1+l)
        {
            if(s==r)
                ans = l;
            else
                ans = r;
            cout <<"! "<<ans<<endl;
            cout.flush();
            return ;
        }
        m = (l+r)/2;
        if(s>=m)
        {
            cout <<"? "<<m<<" "<<r<<endl;
            cin >> x;
            if(x==s)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        else
        {
            cout <<"? "<<l<<" "<<m<<endl;
            cin >> x;
            if(x==s)
            {
                r = m;
            }
            else
            {
                l = m;
            }
        }
        cout <<"? "<<l<<" "<<r<<endl;
        cin >> s;
    }
    cout <<"! "<<l<<endl;
    cout.flush();
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
