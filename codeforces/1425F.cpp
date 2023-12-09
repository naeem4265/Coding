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
    int D[n+5],out[n+5],x;
    for(i=2; i<=n; i++)
    {
        cout <<"? "<<i-1<<" "<<i<<endl;
        cin >> D[i];
    }
    cout <<"? "<<1<<" "<<3<<endl;
    cin >> x;
    fflush(stdout);
    for(i=0; i<=1000; i++)
    {
        out[1] = i;
        for(j=2; j<=n; j++)
        {
            out[j] = D[j]-out[j-1];
            if(out[j]<0)
                break;
        }
        if(j>n && ((out[1]+out[2]+out[3])==x))
        {
            cout <<"! ";
            for(j=1; j<=n; j++)
            {
                cout <<out[j];
                if(j!=n) cout <<" ";
            }
            cout <<endl;
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
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


