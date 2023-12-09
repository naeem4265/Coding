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
    ll i,j,n,m,k;
    cin >> n ;
    ll D[n+5],B[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        B[i] = D[i];
    }
    if(n<3)
    {
        cout <<"YES\n";
        return ;
    }
    D[0] = D[n+1] = B[0] = B[n+1] = Mod;
    for(i=1; i<=n; i++)
    {
        if(D[i]>D[i-1])
        {
            ll dis = D[i-1],mx=0;
            D[i-1]=0;
            D[i] -= dis;
            mx = D[i];
            for(j= i+1; j<=n; j++)
            {
                if(D[j]<=mx)
                    break;
                ll tt = D[j];
                D[j] = max(mx,D[j]-dis);
                dis = min(dis,tt-D[j]);
                mx = D[j]; // cout <<mx<<' '<<dis<<' '<<D[j]<<" "<<j<<endl;
            }
            for(j=i; j<=n; j++)
            {
                if(D[j]<D[j-1])
                    break;
            }
            if(j>n)
            {
                cout <<"YES\n";
                return ;
            }
            break;
        }
    }
    if(n<3 || i>n)
    {
        cout <<"YES\n";
        return ;
    }
    for(i=n; i>0; i--)
    {
        if(B[i]>B[i+1])
        {
            ll dis = B[i+1],mx=0;
            B[i+1]=0;
            B[i] -= dis;
            mx = B[i];
            for(j= i-1; j>0; j--)
            {
                if(B[j]<=mx)
                    break;
                ll tt = B[j];
                B[j] = max(mx,B[j]-dis);
                dis = min(dis,tt-B[j]);
                mx = B[j];
            }
            for(j=i ; j>0; j--)
            {
                if(B[j]>B[j+1])
                    break;
            }
            if(j<1)
            {
                cout <<"YES\n";
                return ;
            }
            break;
        }
    }
    if(n<3 || i<1)
    {
        cout <<"YES\n";
        return ;
    }
    cout <<"NO\n";

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

