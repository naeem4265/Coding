#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll x[limit],y[limit],ansx[limit],ansy[limit];

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll x1,y1,x2,y2,x3,y3;
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));

    for(i=0; i<n; i++)
    {
        cin  >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        ll mn,mx;
        mn = min({x1,x2,x3});
        mx = max({x1,x2,x3});
        x[mn+1]++;
        x[mx]--;
        mn = min({y1,y2,y3});
        mx = max({y1,y2,y3});
        y[mn+1]++;
        y[mx]--;
    }
    ll sum = 0;
    for(i=0; i<limit; i++)
    {
        sum += x[i];
        ansx[i] = sum;
    }
    sum = 0;
    for(i=0; i<limit; i++)
    {
        sum += y[i];
        ansy[i] = sum;
    }
    ll q;
    cin >> q;
    cout <<"Case "<<t<<":\n";
    for(i=0; i<q; i++)
    {
        char ch;
        ll idx;
        cin >> ch >> idx;
        if(ch=='x')
        {
            cout << ansx[idx] << endl;
        }
        else
        {
            cout << ansy[idx] << endl;
        }
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
