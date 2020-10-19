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
    ll i,j,n,m,k,l=0,ans=0,dif=0,left,right;
    cin >> n >> k;
    string s;
    cin >> s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='b') dif++;

        while(dif>k)
        {
            if(s[l]=='b') dif--;
            l++;
        }
        ans = max(ans,i-l+1);
    }
    l=0; dif=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='a') dif++;

        while(dif>k)
        {
            if(s[l]=='a') dif--;
            l++;
        }
        ans = max(ans,i-l+1);
    }
    cout <<ans<<endl;
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

