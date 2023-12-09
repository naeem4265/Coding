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
    ll i,j,n,m,k,x;
    string s;
    cin >> n;
    ll l=1,h=n;
    ll left = 1, right = n,mid;

    while(l<=h)
    {
        m = (l+h)/2;
        cout <<"? "<<m<<" "<<n<<endl;
        cin >> x;
        if(x==0)
        {
            if(right>m) right = m;
            h = m-1;
        }
        else
            l = m+1;
    }
    cout <<"? 1 "<<right<<endl;
    cin >> x;
    cout <<"? 1 "<<right-1<<endl;
    cin >> mid;
    mid = right-(x-mid);
    cout <<"? 1 "<<mid-1<<endl;
    cin >> x;
    cout <<"? 1 "<<mid-2<<endl;
    cin >> left;
    left = mid-1-(x-left);
    cout <<"! "<<left<<" "<<mid<<" "<<right<<endl;
    cout.flush();


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
