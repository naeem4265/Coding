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

ll bs(ll a[], ll n)
{
    ll i, l=0,h=Mod,m, ans = 0;
    while(l<=h)
    {
        m = (l+h)/2;
        bool placed = 0;
        ll ct = 0;
        for(i=0; i<n; i++)
        {
            if(a[i]<m)
            {
                ct++;
                if(i==n-1 && (a[i]+a[i+1]+1)>=m)
                    placed = 1;

                if((a[i+1]+a[i]+1)>=m)
                    i++;
            }
            if(a[n]>=m || (a[i]-1)/2 >=m)
                placed = 1;
        }
        if(ct==0 || (ct==1 && placed))
        {
            ans = m;
            l = m+1;
            continue;
        }
        ct = 0;
        placed = 0;
        for(i=0; i<n; i++)
        {
            if(a[i]<m)
            {
                ct++;
                if((a[i+1]+a[i])/2>=m)
                    placed = 1;
                else if(i && (a[i-1]+a[i])/2>=m )
                {
                    placed = 1;
                }
            }
        }
        if(ct==1 && placed)
        {
            l = m+1;
            ans = m;
        }
        else
            h = m-1;
    }
    return ans;
}

void solve(ll tt)
{
    ll i,j,n,m,k,d;

    cin >> n >> d;
    ll a[n+5];
    for(i=0; i<n; i++)
        cin >> a[i];

    a[n] = d;
    for(i=n; i>0; i--)
        a[i] = a[i]-a[i-1]-1;
    a[0]--;
    cout << bs(a, n) <<endl;

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
