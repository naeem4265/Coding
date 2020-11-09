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
    int i,j,n,m,k,l,r,ct=0;
    cin >> n >> k;
    int D[n+5];
    for(i=1; i<=n; i++)
        cin >> D[i];
    l= 1;r=n;
    for(i=1; i<=min(n,k); i++)
    {
        if(i&1)
        {
            cout <<D[l++];
        }
        else
        {
            cout <<D[r--];
        }
        ct++;
        if(ct<n) cout <<" ";
    }
    while(l<=r)
    {
        if(k&1)
                cout <<D[l++];
        else
                cout <<D[r--];
            ct++;
        if(ct<n) cout <<" ";
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

/*
8 2
1 2 3 4 5 6 7 8
*/
