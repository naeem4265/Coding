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

void solve(ll t)
{
    ll i,j,n,m,k,q,temp;
    string s;
    cin >> n >> q;
    ll d[n+5],ct[35];
    memset(ct,0,sizeof(ct));

    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        temp = d[i];
        for(j=1; j<=32; j++)
        {
            ct[j] += temp&1;
            temp /= 2;
        }
    }
    ll sum = 0;
    for(j=1,k=1; j<=32; j++)
    {
        if(ct[j])
            sum += k;
        k = k*2;
    }
    cout << sum <<endl;
    for(i=0; i<q; i++)
    {
        ll in;
        cin >> in ;
        temp = d[in];
        for(j=1; j<=32; j++)
        {
            ct[j] -= temp&1;
            temp /= 2;
        }
        cin >> d[in];
        temp = d[in];
        for(j=1; j<=32; j++)
        {
            ct[j] += temp&1;
            temp /= 2;
        }
        sum = 0;
        for(j=1,k=1; j<=32; j++)
        {
            if(ct[j])
                sum += k;
            k = k*2;
        }
        cout << sum <<endl;
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

