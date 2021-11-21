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
int ct[limit];
void solve(int t)
{
    int a,k,i,j,n,mx=0,ans=0,temp,x,y,p,q;
    cin >> n;
    for(i=0; i<n+5; i++) ct[i]=0;
    string s;
    cin >> s;
    if(s[n-1]=='R')
        ct[0]=1;
    if(s[0]=='L')
        ct[n-1]++;
    for(i=0; i<n-1; i++)
    {
        if(s[i+1]=='L')
            ct[i]++;
        if(s[i]=='R')
            ct[i+1]++;
    }
    for(i=0; i<n; i++)
    {
        if(ct[i]!=1)
            break;
        x = i-1;
        if(x<0) x=n-1;
        y = i+1;
        if(y>=n) y=0;
        if((s[i]=='L' && s[x]=='R') || (s[i]=='R' && s[y]=='L'))
            break;
    }
    p = i;
    for(i=n-1; i>=0; i--)
    {
        if(ct[i]!=1)
            break;
        x = i-1;
        if(x<0) x=n-1;
        y = i+1;
        if(y>=n) y=0;
        if((s[i]=='L' && s[x]=='R') || (s[i]=='R' && s[y]=='L'))
            break;
    }
    q = i;
    if(q<p)
    {
        ans = max(1,1+(n-1)/3);
        cout <<ans<<endl;
        return ;
    }
    if(p>0 || q<n-1)
        ans = max(1,1+(p + (n-q-2))/3);
    for(i=p ; i<=q; i++)
    {     //cout <<i<<" "<<ct[i]<<" "<<ans<<endl;
        if(ct[i]==1)
        {
            x = i-1;
            if(x<0) x=n-1;
            y = i+1;
            if(y>=n) y=0;

            if((s[i]=='L' && s[x]=='R') || (s[i]=='R' && s[y]=='L'))
                continue;
            for(j=i+1; j<n; j++)
            {
                if(ct[j]!=1)
                    break;
            }
            temp = j-i;
            ans += max(1,1+(temp-1)/3);
            i = j-1;
        }
    }
    cout <<ans<<endl;
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


