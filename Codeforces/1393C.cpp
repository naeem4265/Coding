#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
int out[limit];
void solve(int t)
{
    int a,k,i,j,n,mx=0,ct=1,sum=0;
    cin >> n;
    int D[n+5];
    D[0]=0;
    D[n+1]=100000000;
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        out[i]=0;
    }
    sort(D,D+n+2);
    int last=0;
    for(i=1; i<=n; i++)
    {        //cout <<D[i]<<" "<<i<<endl;
        if(D[i]!=D[i+1])
        {
            ct = i-last;
            out[ct]++; // cout <<ct<<" "<<out[ct]<<" "<<i<<endl;
            mx = max(mx,ct);
            last=i;
        }
    }
    if(out[mx]==1)
    {
        a = n-2;
        mx -= 2;
        a -= mx;  //cout <<a<<" "<<mx<<endl;
        cout <<max(0,a/(mx+1))<<endl;
        return ;
    }
    a = n-2*out[mx];
    mx = mx-2;
    a -= mx*out[mx+2];   //cout <<a<<" "<<mx<<" "<<out[mx+2]<<endl;
    cout <<max(0,out[mx+2]-1+a/(mx+1))<<endl;
}
int  main()
{
//    Fast1
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

