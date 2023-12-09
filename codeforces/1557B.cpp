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
    cin >> n >> k;
    ll d[n+5],e[n+5];
    ll ct=1;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        e[i] = d[i];
    }
    sort(e,e+n);
    i=0;
    while(i<n && d[i]==e[i])
        i++;
    if(i==0) ct--;
    for( ; i<n;)
    {
        ll l=0,h=n-1;
        while(l<=h)
        {
            m = (l+h)/2;
            if(e[m]==d[i])
                break;
            if(d[i]<e[m])
                h = m-1;
            else
                l = m+1;
        }
        i++,m++;
        ct++;    //cout <<i<<" "<<m<<" "<<d[i]<<" "<<e[m]<<endl;
        while(i<n && m <n && d[i]==e[m])
            i++,m++;
    }     // cout << ct << endl;

    if(ct<=k)
        cout <<"Yes\n";
    else
        cout <<"No\n";
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
