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
    ll i,j,n,m,k,x;
    cin >> n ;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((i*3+j*5)>n) break;
            for(k=0; k<n; k++)
            {
                x = i*3+j*5+k*7;
                if(x==n)
                {
                    cout <<i<<" "<<j<<" "<<k<<endl;
                    return ;
                }
                if(x>n)
                    break;
            }
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
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
//Accepted
