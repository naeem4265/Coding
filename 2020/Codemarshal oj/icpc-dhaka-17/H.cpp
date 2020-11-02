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

void solve(int n)
{
    int i,j,m,k,x,y;
    vector<int>L,R;
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x, &y);
        L.pb(x-y);
        R.pb(x+y);
    }
    L.pb(Mod);
    R.pb(Mod);
    sort(L.begin(),L.end());
    sort(R.begin(),R.end());
    int ct=0,ans=0;
    for(k=0,i=0,j=0; k<11000; k++)
    {
        while(L[i]<=k)
        {
            ct++;
            i++;
        }
        if(ans<ct)
            ans = ct;
                 //cout <<L[i]<<" Lans "<<ct<<" "<<ans<<endl;
        while(R[j]<=k)
        {
            ct--;
            j++;
        }
    }
    printf("%d\n",ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    while(1)
    {
        scanf("%d",&t);
        if(t)
            solve(t);
        else
            break;
    }
    return 0;
}

