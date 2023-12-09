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
bool D[limit];

void solve(int t)
{
    ll i,j,n,m,k,l=1,ans=0,dif=0,left,right;
    cin >> n >> k;
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        if(!D[i]) dif++;

        while(dif>k)
        {
            if(!D[l]) dif--;
            l++;
        }
        if(ans<(i-l+1))
        {
            left = l;
            right = i;
            ans = i+1-l;
        }
    }
    cout <<ans<<endl;
    for(i=1; i<=n; i++)
    {
        if(i>=left && i<=right)
            cout <<"1 ";
        else
            cout <<D[i]<<" ";
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
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

