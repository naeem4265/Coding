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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5],pre[n+5],time[n+5],sum=0,ct;
    pre[0] = 0;

    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        sum += d[i];
        ct = sum/i;
        if(sum%i)  ct++;
        pre[i] = max(pre[i-1], ct);
    }
    for(i=1; i<=n; i++)
    {
        ct = sum/i;
        if(sum%i)  ct++;
        time[i] = max(pre[i], ct);
    }
    cin >> q;
    while(q--)
    {
        ll t,l=1,h=n,ans=-1;
        cin >> t;
        while(l<=h)
        {
            m = (l+h)/2;
            if(time[m]<=t)
            {
                ans = m;
                h = m-1;
            }
            else
                l = m+1;
        }
        cout <<ans<<endl;
    }
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
