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
    string s;
    cin >> n ;
    ll d[n+5];
    ll sum = 0;
    for(i=0; i<n+2; i++)
    {
         cin >> d[i];
         sum += d[i];
    }
    sort(d,d+n+2);
    m = sum-d[n+2-1];
    for(i=0; i<n+1; i++)
    {
        if((sum-d[i]-d[n+2-1])==d[n+2-1])
        {
            for(j=0; j<n+1; j++)
            {
                if(i==j) continue;
                cout <<d[j]<<" ";
            }
            cout <<endl;
            return ;
        }
    }
    for(i=0; i<n+2; i++)
    {
        if(i==(n-2+2)) continue;
        if((sum-d[i]-d[n+2-2])==d[n+2-2])
        {
            for(j=0; j<n+2; j++)
            {
                if(j==(n-2+2)) continue;
                if(i==j) continue;
                cout <<d[j]<<" ";
            }
            cout <<endl;
            return ;
        }
    }
    cout <<-1<<endl;
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
