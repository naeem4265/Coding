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
    int i,j,n,m,k;
    cin >> n ;
    int D[n+5],ind[n+5];

    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        ind[D[i]] = i;
    }
    vector<int> out;
    out.pb(0);
    int ct=0;
    for(i=n; i>0; i--)
    {
        while(ind[i]!=i)
        {
            out.pb(ind[i]);
            t = ind[i]+1;
            t = D[t];
            ind[t]--;
            t = ind[i];
            swap(D[t],D[t+1]);
            ind[i]++;
            //for(j=1; j<=n; j++) cout <<D[j]<<" "; cout <<endl;
        }
        if(out.size()>n)break;
    }
    if(out.size()==n)
    {
        for(i=1; i<n; i++)
            cout <<out[i]<<endl;
        return ;
    }
    cout <<-1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

