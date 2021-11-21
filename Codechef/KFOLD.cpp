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
    int i,j,n,m,k,z=0,o=0;
    cin >> n >>k;
    string s;
    cin >> s;
    for(i=0; i<n; i++)
        if(s[i]=='0')
            z++;
        else
            o++;
    m = n/k;
    if(!z || !o)
    {
        cout <<s<<endl;
        return ;
    }
    if(o%m || z%m)
    {
        cout<<"IMPOSSIBLE\n";
        return ;
    }  //cout <<z<<" "<<o<<" "<<m<<endl;
    for(i=0; i<m; i++)
    {
        if(i&1)
        {
            for(j=0; j<o/m; j++)
                cout <<1;
            for(j=0; j<z/m; j++)
                cout <<0;
        }
        else
        {
            for(j=0; j<z/m; j++)
                cout <<0;
            for(j=0; j<o/m; j++)
                cout <<1;
        }
    }
    cout <<endl;
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

