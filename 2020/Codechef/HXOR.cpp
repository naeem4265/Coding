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
    cin >> n >> x;
    ll D[n+5],store[34];
    memset(store,0,sizeof(store));
    for(i=0; i<n; i++)   cin >> D[i];

    if(n==2)
    {
        for(j=32; j>=0;j--)
        {
            m = 1<<j;
            if(x && (D[0]&m))
            {
                D[1] = (D[1]^m);
                D[0] = (D[0]^m);
                x--;
            }
        }
        x = x%2;
        if(x)
        {
            m = 1;
            D[1] = (D[1]^m);
            D[0] = (D[0]^m);
        }
        cout <<D[0]<<" "<<D[1]<<endl;
        return ;
    }

    for(i=0; i<n; i++)
    {
        for(j=32; j>=0; j--)
        {
            m = 1<<j;
            if(D[i]&m)
            {
                if(x || store[j])
                {
                    D[i] = (D[i]^m);
                    if(store[j])
                        store[j]--;
                    else
                    {
                        x--;
                        store[j]++;
                    }
                }
            }
        }
    }
    for(j=32; j>=0; j--)
    {
        if(store[j]&1)
        {
            m = 1<<j;
            D[n-1] = (D[n-1]|m);
        }
    }

    for(i=0; i<n; i++)
    {
        if(i!=0) cout <<" ";
        cout <<D[i];
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


