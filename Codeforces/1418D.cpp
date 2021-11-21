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
    int i,j,n,m,q;
    cin >> n >> q;
    int D[n+5];
    for(i=0; i<n; i++)
        cin >> D[i];
    sort(D,D+n);
    int L=D[0],R=D[n-1];
    int ml=L,mr=R;
    for(i=1; i<n-1; i++)
    {
        if((D[i]-L)<(R-D[i]))
            ml = D[i];
    }
    for(i=n-2; D[i]>ml; i--)
    {
        if((R-D[i])<(D[i]-L))
            mr = D[i];
    }
    cout <<ml-L+R-mr<<endl;
    for(i=0; i<q; i++)
    {
        int t,x;
        cin >> t >> x;
        if(t==1)
        {
            if(x<L)
                L = x;
            else if(x>R)
                R = x;
            else if()
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

