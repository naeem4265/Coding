#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10008
using namespace std;
int ind[limit];
void solve(int t)
{
    int i,j,n,m,ct=0;
    cin >> n;

    cin >> m;
    int B[m+5];
    for(i=0; i<limit; i++)
        ind[i]=0;
    for(i=1; i<=m; i++)
    {
        cin >> B[i];
        ind[B[i]]=i;
    }

    for(i=1; i<=m; i++)
    {        //cout <<i<<" "<<B[i]<<" "<<ind[n-B[i]]<<endl;
        if(ind[n-B[i]])
        {
            cout <<i<<" "<<ind[n-B[i]]<<endl;
            return ;
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



