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
    int i,j,n,m;
    cin >> n;
    int D[n+5];
    vector<int> chep;
    for(i=0; i<n; i++)
        cin >> D[i];
    sort(D,D+n);
    m = (n-1)/2;
    for(i=0; i<m; i++)
        chep.pb(D[i]);
    cout <<m<<endl;
    for(i=m,j=0; i<n; i++,j++)
    {
        cout <<D[i]<<" ";
        if(j<m)
            cout <<chep[j]<<" ";
    }
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

