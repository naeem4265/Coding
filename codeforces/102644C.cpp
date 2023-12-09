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
ll M[2][2],T[2][2],Result[2][2],r1=2,c1=2,c2=2;
void Bigmod(ll p)
{
    ll i,j,k;
    while(p)
    {
        if(p&1)
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c2; j++)
                {
                    ll sum=0;
                    for(k=0; k<c1; k++)
                    {
                        sum = (sum+(M[i][k]*Result[k][j])%Mod)%Mod;
                    }
                    T[i][j] = sum;
                }
            }
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c2; j++)
                {
                    Result[i][j] = T[i][j];
                }
            }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                ll sum=0;
                for(k=0; k<c1; k++)
                {
                    sum = (sum+(M[i][k]*M[k][j])%Mod)%Mod;  //cout <<sum<<endl;
                }
                T[i][j] = sum;  //cout <<i<<" "<<j<<" "<<sum<<"\n";
            }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                M[i][j] = T[i][j];
            }
        }
        p = p/2;
    }
}
void solve(int t)
{
    ll i,j,n,m;

    M[0][0] = M[0][1] = M[1][0] = 1;
    Result[0][0] = Result[0][1] = Result[1][0] = 1;
    M[1][1] = Result[1][1] = 0;

    cin >> n;
    if(n==0)
    {
        cout <<0<<endl;
        return ;
    }
    Bigmod(n-1);
    cout << Result[0][1]  <<endl;

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


