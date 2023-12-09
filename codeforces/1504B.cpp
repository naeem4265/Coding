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
    ll i,j,n,m,k;
    string a,b;
    cin >> n ;
    cin >> a >> b;
    ll a1=0,a0=0,b1=0,b0=0;
    for(i=0; i<n; i++)
    {
        if(a[i]=='1') a1++;
        else a0++;
    }
    for(i=0; i<n; i++)
    {
        if(b[i]=='1') b1++;
        else b0++;
    }
    ll ct = 0;
    for(i=n-1; i>=0; i--)
    {      //cout <<a1<<" "<<a0<<" "<<i<<endl;
        if(a[i]==b[i] && ct%2==0)
        {
            if(a[i]=='1') a1--;
            else a0--;
            continue;
        }
        else if(a[i]!=b[i] && ct&1)
        {
            if(a[i]=='1') a1--;
            else a0--;
            continue;
        }
        if(a1!=a0)
        {           //cout <<a1<<" "<<a0<<" "<<i<<endl;
            cout <<"NO\n";
            return ;
        }
        if(a[i]=='1') a1--;
        else a0--;
        ct++;
    }
    cout <<"YES\n";
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
