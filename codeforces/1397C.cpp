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
    ll i,j,n,m;
    cin >> n;
    ll D[n+5];
    for(i=0; i<n; i++)
        cin >> D[i];
    cout <<"1 1"<<endl;
    cout <<n-D[0]<<endl;
    D[0]=n;
    if(n==1)
        cout <<"1 1\n0";
    else
    {
        cout <<"2 "<<n<<endl;
        for(i=1; i<n; i++)
        {
            cout <<(n-1)*D[i]<<" ";
            D[i] += (n-1)*D[i];
        }
    }
    cout <<"\n1 "<<n<<endl;
    for(i=0; i<n; i++)
    {
        cout <<-1*D[i]<<" ";
    }
    cout <<endl;
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

