#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("input.txt","r",stdin);
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
    ll i,j,n,m,k,ind1,ind2;

    cin >> n >> m;
    ll D[n+5],E[m+5];
    for(i=0; i<n; i++)  cin >> D[i];

    for(i=0; i<n; i++)
    {
        if(D[i]>0)
        {
            for( j=n; j>i; j--)
            {
                D[j] = D[j-1];
            }
            D[i] = 0;
            ind1 = i;
            break;
        }
    }
    for(i=0; i<m; i++)
    {
        if(E[i]>0)
        {
            for( j=m; j>i; j--)
            {
                E[j] = E[j-1];
            }
            E[i] = Mod;
            ind2 = i;
            break;
        }
    }
    ll ct=0,ans = 0;  cout <<ind1<<" "<<ind2<<endl;
    for(i=ind1,j = ind2-1; j>=0; j--)
    {
        if(E[j]==E[j+1]-1) ct++;
        else ct = 1;
        while(i>=0 && D[i]>=E[j]) i--;
        ans = max(ans, min(ct,ind1-i));
    }
    for(i=ind1,j = ind2+1; j<m; j++)
    {
        if(E[j]==E[j-1]+1) ct++;
        else ct = 1;
        while(i<n && D[i]<=E[j]) i++;

        ans = max(ans, min(ct,i-ind1));
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
