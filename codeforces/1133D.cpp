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
    int i,j,n,m,k,g;
    cin >> n ;
    int ans=0,ct=0,mx=0,a[n+5],b[n+5];
    map < pair<int,int>,int > mymap;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> b[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==0 && b[i]==0) ct++;
        if(a[i]==0 || b[i]==0)
        {
            if(b[i]==0)
                mx++;
            continue;
        }
        if(a[i]<0)
        {
            a[i] *= -1;
            b[i] *= -1;
        }
        g = __gcd(abs(a[i]),abs(b[i]));
        a[i] = a[i]/g;
        b[i] = b[i]/g;
              //cout <<a[i]<<" "<<b[i]<<" "<<mymap[mp(a[i],b[i])]<<endl;
        mymap[mp(a[i],b[i])]++;
        ans = max(ans,mymap[mp(a[i],b[i])]);
    }
    cout <<max(mx,ans+ct)<<endl;
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

