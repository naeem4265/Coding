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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5],even=0,odd=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]&1) odd++;
        else even++;
    }
    ll ans = 0;
    if(n%2)
    {
        if( abs(even-odd)>1 )
        {
            cout <<-1<<endl;
            return ;
        }
        if(even>odd)
        {
            for(i=0,j=0; i<n; i+=2)
            {
                while(d[j]&1) j++;
                ans += abs(j-i);
                j++;
            }
        }
        else
        {
            for(i=0,j=0; i<n; i+=2)
            {
                while(d[j]%2==0) j++;
                ans += abs(j-i);
                j++;
            }
        }
        cout << ans << endl;
        return ;
    }
    else
    {
        if(even!=odd)
        {
            cout <<-1<<endl;
            return ;
        }
        ll ct=0;

            for(i=0,j=0; i<n; i+=2)
            {
                while(d[j]&1) j++;
                ct += abs(j-i);
                j++;
            }
        ans = ct;
        ct = 0;
            for(i=0,j=0; i<n; i+=2)
            {
                while(d[j]%2==0) j++;
                ct += abs(j-i);
                j++;
            }
            ans = min(ans,ct);
            cout << ans <<endl;
            return ;

    }
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
