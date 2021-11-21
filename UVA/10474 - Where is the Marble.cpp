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
    int i,j,n,m,k,q;
    t=0;
    while(++t)
    {
        cin >> n >> q;
        if(n==0 && q==0)
            return ;
        int D[n+5],ind[ 10008];
        memset(ind,0,sizeof(ind));
        for(i=0; i<n; i++)
            cin >> D[i];
        sort(D,D+n);
        for(i=0; i<n; i++)
        {
            if(ind[D[i]]) continue;
            ind[D[i]]=i+1;
        }
        cout <<"CASE# "<<t<<":\n";
        for(i=0; i<q; i++)
        {
            cin >> m;
            if(ind[m])
                cout <<m<<" found at "<<ind[m]<<endl;
            else
                cout <<m<<" not found\n";
        }
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
//accepted

