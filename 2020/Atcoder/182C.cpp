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
ll x;

ll rec(string s)
{
    ll i,j,sz=s.size(),n=0,t,mn=Mod;   // cout <<s<<" "<<sz<<endl;
    for(i=0; i<sz; i++)
    {
        n = n*10+s[i]-'0';
    }
    if(n%3==0) return x-sz;
    if(sz==1) return Mod;
    string s2=s;
    s2.resize(sz-1);

    for(i=0; i<sz; i++)
    {
        for(j=0; j<i; j++)
            s2[j]=s[j];
        for(j=i+1; j<sz; j++)
        {
            s2[j-1]=s[j];
        }
        t = rec(s2);
        mn = min(mn,t);
    }
    return mn;
}

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> s;
    x=s.size();
    n = rec(s);
    if(n<Mod)
        cout <<n<<endl;
    else
        cout <<-1<<endl;

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

