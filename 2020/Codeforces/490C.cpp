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
bool vis[limit];
void solve(int t)
{
    ll i,j,n,m,a,b,rem=0,ck=-1,k=1;
    string s;
    cin >> s;
    cin >> a >> b;
    ll sz=s.size();

    for(i=sz-1; i>=0; i--)
    {
        rem = (rem+(s[i]-'0')*k)%b;
        k =(k*10)%b;
        if(s[i]=='0' || rem) continue;
        vis[i]=1;
    }
    rem = 0;
    for(i=0; i<sz-1; i++)
    {
        rem = (rem*10+s[i]-'0')%a;
        if(rem || vis[i+1]==0) continue;
        ck = i;
        break;
    }
    if(ck>=0)
    {
        cout <<"YES\n";
        for(i=0; i<sz; i++)
        {
            cout <<s[i];
            if(i==ck)
                cout <<"\n";
        }
    }
    else
        cout <<"NO";
    cout <<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


