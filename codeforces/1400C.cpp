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
    int i,j,n,m;
    string s;
    cin >> s;
    n = s.size();
    string s2=s;
    for(i=0; i<n; i++)
        s2[i]='1';
    int x;
    cin >> x;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            int l,r;
            l = i-x;
            r = i+x;
            if(l>=0)
                s2[l]='0';
            if(r<n)
                s2[r]='0';
        }
    }
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            int l,r,ck=0;
            l = i-x;
            r = i+x;
            if(l>=0)
            {
                if(s2[l]=='1')
                    ck = 1;
            }
            if(r<n)
            {
                if(s2[r]=='1')
                    ck = 1;
            }
            if(ck==0)
            {
                cout <<-1<<endl;
                return ;
            }
        }
    }
    cout <<s2<<endl;
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

